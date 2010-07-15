<?php

/**
 * Helper to implementation of hook_default_box().
 */
function _donor_rally_team_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'donor_rally_welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome';
  $box->description = 'Donor Rally Welcome Box';
  $box->options = array(
    'body' => 'Donor Rally is the first open source social fundraising tool.',
    'format' => 1,
  );

  $export['donor_rally_welcome'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'team_page_common';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Team landing page common text';
  $box->options = array(
    'body' => 'This text is common across all team landing pages.',
    'format' => 1,
  );

  $export['team_page_common'] = $box;
  return $export;
}

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
      'weight' => '52',
      'parent' => 'group_team_coordinator',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
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
      'weight' => '52',
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
      'weight' => '50',
      'parent' => 'group_team_coordinator',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
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
      'weight' => '50',
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
      'weight' => '51',
      'parent' => 'group_team_coordinator',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
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
      'weight' => '51',
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
      'weight' => '53',
      'parent' => 'group_team_coordinator',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
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
      'weight' => '53',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_cash
  $fields[] = array(
    'field_name' => 'field_cash',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '14',
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
      'weight' => '14',
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
      'weight' => '9',
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
      'weight' => '9',
      'description' => 'Each dollar donated is 1 point.  Your goal includes on-line giving, individual and company gifts, and any matches you submit.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_logo
  $fields[] = array(
    'field_name' => 'field_logo',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
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
      'weight' => '13',
      'description' => 'Please upload your firm logo, or team logo, or a picture of your choosing. This image will be displayed on your team page.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_offline_cash
  $fields[] = array(
    'field_name' => 'field_offline_cash',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '17',
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
          '_error_element' => 'default_value_widget][field_offline_cash][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Offline Cash',
      'weight' => '17',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_points_per_capita
  $fields[] = array(
    'field_name' => 'field_points_per_capita',
    'type_name' => 'team',
    'display_settings' => array(
      'weight' => '20',
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
      'weight' => '20',
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
      'weight' => '8',
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
      'weight' => '8',
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
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
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
    'max_length' => '8000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => 'Thank you for participating message. This should be changed',
          '_error_element' => 'default_value_widget][field_team_info][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Team greeting',
      'weight' => '12',
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
      'weight' => '21',
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
      'weight' => '21',
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
    t('First name'),
    t('Last name'),
    t('Logo'),
    t('Offline Cash'),
    t('Points Per Capita'),
    t('Size'),
    t('Team greeting'),
    t('Total Points'),
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
  $context->name = 'leaderboard';
  $context->description = 'Donor Rally Leader Board';
  $context->tag = 'Donor Rally';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'leaderboard_top:page_1' => 'leaderboard_top:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'donor_rally-site_thermometer' => array(
          'module' => 'donor_rally',
          'delta' => 'site_thermometer',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'boxes-donor_rally_welcome' => array(
          'module' => 'boxes',
          'delta' => 'donor_rally_welcome',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-leaderboard_top_ppc-block_1' => array(
          'module' => 'views',
          'delta' => 'leaderboard_top_ppc-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['leaderboard'] = array(
    t('Donor Rally Leader Board'),
    t('Donor Rally'),
  );

  $export['leaderboard'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team_page';
  $context->description = 'Team landing pages';
  $context->tag = 'Donor Rally';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'team' => 'team',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-team_information-block_1' => array(
          'module' => 'views',
          'delta' => 'team_information-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-team_blog-block' => array(
          'module' => 'views',
          'delta' => 'team_blog-block',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'donor_rally-5' => array(
          'module' => 'donor_rally',
          'delta' => 5,
          'region' => 'content_bottom',
          'weight' => 2,
        ),
        'views-donor_rally_team_logo-block_1' => array(
          'module' => 'views',
          'delta' => 'donor_rally_team_logo-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'boxes-team_page_common' => array(
          'module' => 'boxes',
          'delta' => 'team_page_common',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
        'donor_rally-0' => array(
          'module' => 'donor_rally',
          'delta' => 0,
          'region' => 'sidebar_second',
          'weight' => 2,
        ),
        'donor_rally-3' => array(
          'module' => 'donor_rally',
          'delta' => 3,
          'region' => 'sidebar_second',
          'weight' => 3,
        ),
        'donor_rally-1' => array(
          'module' => 'donor_rally',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => 4,
        ),
        'donor_rally-2' => array(
          'module' => 'donor_rally',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => 5,
        ),
        'donor_rally-6' => array(
          'module' => 'donor_rally',
          'delta' => 6,
          'region' => 'sidebar_second',
          'weight' => 6,
        ),
        'donor_rally-7' => array(
          'module' => 'donor_rally',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => 7,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['team_page'] = array(
    t('Donor Rally'),
    t('Team landing pages'),
  );

  $export['team_page'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _donor_rally_team_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  else if ($module == "context" && $api == "context") {
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

  // Exported group: group_team_coordinator
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'team',
    'group_name' => 'group_team_coordinator',
    'label' => 'Team coordinator',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
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
    'weight' => '7',
    'fields' => array(
      '0' => 'field_captain_first_name',
      '1' => 'field_captain_last_name',
      '2' => 'field_captain_email',
      '3' => 'field_captain_location',
    ),
  );

  // Translatables
  array(
    t('Team coordinator'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _donor_rally_team_imagecache_default_presets() {
  $items = array(
    'donor_rally_team_logo' => array(
      'presetname' => 'donor_rally_team_logo',
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
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any team content
  $permissions[] = array(
    'name' => 'delete any team content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own team content
  $permissions[] = array(
    'name' => 'delete own team content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any team content
  $permissions[] = array(
    'name' => 'edit any team content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
    ),
  );

  // Exported permission: edit field_captain_email
  $permissions[] = array(
    'name' => 'edit field_captain_email',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_captain_first_name
  $permissions[] = array(
    'name' => 'edit field_captain_first_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_captain_last_name
  $permissions[] = array(
    'name' => 'edit field_captain_last_name',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_captain_location
  $permissions[] = array(
    'name' => 'edit field_captain_location',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_cash
  $permissions[] = array(
    'name' => 'edit field_cash',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_cash_goal
  $permissions[] = array(
    'name' => 'edit field_cash_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_logo
  $permissions[] = array(
    'name' => 'edit field_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_points_per_capita
  $permissions[] = array(
    'name' => 'edit field_points_per_capita',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_size
  $permissions[] = array(
    'name' => 'edit field_size',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_team_info
  $permissions[] = array(
    'name' => 'edit field_team_info',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_total_points
  $permissions[] = array(
    'name' => 'edit field_total_points',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own team content
  $permissions[] = array(
    'name' => 'edit own team content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_captain_email
  $permissions[] = array(
    'name' => 'view field_captain_email',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
    ),
  );

  // Exported permission: view field_captain_first_name
  $permissions[] = array(
    'name' => 'view field_captain_first_name',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
    ),
  );

  // Exported permission: view field_captain_last_name
  $permissions[] = array(
    'name' => 'view field_captain_last_name',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
    ),
  );

  // Exported permission: view field_captain_location
  $permissions[] = array(
    'name' => 'view field_captain_location',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
    ),
  );

  // Exported permission: view field_cash
  $permissions[] = array(
    'name' => 'view field_cash',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_cash_goal
  $permissions[] = array(
    'name' => 'view field_cash_goal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_logo
  $permissions[] = array(
    'name' => 'view field_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_points_per_capita
  $permissions[] = array(
    'name' => 'view field_points_per_capita',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_size
  $permissions[] = array(
    'name' => 'view field_size',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
      '2' => 'team lead',
    ),
  );

  // Exported permission: view field_team_info
  $permissions[] = array(
    'name' => 'view field_team_info',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_total_points
  $permissions[] = array(
    'name' => 'view field_total_points',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
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
  $strongarm->name = 'content_extra_weights_team';
  $strongarm->value = array(
    'title' => '6',
    'revision_information' => '24',
    'menu' => '22',
    'path' => '23',
  );

  $export['content_extra_weights_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_team';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => 'full',
    'edit_link' => 0,
    'edit_tab' => 'sub',
    'add_link' => 1,
    'registration_use' => 1,
    'admin_user_create_use' => 1,
    'registration_hide' => array(),
  );

  $export['content_profile_team'] = $strongarm;
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
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_team_pattern';
  $strongarm->value = 'teams/[title-raw]';

  $export['pathauto_node_team_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'leaderboard';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 1;

  $export['user_register'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_forms';
  $strongarm->value = array();

  $export['vertical_tabs_forms'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_node_type_settings';
  $strongarm->value = 1;

  $export['vertical_tabs_node_type_settings'] = $strongarm;
  return $export;
}
