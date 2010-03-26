<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _donor_rally_team_content_default_fields() {
  $fields = array();

  // Exported field: field_captain_email
  $fields[] = array(
    'field_name' => 'field_captain_email',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_captain_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '512',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '40',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_captain_email][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '43',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_captain_first_name
  $fields[] = array(
    'field_name' => 'field_captain_first_name',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_captain_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '60',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_captain_first_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First name',
      'weight' => '40',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_captain_last_name
  $fields[] = array(
    'field_name' => 'field_captain_last_name',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_captain_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '60',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_captain_last_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last name',
      'weight' => '41',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_captain_location
  $fields[] = array(
    'field_name' => 'field_captain_location',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_captain_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '4',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
          'phone' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '25',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'country' => 'country',
          'locpick' => 'locpick',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'phone' => 0,
          'province_name' => 0,
        ),
      ),
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'lid' => array(
                  'default' => FALSE,
                ),
                'name' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 2,
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 4,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 6,
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 8,
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 10,
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 12,
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => 14,
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => 1,
                  'weight' => 20,
                  'nodiff' => TRUE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
                'phone' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 25,
                ),
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '42',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_captain_title
  $fields[] = array(
    'field_name' => 'field_captain_title',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_captain_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '6',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '6',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_captain_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Title',
      'weight' => '39',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_cash
  $fields[] = array(
    'field_name' => 'field_cash',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '52',
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
    'prefix' => '$',
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
          '_error_element' => 'default_value_widget][field_cash][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cash',
      'weight' => '53',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_cash_goal
  $fields[] = array(
    'field_name' => 'field_cash_goal',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '3',
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
    'prefix' => '$',
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
          '_error_element' => 'default_value_widget][field_cash_goal][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cash Goal',
      'weight' => '3',
      'description' => 'Each dollar donated is 1 point.  Your goal includes on-line giving, individual and company gifts, and any matches you submit.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_firm_name
  $fields[] = array(
    'field_name' => 'field_firm_name',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_firm_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '160',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_firm_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'rows' => 5,
      'size' => '60',
      'label' => 'Firm name',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_firm_website
  $fields[] = array(
    'field_name' => 'field_firm_website',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_firm_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '256',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '40',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_firm_website][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Web site',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_location
  $fields[] = array(
    'field_name' => 'field_location',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_firm_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '4',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
          'phone' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '25',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'country' => 'country',
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'phone' => 0,
        ),
      ),
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'phone' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '2',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '4',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '6',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '8',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '10',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '12',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => '4',
                  'weight' => '14',
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => '0',
                  'weight' => '20',
                  'nodiff' => TRUE,
                ),
                'phone' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '25',
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'name' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 2,
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 4,
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 6,
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 8,
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 10,
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 12,
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => 1,
                          'weight' => 14,
                        ),
                        'locpick' => array(
                          'default' => FALSE,
                          'collect' => 1,
                          'weight' => 20,
                          'nodiff' => TRUE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                        'phone' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 25,
                        ),
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'locpick' => 'locpick',
                'province_name' => 'province_name',
                'country_name' => 'country_name',
                'map_link' => 'map_link',
                'coords' => 'coords',
                'name' => 0,
                'street' => 0,
                'additional' => 0,
                'city' => 0,
                'province' => 0,
                'postal_code' => 0,
                'country' => 0,
                'phone' => 0,
              ),
            ),
          ),
          'country' => 'us',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '1',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_logo
  $fields[] = array(
    'field_name' => 'field_logo',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_team_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'teams',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '512K',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'default-team-logo.jpg',
        'filepath' => 'sites/default/files/imagefield_default_images/default-team-logo.jpg',
        'filemime' => 'image/jpeg',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/default-team-logo.jpg',
        'filesize' => 99711,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1265236504,
        'fid' => '425',
      ),
      'use_default_image' => 1,
      'label' => 'Logo',
      'weight' => '7',
      'description' => 'Please upload your firm logo, or team logo, or a picture of your choosing. This image will be displayed on your team page.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_points_per_capita
  $fields[] = array(
    'field_name' => 'field_points_per_capita',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '57',
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
          '_error_element' => 'default_value_widget][field_points_per_capita][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Points Per Capita',
      'weight' => '58',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_size
  $fields[] = array(
    'field_name' => 'field_size',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '2',
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
      'token' => array(
        'format' => 'us_0',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'person|people',
    'min' => '1',
    'max' => '25000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_size][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '2',
      'description' => 'How many people work with the firm?',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_team_info
  $fields[] = array(
    'field_name' => 'field_team_info',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_team_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '8000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => 'Thank you for participating in Food from the Bar 2010. Your contribution will directly aid people in need in our community. Please use this page to make your donations and track our progress. You can also see how we measure up against other participating firms by clicking on the Firm Ranking button below. Together we can make this the most successful Food from the Bar yet!',
          '_error_element' => 'default_value_widget][field_team_info][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Team greeting',
      'weight' => '6',
      'description' => 'Please write a short message to inspire your team. This paragraph will remain at the top center of your team’s page through the drive.  You will also have the opportunity to write blog entries, published to your team page, informing your team of accomplishments and events related to your effort.  You can create blog entries or edit this “Dear Team” text on your management page.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_total_points
  $fields[] = array(
    'field_name' => 'field_total_points',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '58',
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
          '_error_element' => 'default_value_widget][field_total_points][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Total Points',
      'weight' => '59',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Translatables
  array(
    t('Address'),
    t('Cash'),
    t('Cash Goal'),
    t('Email'),
    t('Firm name'),
    t('First name'),
    t('IT help desk contact'),
    t('Last name'),
    t('Logo'),
    t('Points Per Capita'),
    t('Size'),
    t('Team greeting'),
    t('Title'),
    t('Total Points'),
    t('Web site'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _donor_rally_team_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'competitive_drive-section-team_lead_pages';
  $context->description = 'Pages seen by team coordinators';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-team-lead-user-pages' => array(
          'module' => 'menu',
          'delta' => 'menu-team-lead-user-pages',
          'weight' => 20,
          'region' => 'left',
          'status' => '0',
          'label' => 'Team Navigation',
          'type' => 'context_ui',
          'bid' => 'menu_menu-team-lead-user-pages',
        ),
        'competitive_drive-4' => array(
          'module' => 'competitive_drive',
          'delta' => '4',
          'weight' => 21,
          'region' => 'left',
          'status' => '0',
          'label' => 'Team Page Button',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_4',
        ),
        'competitive_drive-2' => array(
          'module' => 'competitive_drive',
          'delta' => '2',
          'weight' => 22,
          'region' => 'left',
          'status' => '0',
          'label' => 'Leaderboard Button',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['competitive_drive-section-team_lead_pages'] = array(
    t('Pages seen by team coordinators'),
  );

  $export['competitive_drive-section-team_lead_pages'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'competitive_drive-section-team_pages';
  $context->description = 'Team Pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'team/*' => 'team/*',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => 'team_page',
    ),
    'block' => array(
      'blocks' => array(
        'views-a0834de87587a506ffd1ef2e47374548' => array(
          'module' => 'views',
          'delta' => 'a0834de87587a506ffd1ef2e47374548',
          'weight' => -22,
          'region' => 'left',
          'status' => '0',
          'label' => 'Team Logo',
          'type' => 'context_ui',
          'bid' => 'views_a0834de87587a506ffd1ef2e47374548',
        ),
        'nodeblock-8' => array(
          'module' => 'nodeblock',
          'delta' => '8',
          'weight' => -21,
          'region' => 'left',
          'status' => '0',
          'label' => 'Food from the Bar makes the difference (nodeblock)',
          'type' => 'context_ui',
          'bid' => 'nodeblock_8',
        ),
        'competitive_drive-6' => array(
          'module' => 'competitive_drive',
          'delta' => '6',
          'weight' => -20,
          'region' => 'left',
          'status' => '0',
          'label' => 'Team Coordinator Log in Button',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_6',
        ),
        'competitive_drive-1' => array(
          'module' => 'competitive_drive',
          'delta' => '1',
          'weight' => 19,
          'region' => 'right',
          'status' => '0',
          'label' => 'Donate Button',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_1',
        ),
        'competitive_drive-0' => array(
          'module' => 'competitive_drive',
          'delta' => '0',
          'weight' => 20,
          'region' => 'right',
          'status' => '0',
          'label' => 'Team Progress Thermometer',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_0',
        ),
        'competitive_drive-3' => array(
          'module' => 'competitive_drive',
          'delta' => '3',
          'weight' => 21,
          'region' => 'right',
          'status' => '0',
          'label' => 'Team Progress Statistics',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_3',
        ),
        'nodeblock-60' => array(
          'module' => 'nodeblock',
          'delta' => '60',
          'weight' => 22,
          'region' => 'right',
          'status' => '0',
          'label' => 'Explanation of points (nodeblock)',
          'type' => 'context_ui',
          'bid' => 'nodeblock_60',
        ),
        'competitive_drive-2' => array(
          'module' => 'competitive_drive',
          'delta' => '2',
          'weight' => 23,
          'region' => 'right',
          'status' => '0',
          'label' => 'Leaderboard Button',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_2',
        ),
        'competitive_drive-7' => array(
          'module' => 'competitive_drive',
          'delta' => '7',
          'weight' => 24,
          'region' => 'right',
          'status' => '0',
          'label' => 'Team Coordinator Dashboard Button',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_7',
        ),
        'nodeblock-9' => array(
          'module' => 'nodeblock',
          'delta' => '9',
          'weight' => 25,
          'region' => 'right',
          'status' => '0',
          'label' => 'Where Your Money Goes (nodeblock)',
          'type' => 'context_ui',
          'bid' => 'nodeblock_9',
        ),
        'views-team_information-block_1' => array(
          'module' => 'views',
          'delta' => 'team_information-block_1',
          'weight' => 19,
          'region' => 'content_top',
          'status' => '0',
          'label' => 'team_information: Block',
          'type' => 'context_ui',
          'bid' => 'views_team_information-block_1',
        ),
        'competitive_drive-5' => array(
          'module' => 'competitive_drive',
          'delta' => '5',
          'weight' => 20,
          'region' => 'content_top',
          'status' => '0',
          'label' => 'New Team Blog Post',
          'type' => 'context_ui',
          'bid' => 'competitive_drive_5',
        ),
        'views-team_blog-block' => array(
          'module' => 'views',
          'delta' => 'team_blog-block',
          'weight' => 19,
          'region' => 'content_bottom',
          'status' => '0',
          'label' => 'team_blog: Block',
          'type' => 'context_ui',
          'bid' => 'views_team_blog-block',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['competitive_drive-section-team_pages'] = array(
    t('Team Pages'),
  );

  $export['competitive_drive-section-team_pages'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _donor_rally_team_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _donor_rally_team_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_captain_info
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'team',
    'group_name' => 'group_captain_info',
    'label' => 'Team Coordinator',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '48',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '48',
    'fields' => array(
      '0' => 'field_captain_title',
      '1' => 'field_captain_first_name',
      '2' => 'field_captain_last_name',
      '3' => 'field_captain_location',
      '4' => 'field_captain_email',
    ),
  );

  // Exported group: group_firm_info
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'team',
    'group_name' => 'group_firm_info',
    'label' => 'Firm',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '49',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '49',
    'fields' => array(
      '0' => 'field_firm_name',
      '1' => 'field_location',
      '2' => 'field_firm_website',
      '3' => 'field_it_help_desk_contact',
    ),
  );

  // Exported group: group_team_info
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'team',
    'group_name' => 'group_team_info',
    'label' => 'Team',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '50',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '51',
    'fields' => array(
      '0' => 'field_size',
      '1' => 'field_cash_goal',
      '2' => 'field_food_goal',
      '3' => 'field_volunteer_goal',
      '4' => 'field_team_info',
      '5' => 'field_logo',
      '6' => 'field_raisers_edge_id',
    ),
  );

  // Translatables
  array(
    t('Firm'),
    t('Team'),
    t('Team Coordinator'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _donor_rally_team_imagecache_default_presets() {
  $items = array(
    'competitive_drive_team_logo' => array(
      'presetname' => 'competitive_drive_team_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '198',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _donor_rally_team_user_default_permissions() {
  $permissions = array();

  // Exported permission: create team content
  $permissions[] = array(
    'name' => 'create team content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete any team content
  $permissions[] = array(
    'name' => 'delete any team content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete any team_blog_post content
  $permissions[] = array(
    'name' => 'delete any team_blog_post content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: delete own team content
  $permissions[] = array(
    'name' => 'delete own team content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit any team content
  $permissions[] = array(
    'name' => 'edit any team content',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit field_captain_email
  $permissions[] = array(
    'name' => 'edit field_captain_email',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_captain_first_name
  $permissions[] = array(
    'name' => 'edit field_captain_first_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_captain_last_name
  $permissions[] = array(
    'name' => 'edit field_captain_last_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_captain_location
  $permissions[] = array(
    'name' => 'edit field_captain_location',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_captain_title
  $permissions[] = array(
    'name' => 'edit field_captain_title',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_cash
  $permissions[] = array(
    'name' => 'edit field_cash',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit field_cash_goal
  $permissions[] = array(
    'name' => 'edit field_cash_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_firm_name
  $permissions[] = array(
    'name' => 'edit field_firm_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_firm_website
  $permissions[] = array(
    'name' => 'edit field_firm_website',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_location
  $permissions[] = array(
    'name' => 'edit field_location',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_logo
  $permissions[] = array(
    'name' => 'edit field_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_points_per_capita
  $permissions[] = array(
    'name' => 'edit field_points_per_capita',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit field_size
  $permissions[] = array(
    'name' => 'edit field_size',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_team_info
  $permissions[] = array(
    'name' => 'edit field_team_info',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'site editor',
      '2' => 'team lead',
      '3' => 'web admin',
    ),
  );

  // Exported permission: edit field_total_points
  $permissions[] = array(
    'name' => 'edit field_total_points',
    'roles' => array(
      '0' => 'web admin',
    ),
  );

  // Exported permission: edit own team content
  $permissions[] = array(
    'name' => 'edit own team content',
    'roles' => array(
      '0' => 'team lead',
      '1' => 'web admin',
    ),
  );

  // Exported permission: view field_captain_email
  $permissions[] = array(
    'name' => 'view field_captain_email',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_captain_first_name
  $permissions[] = array(
    'name' => 'view field_captain_first_name',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_captain_last_name
  $permissions[] = array(
    'name' => 'view field_captain_last_name',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_captain_location
  $permissions[] = array(
    'name' => 'view field_captain_location',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_captain_title
  $permissions[] = array(
    'name' => 'view field_captain_title',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_cash
  $permissions[] = array(
    'name' => 'view field_cash',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_cash_goal
  $permissions[] = array(
    'name' => 'view field_cash_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_firm_name
  $permissions[] = array(
    'name' => 'view field_firm_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_firm_website
  $permissions[] = array(
    'name' => 'view field_firm_website',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_it_help_desk_contact
  $permissions[] = array(
    'name' => 'view field_it_help_desk_contact',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_location
  $permissions[] = array(
    'name' => 'view field_location',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_logo
  $permissions[] = array(
    'name' => 'view field_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_points_per_capita
  $permissions[] = array(
    'name' => 'view field_points_per_capita',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_size
  $permissions[] = array(
    'name' => 'view field_size',
    'roles' => array(
      '0' => 'site editor',
      '1' => 'team lead',
      '2' => 'web admin',
    ),
  );

  // Exported permission: view field_team_info
  $permissions[] = array(
    'name' => 'view field_team_info',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site editor',
      '3' => 'team lead',
      '4' => 'web admin',
    ),
  );

  // Exported permission: view field_total_points
  $permissions[] = array(
    'name' => 'view field_total_points',
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

/**
 * Helper to implementation of hook_strongarm().
 */
function _donor_rally_team_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_team';
  $strongarm->value = '[field_firm_name-raw]';

  $export['ant_pattern_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_team';
  $strongarm->value = array(
    'title' => '47',
    'revision_information' => '62',
    'menu' => '60',
    'path' => '61',
  );

  $export['content_extra_weights_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_team';
  $strongarm->value = 1;

  $export['content_profile_use_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_team';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_team'] = $strongarm;
  return $export;
}
