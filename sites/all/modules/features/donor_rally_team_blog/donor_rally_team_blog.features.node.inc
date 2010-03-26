<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _donor_rally_team_blog_node_info() {
  $items = array(
    'admin_blog_post' => array(
      'name' => t('Admin Blog Post'),
      'module' => 'features',
      'description' => t('Blog posts written by SF Food Bank administrators.'),
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
