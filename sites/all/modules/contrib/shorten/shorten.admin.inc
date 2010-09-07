<?php
// $Id$

/**
 * @file
 *   Settings for the Shorten module.
 */

/**
 * Settings page.
 */
function shorten_admin($form_state) {
  $form['shorten_www'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use "www." instead of "http://"'),
    '#description' => t('"www." is shorter, but "http://" is automatically link-ified by more services.'),
    '#default_value' => variable_get('shorten_www', TRUE),
  );
  $methods = array();
  if (function_exists('file_get_contents')) {
    $methods['php'] = t('PHP');
  }
  if (function_exists('curl_exec')) {
    $methods['curl'] = t('cURL');
  }
  if (empty($methods)) {
    if (variable_get('shorten_method', _shorten_method_default()) != 'none') {
      variable_set('shorten_method', 'none');
    }
    $form['shorten_method'] = array(
      '#type' => 'radios',
      '#title' => t('Method'),
      '#description' => '<p>'. t('The method to use to retrieve the abbreviated URL.') .'</p>'.
        '<p><strong>'. t('Your PHP installation does not support the URL abbreviation feature of the Shorten module.') .'</strong> '.
        t('You must compile PHP with either the cURL library or the file_get_contents() function to use this option.') .'</p>',
      '#default_value' => 'none',
      '#options' => array('none' => t('None')),
      '#disabled' => TRUE,
    );
    $form['shorten_service'] = array(
      '#type' => 'radios',
      '#title' => t('Service'),
      '#description' => t('The service to use to create the abbreviated URL.'),
      '#default_value' => 'none',
      '#options' => array('none' => t('None')),
    );
    $form['shorten_service_backup'] = array(
      '#type' => 'radios',
      '#title' => t('Backup Service'),
      '#description' => t('The service to use to create the abbreviated URL if the primary service is down.'),
      '#default_value' => 'none',
      '#options' => array('none' => t('None')),
    );
  }
  else {
    $form['shorten_method'] = array(
      '#type' => 'radios',
      '#title' => t('Method'),
      '#description' => t('The method to use to retrieve the abbreviated URL. cURL is much faster, if available.'),
      '#default_value' => variable_get('shorten_method', _shorten_method_default()),
      '#options' => $methods,
    );
    $all_services = module_invoke_all('shorten_service');
    $services = array();
    foreach ($all_services as $key => $value) {
      $services[$key] = $key;
    }
    $services['none'] = t('None');
    $form['shorten_service'] = array(
      '#type' => 'select',
      '#title' => t('Service'),
      '#description' => t('The default service to use to create the abbreviated URL.'),
      '#default_value' => variable_get('shorten_service', 'is.gd'),
      '#options' => $services,
    );
    $form['shorten_service_backup'] = array(
      '#type' => 'select',
      '#title' => t('Backup Service'),
      '#description' => t('The service to use to create the abbreviated URL if the primary or requested service is down.'),
      '#default_value' => variable_get('shorten_service_backup', 'TinyURL'),
      '#options' => $services,
    );
    $form['shorten_show_service'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show the list of URL shortening services in the user interface'),
      '#default_value' => variable_get('shorten_show_service', FALSE),
      '#description' => t('Allow users to choose which service to use in the Shorten URLs block and page.'),
    );
  }
  if (module_exists('token')) {
    $form['shorten_generate_token'] = array(
      '#type' => 'checkbox',
      '#title' => t('Generate a shortened URL for nodes for use as tokens'),
      '#description' => t('This option could create a lot of little-used short URLs. '.
        'However, performance load is minimized because the shortened URLs are cached. '.
        'Note that if you turn this off, you should not use the [node:url] token.'),
      '#default_value' => variable_get('shorten_generate_token', 1),
    );
  }
  $form['shorten_use_alias'] = array(
    '#type' => 'checkbox',
    '#title' => t('Shorten aliased URLs where possible'),
    '#description' => t('Where possible, generate shortened URLs based on the aliased version of a URL.')
      .' <strong>'. t('Some integrated modules ignore this.') .'</strong>',
    '#default_value' => variable_get('shorten_use_alias', 1),
  );
  $form['shorten_cache_duration'] = array(
    '#type' => 'textfield',
    '#field_prefix' => t('Cache shortened URLs for') .' ',
    '#field_suffix' => ' '. t('seconds'),
    '#description' => t('Shortened URLs are stored after retrieval to improve performance.') .' '.
      t('Enter the number of seconds for which you would like the shortened URLs to be stored.') .' '.
      t('Leave this field blank to store shortened URLs indefinitely (although this is not recommended).') .' '.
      t('The default value is 1814400 (3 weeks).'),
    '#size' => 11,
    '#default_value' => variable_get('shorten_cache_duration', 1814400),
  );
  unset($services['none']);
  $form['shorten_invisible_services'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Disallowed services'),
    '#description' => t('Checking the box next to a service will make it <strong>unavailable</strong> for use in the Shorten URLs block and page. '.
      'If you disallow all services, the primary service will be used.'),
    '#default_value' => variable_get('shorten_invisible_services', array()),
    '#options' => $services,
  );
  return system_settings_form($form);
}

