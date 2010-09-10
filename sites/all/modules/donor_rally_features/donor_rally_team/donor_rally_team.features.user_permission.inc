<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_team_user_default_permissions() {
  $permissions = array();

  // Exported permission: create team content
  $permissions['create team content'] = array(
    'name' => 'create team content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any team content
  $permissions['delete any team content'] = array(
    'name' => 'delete any team content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own team content
  $permissions['delete own team content'] = array(
    'name' => 'delete own team content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any team content
  $permissions['edit any team content'] = array(
    'name' => 'edit any team content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: edit field_captain_email
  $permissions['edit field_captain_email'] = array(
    'name' => 'edit field_captain_email',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_captain_first_name
  $permissions['edit field_captain_first_name'] = array(
    'name' => 'edit field_captain_first_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_captain_last_name
  $permissions['edit field_captain_last_name'] = array(
    'name' => 'edit field_captain_last_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_captain_location
  $permissions['edit field_captain_location'] = array(
    'name' => 'edit field_captain_location',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_cash
  $permissions['edit field_cash'] = array(
    'name' => 'edit field_cash',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_cash_goal
  $permissions['edit field_cash_goal'] = array(
    'name' => 'edit field_cash_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_logo
  $permissions['edit field_logo'] = array(
    'name' => 'edit field_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_points_per_capita
  $permissions['edit field_points_per_capita'] = array(
    'name' => 'edit field_points_per_capita',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_size
  $permissions['edit field_size'] = array(
    'name' => 'edit field_size',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_team_info
  $permissions['edit field_team_info'] = array(
    'name' => 'edit field_team_info',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_total_points
  $permissions['edit field_total_points'] = array(
    'name' => 'edit field_total_points',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own team content
  $permissions['edit own team content'] = array(
    'name' => 'edit own team content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_captain_email
  $permissions['view field_captain_email'] = array(
    'name' => 'view field_captain_email',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: view field_captain_first_name
  $permissions['view field_captain_first_name'] = array(
    'name' => 'view field_captain_first_name',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: view field_captain_last_name
  $permissions['view field_captain_last_name'] = array(
    'name' => 'view field_captain_last_name',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: view field_captain_location
  $permissions['view field_captain_location'] = array(
    'name' => 'view field_captain_location',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
    ),
  );

  // Exported permission: view field_cash
  $permissions['view field_cash'] = array(
    'name' => 'view field_cash',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_cash_goal
  $permissions['view field_cash_goal'] = array(
    'name' => 'view field_cash_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_logo
  $permissions['view field_logo'] = array(
    'name' => 'view field_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_points_per_capita
  $permissions['view field_points_per_capita'] = array(
    'name' => 'view field_points_per_capita',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_size
  $permissions['view field_size'] = array(
    'name' => 'view field_size',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'campaign coordinator',
      '2' => 'team lead',
    ),
  );

  // Exported permission: view field_team_info
  $permissions['view field_team_info'] = array(
    'name' => 'view field_team_info',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_total_points
  $permissions['view field_total_points'] = array(
    'name' => 'view field_total_points',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
