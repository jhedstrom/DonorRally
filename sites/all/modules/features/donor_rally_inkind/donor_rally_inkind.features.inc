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
 * Implementation of hook_fieldgroup_default_groups().
 */
function donor_rally_inkind_fieldgroup_default_groups() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_node_info().
 */
function donor_rally_inkind_node_info() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.features.node');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_inkind_user_default_permissions() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_inkind_strongarm() {
  module_load_include('inc', 'donor_rally_inkind', 'donor_rally_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_inkind_strongarm', $args);
}