/**
 * Validation handler for shorten_admin().
 */
function shorten_admin_validate($form, &$form_state) {
  $v = $form_state['values'];
  if ($v['shorten_service'] == $v['shorten_service_backup'] && $v['shorten_service_backup'] != 'none') {
    form_set_error('shorten_service_backup', t('You must select a backup abbreviation service that is different than your primary service.'));
  }
  elseif (($v['shorten_service'] == 'bit.ly' && $v['shorten_service_backup'] == 'j.mp') ||
    ($v['shorten_service'] == 'j.mp' && $v['shorten_service_backup'] == 'bit.ly')) {
    form_set_error('shorten_service_backup', t('j.mp and bit.ly are the same service.') .' '.
      t('You must select a backup abbreviation service that is different than your primary service.'));
  }
  if ($v['shorten_service'] == 'none' && $v['shorten_service_backup'] != 'none') {
    drupal_set_message(t('You have selected a backup URL abbreviation service, but no primary service.') .' '.
      t('Your URLs will not be abbreviated with these settings.'));
  }
  if ($v['shorten_cache_duration'] !== '' && (
    !is_numeric($v['shorten_cache_duration']) ||
    round($v['shorten_cache_duration']) != $v['shorten_cache_duration'] ||
    $v['shorten_cache_duration'] < 0
  )) {
    form_set_error('shorten_cache_duration', t('The cache duration must be a positive integer or left blank.'));
  }
}

/**
 * Submit handler for shorten_admin().
 */
function shorten_admin_submit($form, &$form_state) {
  //Changed settings usually mean that different URLs should be used.
  cache_clear_all('*', 'cache_shorten', TRUE);
}

/**
 * Keys page.
 */
function shorten_keys($form_state) {
  $form['shorten_adjix_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Adjix'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['shorten_adjix_fieldset']['shorten_adjix'] = array(
    '#type' => 'textfield',
    '#title' => t('Adjix Partner ID'),
    '#default_value' => variable_get('shorten_adjix', ''),
  );
  $form['shorten_adjix_fieldset']['shorten_adjix_custom'] = array(
    '#type' => 'textfield',
    '#title' => t('Adjix Custom Domain'),
    '#default_value' => variable_get('shorten_adjix_custom', ''),
    '#description' => t('Optional. Include the final slash, e.g. http://www.google.com/'),
  );
  $form['shorten_bitly'] = array(
    '#type' => 'fieldset',
    '#title' => t('Bit.ly and j.mp'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['shorten_bitly']['shorten_bitly_login'] = array(
    '#type' => 'textfield',
    '#title' => t('Bit.ly Login'),
    '#default_value' => variable_get('shorten_bitly_login', ''),
  );
  $form['shorten_bitly']['shorten_bitly_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Bit.ly API Key'),
    '#default_value' => variable_get('shorten_bitly_key', ''),
  );
  $form['shorten_budurl'] = array(
    '#type' => 'textfield',
    '#title' => t('BudURL API Key'),
    '#default_value' => variable_get('shorten_budurl', ''),
  );
  $form['shorten_cligs'] = array(
    '#type' => 'textfield',
    '#title' => t('Cligs API Key'),
    '#default_value' => variable_get('shorten_cligs', ''),
  );
  $form['shorten_ez'] = array(
    '#type' => 'textfield',
    '#title' => t('Ez API Key'),
    '#default_value' => variable_get('shorten_ez', ''),
  );
  $form['shorten_fwd4me'] = array(
    '#type' => 'textfield',
    '#title' => t('Fwd4.me API Key'),
    '#default_value' => variable_get('shorten_fwd4me', ''),
  );
  $form['shorten_redirec'] = array(
    '#type' => 'textfield',
    '#title' => t('Redir.ec API Key'),
    '#default_value' => variable_get('shorten_redirec', ''),
  );
  return system_settings_form($form);
}