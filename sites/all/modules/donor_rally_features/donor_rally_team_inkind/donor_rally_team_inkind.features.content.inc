<?php

/**
 * Implementation of hook_content_default_fields().
 */
function donor_rally_team_inkind_content_default_fields() {
  $fields = array();

  // Exported field: field_food
  $fields['team-field_food'] = array(
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
  $fields['team-field_food_goal'] = array(
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
  $fields['team-field_offline_food'] = array(
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
  $fields['team-field_offline_volunteer'] = array(
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
  $fields['team-field_volunteer'] = array(
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
  $fields['team-field_volunteer_goal'] = array(
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
  // Included for use with string extractors like potx.
  t('Food');
  t('Food Goal');
  t('Offline Food');
  t('Offline Volunteer Shifts');
  t('Volunteer Shifts');
  t('Volunteer Shifts Goal');

  return $fields;
}
