<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function donor_rally_social_user_default_permissions() {
  $permissions = array();

  // Exported permission: access forward
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access service links
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer forward
  $permissions['administer forward'] = array(
    'name' => 'administer forward',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer service links
  $permissions['administer service links'] = array(
    'name' => 'administer service links',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: override email address
  $permissions['override email address'] = array(
    'name' => 'override email address',
    'roles' => array(),
  );

  // Exported permission: override flood control
  $permissions['override flood control'] = array(
    'name' => 'override flood control',
    'roles' => array(),
  );

  return $permissions;
}
