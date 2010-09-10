<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_team_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create team_blog_post content
  $permissions['create team_blog_post content'] = array(
    'name' => 'create team_blog_post content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any team_blog_post content
  $permissions['delete any team_blog_post content'] = array(
    'name' => 'delete any team_blog_post content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own admin_blog_post content
  $permissions['delete own admin_blog_post content'] = array(
    'name' => 'delete own admin_blog_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: delete own team_blog_post content
  $permissions['delete own team_blog_post content'] = array(
    'name' => 'delete own team_blog_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit any admin_blog_post content
  $permissions['edit any admin_blog_post content'] = array(
    'name' => 'edit any admin_blog_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: edit any team_blog_post content
  $permissions['edit any team_blog_post content'] = array(
    'name' => 'edit any team_blog_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: edit own admin_blog_post content
  $permissions['edit own admin_blog_post content'] = array(
    'name' => 'edit own admin_blog_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: edit own team_blog_post content
  $permissions['edit own team_blog_post content'] = array(
    'name' => 'edit own team_blog_post content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
