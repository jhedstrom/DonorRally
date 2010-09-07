<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_team_inkind_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_food
  $permissions['edit field_food'] = array(
    'name' => 'edit field_food',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_food_goal
  $permissions['edit field_food_goal'] = array(
    'name' => 'edit field_food_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_volunteer
  $permissions['edit field_volunteer'] = array(
    'name' => 'edit field_volunteer',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_volunteer_goal
  $permissions['edit field_volunteer_goal'] = array(
    'name' => 'edit field_volunteer_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_food
  $permissions['view field_food'] = array(
    'name' => 'view field_food',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_food_goal
  $permissions['view field_food_goal'] = array(
    'name' => 'view field_food_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_volunteer
  $permissions['view field_volunteer'] = array(
    'name' => 'view field_volunteer',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_volunteer_goal
  $permissions['view field_volunteer_goal'] = array(
    'name' => 'view field_volunteer_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
