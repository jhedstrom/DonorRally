<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _donor_rally_team_blog_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _donor_rally_team_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create team_blog_post content
  $permissions[] = array(
    'name' => 'create team_blog_post content',
    'roles' => array(
      '0' => 'team lead',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete any team_blog_post content
  $permissions[] = array(
    'name' => 'delete any team_blog_post content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete own admin_blog_post content
  $permissions[] = array(
    'name' => 'delete own admin_blog_post content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: delete own team_blog_post content
  $permissions[] = array(
    'name' => 'delete own team_blog_post content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit any admin_blog_post content
  $permissions[] = array(
    'name' => 'edit any admin_blog_post content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit any team_blog_post content
  $permissions[] = array(
    'name' => 'edit any team_blog_post content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit own admin_blog_post content
  $permissions[] = array(
    'name' => 'edit own admin_blog_post content',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'web admin',
    ),
  );

  // Exported permission: edit own team_blog_post content
  $permissions[] = array(
    'name' => 'edit own team_blog_post content',
    'roles' => array(
      '0' => 'team lead',
      '1' => 'web admin',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _donor_rally_team_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_team_blog_post';
  $strongarm->value = array(
    '0' => 'status',
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
