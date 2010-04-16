<?php

// $Id$

/**
 * @file
 * Donor Rally administrator settings form.
 */

/**
 * Global competitive drive settings
 */
function donor_rally_settings_form($tid) {
  $form = array();

  $options = module_invoke_all('donor_rally_payment_gateway');
  if (empty($options)) {
    drupal_set_message(t('No payment gateways found. Payment gateways can be enabled on the <a href="!url">modules page</a>.', array('!url' => url('admin/build/modules'))), 'error');
  }
  else {
    $form['payment_gateway'] = array(
      '#title' => t('Donor Rally Payment Gateway'),
      '#type' => 'select',
      '#required' => TRUE,
      '#options' => $options,
      '#description' => t('Select payment gateway to use. Gateways can be enabled on the <a href="!url">modules page</a>.', array('!url' => url('admin/build/modules'))),
      '#default_value' => variable_get('donor_rally_payment_gateway', ''),
    );
  }

  $form['point_scales'] = array(
    '#type' => 'fieldset',
    '#title' => t('Point conversions'),
  );
  $form['point_scales']['cash'] = array(
    '#title' => t('Cash scale'),
    '#description' => t('Scaling factor to turn dollars into points'),
    '#type' => 'textfield',
    '#default_value' => variable_get('donor_rally_cash_scale', 1.0),
    '#required' => TRUE,
  );
  // @TODO move these to an in-kind module
  $form['point_scales']['food'] = array(
    '#title' => t('Food scale'),
    '#description' => t('Scaling factor to turn pounds of food into points'),
    '#type' => 'textfield',
    '#default_value' => variable_get('donor_rally_food_scale', 1.0),
    '#required' => TRUE,
  );
  $form['point_scales']['volunteer'] = array(
    '#title' => t('Volunteer scale'),
    '#description' => t('Scaling factor to turn volunteer shifts into points'),
    '#type' => 'textfield',
    '#default_value' => variable_get('donor_rally_volunteer_scale', 1.0),
    '#required' => TRUE,
  );

  if (variable_get('donor_rally_debug', FALSE)) {
    $form['alias_teams'] = array(
      '#title' => t('Alias competititon teams to existing Tracking_Code values?'),
      '#type' => 'textfield',
      '#description' => t('Put yes here to alias teams to DIA cash totals data'),
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * Validates our global settings form.
 */
function donor_rally_settings_form_validate($form, &$form_state) {
  foreach (array('cash', 'food', 'volunteer') as $element) {
    if ((float)$form_state['values'][$element] < 0.0) {
      form_set_error($element, t('%element must be greater than or equal to zero.', array('%element' => $form['point_scales'][$element]['#title'])));
    }
  }
}

/**
 * Saves our global settings form.
 */
function donor_rally_settings_form_submit($form, &$form_state) {
  variable_set('donor_rally_cash_scale', $form_state['values']['cash']);
  variable_set('donor_rally_food_scale', $form_state['values']['food']);
  variable_set('donor_rally_volunteer_scale', $form_state['values']['volunteer']);
  if (isset($form_state['values']['payment_gateway'])) {
    variable_set('donor_rally_payment_gateway', $form_state['values']['payment_gateway']);
  }

  if (variable_get('donor_rally_debug', FALSE)) {
    if ($form_state['values']['alias_teams'] === 'yes') {
      _donor_rally_set_debug_aliases();
    }
  }
  donor_rally_refresh_all();
}

