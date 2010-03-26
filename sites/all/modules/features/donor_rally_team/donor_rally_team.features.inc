<?php

/**
 * Implementation of hook_default_box().
 */
function donor_rally_team_default_box() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_default_box', $args);
}

/**
 * Implementation of hook_content_default_fields().
 */
function donor_rally_team_content_default_fields() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function donor_rally_team_context_default_contexts() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_team_ctools_plugin_api() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function donor_rally_team_fieldgroup_default_groups() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function donor_rally_team_imagecache_default_presets() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function donor_rally_team_node_info() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.features.node');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_team_user_default_permissions() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_team_strongarm() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function donor_rally_team_views_default_views() {
  module_load_include('inc', 'donor_rally_team', 'donor_rally_team.features.views');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_views_default_views', $args);
}
