<?php

/**
 * Implementation of hook_content_default_fields().
 */
function donor_rally_inkind_content_default_fields() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_inkind_ctools_plugin_api() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_inkind_user_default_permissions() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_user_default_permissions', $args);
}
