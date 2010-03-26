<?php
// $Id: admin.admin.inc,v 1.1.2.3.2.4 2010/02/12 22:49:16 yhahn Exp $

/**
 * System settings form for admin toolbar.
 */
function admin_settings_form() {  
  $form['admin_toolbar'] = array(
    '#tree' => TRUE,
    '#theme' => 'admin_settings_form'
  );
  $form['admin_toolbar']['layout'] = array(
    '#type' => 'select',
    '#title' => t('Layout'),
    '#description' => t('Choose a layout for the admin toolbar. Vertical works well with large, wide screens. Horizontal works well on screens with limited real estate.'),
    '#options' => array(
      'horizontal' => t('Horizontal'),
      'vertical' => t('Vertical'),
    ),
    '#default_value' => admin_get_settings('layout'),
  );
  $form['admin_toolbar']['position'] = array(
    '#type' => 'select',
    '#title' => t('Position'),
    '#description' => t('Choose a position for the admin toolbar that will not collide with other elements in your current theme.'),
    '#options' => array(
      'ne' => t('Top right'),
      'nw' => t('Top left'),
      'se' => t('Bottom right'),
      'sw' => t('Bottom left'),
    ),
    '#default_value' => admin_get_settings('position'),
  );

  $block_info = array();
  foreach (module_implements('block') as $module) {
    $module_blocks = module_invoke($module, 'block', 'list');
    if ($module_blocks) {
      foreach ($module_blocks as $delta => $info) {
        $block_info["{$module}-{$delta}"] = $info;
      }
    }
  }

  // Get default block options.
  $options = array();
  $enabled = array_filter(admin_get_settings('blocks')) + admin_get_default_blocks(TRUE);
  foreach ($block_info as $bid => $info) {
    if (!empty($enabled[$bid])) {
      $options[$bid] = $info['info'];
    }
  }
  asort($options);

  $form['admin_toolbar']['blocks'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => admin_get_settings('blocks'),
  );

  // Grab an array of human-readable module names. It hurts that we need to do this.
  $result = db_query("SELECT name,type,info FROM {system} WHERE type = 'module' AND status = 1");
  $modules = array();
  while ($row = db_fetch_object($result)) {
    $info = unserialize($row->info);
    $modules[$row->name] = isset($info['name']) ? $info['name'] : $row->name;
  }
  foreach (array_diff_key($block_info, $options) as $bid => $info) {
    $module = array_shift(explode('-', $bid));
    $module = isset($modules[$module]) ? $modules[$module] : $module;
    $custom_options[$module][$bid] = $info['info'];
  }
  $custom_options = $custom_options + array(-1 => '<'. t('Choose a block') .'>');
  ksort($custom_options);
  $form['admin_toolbar']['custom'] = array(
    '#type' => 'select',
    '#options' => $custom_options,
    '#default_value' => -1,
    '#element_validate' => array('admin_settings_form_custom_validate'),
    '#description' => t('Enable other blocks for use in the admin toolbar.'),
  );
  $form['admin_toolbar']['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add block'),
  );

  return system_settings_form($form);
}

/**
 * Element validator for custom block adder. Moves values within
 * $form_state['values'] and prevents additional variables from being saved.
 */
function admin_settings_form_custom_validate($element, &$form_state) {
  if ($form_state['values']['admin_toolbar']['custom'] != -1) {
    $bid = $form_state['values']['admin_toolbar']['custom'];
    $form_state['values']['admin_toolbar']['blocks'][$bid] = $bid;
  }
  unset($form_state['values']['admin_toolbar']['custom']);
  unset($form_state['values']['admin_toolbar']['add']);
}

/**
 * Theme function for the admin settings form.
 */
function theme_admin_settings_form($form) {
  $rows = array();

  // Admin blocks
  $header = array(array('data' => t('Administrative blocks'), 'colspan' => 2));
  $default_blocks = admin_get_default_blocks(TRUE);
  foreach ($default_blocks as $block) {
    $rows[] = array(array(
        'data' => drupal_render($form['blocks'][$block]),
        'colspan' => 2
    ));
  }

  // "Custom" blocks
  $custom = array_diff(element_children($form['blocks']), $default_blocks);
  $rows[] = array(array('data' => t('Other blocks'), 'colspan' => 2, 'header' => TRUE));
  if (!empty($custom)) {
    foreach ($custom as $block) {
      $rows[] = array(array(
        'data' => drupal_render($form['blocks'][$block]),
        'colspan' => 2
      ));
    }
  }
  $rows[] = array(drupal_render($form['custom']), drupal_render($form['add']));
  $form['blocks']['#children'] = theme('table', $header, $rows);
  return drupal_render($form);
}
