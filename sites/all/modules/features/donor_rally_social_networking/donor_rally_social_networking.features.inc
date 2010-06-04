<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_social_networking_ctools_plugin_api() {
  module_load_include('inc', 'donor_rally_social_networking', 'donor_rally_social_networking.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_social_networking_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_social_networking_strongarm() {
  module_load_include('inc', 'donor_rally_social_networking', 'donor_rally_social_networking.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_social_networking_strongarm', $args);
}
