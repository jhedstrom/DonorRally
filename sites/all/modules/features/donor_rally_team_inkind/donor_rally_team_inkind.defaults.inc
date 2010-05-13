<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _donor_rally_team_inkind_content_default_fields() {
  $fields = array();

  // Exported field: field_food
  $fields[] = array(
    'field_name' => 'field_food',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '51',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' pound| pounds',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '12',
    'scale' => '4',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_food][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Food',
      'weight' => '15',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_food_goal
  $fields[] = array(
    'field_name' => 'field_food_goal',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_team_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' pound| pounds',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_food_goal][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Food Goal',
      'weight' => '10',
      'description' => 'Each 5 pounds of food donated is 1 point.  Remember to schedule your barrel deliveries and pickups on the management page.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_offline_food
  $fields[] = array(
    'field_name' => 'field_offline_food',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '54',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' pound| pounds',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '12',
    'scale' => '4',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_offline_food][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Offline Food',
      'weight' => '18',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_offline_volunteer
  $fields[] = array(
    'field_name' => 'field_offline_volunteer',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '56',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_offline_volunteer][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Offline Volunteer Shifts',
      'weight' => '19',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_volunteer
  $fields[] = array(
    'field_name' => 'field_volunteer',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '53',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_volunteer][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Volunteer Shifts',
      'weight' => '16',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_volunteer_goal
  $fields[] = array(
    'field_name' => 'field_volunteer_goal',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_team_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_volunteer_goal][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Volunteer Shifts Goal',
      'weight' => '11',
      'description' => 'A ‘shift’ is one person volunteering at the food bank for a 2-3 hour shift.  Each shift counts for 10 points.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Translatables
  array(
    t('Food'),
    t('Food Goal'),
    t('Offline Food'),
    t('Offline Volunteer Shifts'),
    t('Volunteer Shifts'),
    t('Volunteer Shifts Goal'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _donor_rally_team_inkind_ctools_plugin_api() {
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
function _donor_rally_team_inkind_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_food
  $permissions[] = array(
    'name' => 'edit field_food',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit field_food_goal
  $permissions[] = array(
    'name' => 'edit field_food_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_volunteer
  $permissions[] = array(
    'name' => 'edit field_volunteer',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit field_volunteer_goal
  $permissions[] = array(
    'name' => 'edit field_volunteer_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: view field_food
  $permissions[] = array(
    'name' => 'view field_food',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_food_goal
  $permissions[] = array(
    'name' => 'view field_food_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_volunteer
  $permissions[] = array(
    'name' => 'view field_volunteer',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_volunteer_goal
  $permissions[] = array(
    'name' => 'view field_volunteer_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  return $permissions;
}
