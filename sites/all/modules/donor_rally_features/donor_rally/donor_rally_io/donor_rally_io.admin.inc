<?php

// $Id$

/**
 * @file
 * Import form and submit hooks for Donor Rally IO.
 */

/**
 * Import form.
 */
function donor_rally_io_import_form() {
  $form['csv_upload'] = array(
    '#type'  => 'file',
    '#title' => t('Upload CSV file'),
    '#description' => t('Select a CSV file that matches the <a href="!url">CSV template</a>. <strong>Values must be comma-separated</strong>.', array('!url' => url('admin/content/competitive-drive/export'))),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
  );

  $form['#attributes']['enctype'] = 'multipart/form-data';

  return $form;
}

function donor_rally_io_import_form_validate($form, &$form_state) {
  $validators = array(
    // Use the filefield validator instead of file_validate_extensions
    // which skips the check for uid 1.
    'filefield_validate_extensions' => array('csv'),
  );
  if (!$file = file_save_upload('csv_upload', $validators, FALSE)) {
    form_set_error('csv_upload', t('CSV file is required to import teams'));
    return;
  }
  $form_state['values']['csv'] = (array) $file;
}

function donor_rally_io_import_form_submit($form, &$form_state) {
  $file = $form_state['values']['csv'];
  $data = _donor_rally_io_get_import_file($file['filepath']);
  if (!$data) {
    form_set_error('csv_upload', t('Unable to open the CSV file.'));
    return;
  }

  // Verify header data.
  if (!_donor_rally_io_verify_csv_match($data[0])) {
    form_set_error('csv_upload', t('The uploaded CSV file header row does not match the template.'));
    return;
  }

  // Import the CSV.
  $rows = _donor_rally_io_import_data($data);
  drupal_set_message(t('Updated %count teams.', array('%count' => $rows)));
  global $user;
  watchdog('donor_rally', '@user updated %count teams', array('@user' => $user->name, '%count' => $rows), WATCHDOG_NOTICE);
}

/**
 * @return Array of rows from a csv file.
 */
function _donor_rally_io_get_import_file($path) {
  if (is_readable($path)) {
    $handle = fopen($path,'r');
  }
  if (!$handle) {
    return FALSE;
  }
  $rows = array();
  $max_length = 1000;
  while ($data = fgetcsv($handle, $max_length)) {
    $rows[] = $data;
  }

  fclose($handle);
  return $rows;
}

function _donor_rally_io_verify_csv_match($header) {
  if (!$header) {
    return FALSE;
  }

  // Use the export view to verify.
  $view = views_get_view('team_export');
  $fields = $view->display['default']->display_options['fields'];
  $index = 0;
  foreach ($fields as $field) {
    if ($header[$index] != $field['label']) {
      return FALSE;
    }
    $index ++;
  }
  return TRUE;
}

function _donor_rally_io_import_data($data) {
  $header = array_shift($data);
  $errors = FALSE;
  foreach ($data as $key => $row) {
    // Map structure to the row.
    $transformed[$key] = _donor_rally_io_map_row_structure($row);
    // Load the node.
    $node = node_load($transformed[$key]['nid']);
    if (!$node) {
      // Abort entire upload if node isn't found?
      drupal_set_message(t('Unable to find the database record matching ID %nid for this row: %row', array('%nid' => $transformed[$key]['nid'], '%row' => implode(', ', $row))), 'error');
      $errors = TRUE;
    }
    $transformed[$key]['node'] = $node;
  }
  if ($errors) {
    form_set_error('csv_upload', t('The above errors must be addressed before the import can proceed.'));
    return 0;
  }

  $update = array(
    'field_raisers_edge_id',
    'field_offline_cash',
    'field_offline_food',
    'field_offline_volunteer',
  );
  $updates = 0;
  foreach ($transformed as $row) {
    $node = $row['node'];

    foreach ($update as $field) {
      $node->{$field}[0]['value'] = $row[$field];
    }

    node_save($node);
    $updates++;
  }

  // Need to recalculate "total points" per node... might as well call
  // refresh_all() (which also happens to refresh from Salsa).
  donor_rally_refresh_all(); 
  return $updates;
}

/**
 * Use the view to determine the structure of the imported row.
 */
function _donor_rally_io_map_row_structure($row) {
  static $fields;
  if (!$fields) {
    $view = views_get_view('team_export');
    $fields = $view->display['default']->display_options['fields'];
  }
  $new_row = array();
  $index = 0;
  foreach ($fields as $name => $field) {
    $object_key = str_replace('_value', '', $name);
    $new_row[$object_key] = $row[$index];
    $index ++;
  }
  return $new_row;
}
