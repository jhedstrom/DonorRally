<?php

// $Id: shorturl.admin.inc,v 1.1.2.3 2010/06/16 05:13:21 inadarei Exp $

/**
 * @file
 * Admin callbacks for the ShortURL module.
 */

/**
 * Implementation of hook_admin_settings()
 */
function shorturl_admin_settings_form(&$form_state) {

  $form['shorturl_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Short Domain'),
    '#default_value' => variable_get('shorturl_domain', shorturl_default_domain()),
    '#required' => TRUE,
    '#description' => t('The domain to be used in shortened URLs. Please use the absolute URL format (i.e. http://example.com).'),
  );

  $form['shorturl_start_from'] = array(
    '#type' => 'textfield',
    '#title' => t('Start From ID#'),
    '#default_value' => variable_get('shorturl_start_from', 3844),
    '#required' => TRUE,
    '#description' => t('3844 is approximately the first 3-characters long short URI. Indicate a number that is less or more, depending on your needs.'),
  );
  
  

  return system_settings_form($form);
}

/**
 * Validate shorturl_admin_settings form submissions.
 */
function shorturl_admin_settings_form_validate($form, &$form_state) {
  
  // Make sure the domain URL is fully formed and valid
  if (!valid_url($form_state['values']['shorturl_domain'], TRUE)) {
    form_set_error('shorturl_domain', t('Invalid URL: %url', array('%url' => $form_state['values']['shorturl_domain'])));
  }
  
}