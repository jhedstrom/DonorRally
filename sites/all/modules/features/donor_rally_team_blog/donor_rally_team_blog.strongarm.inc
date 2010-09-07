<?php

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_team_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_team_blog_post';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_team_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_admin_blog_post_pattern';
  $strongarm->value = 'administrator-posts/[title-raw]';

  $export['pathauto_node_admin_blog_post_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_team_blog_post_pattern';
  $strongarm->value = 'team-posts/[title-raw]';

  $export['pathauto_node_team_blog_post_pattern'] = $strongarm;
  return $export;
}
