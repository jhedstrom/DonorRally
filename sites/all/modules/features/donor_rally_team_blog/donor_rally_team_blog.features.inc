<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_team_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function donor_rally_team_blog_node_info() {
  $items = array(
    'admin_blog_post' => array(
      'name' => t('Admin Blog Post'),
      'module' => 'features',
      'description' => t('Blog posts written by Donor Rally administrators.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'team_blog_post' => array(
      'name' => t('Team Blog Post'),
      'module' => 'features',
      'description' => t('Blog posts written by Team Coordinators.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function donor_rally_team_blog_views_api() {
  return array(
    'api' => '2',
  );
}
