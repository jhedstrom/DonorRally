<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_social_ctools_plugin_api() {
  module_load_include('inc', 'donor_rally_social', 'donor_rally_social.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_social_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_social_user_default_permissions() {
  module_load_include('inc', 'donor_rally_social', 'donor_rally_social.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_social_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_social_strongarm() {
  module_load_include('inc', 'donor_rally_social', 'donor_rally_social.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_social_strongarm', $args);
}
