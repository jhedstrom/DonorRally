<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_team_blog_ctools_plugin_api() {
  module_load_include('inc', 'donor_rally_team_blog', 'donor_rally_team_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_blog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function donor_rally_team_blog_node_info() {
  module_load_include('inc', 'donor_rally_team_blog', 'donor_rally_team_blog.features.node');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_blog_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_team_blog_user_default_permissions() {
  module_load_include('inc', 'donor_rally_team_blog', 'donor_rally_team_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_blog_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_team_blog_strongarm() {
  module_load_include('inc', 'donor_rally_team_blog', 'donor_rally_team_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_blog_strongarm', $args);
}
