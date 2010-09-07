<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function donor_rally_team_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_team_coordinator
  $groups['team-group_team_coordinator'] = array(
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
    'weight' => '7',
    'fields' => array(
      '0' => 'field_captain_first_name',
      '1' => 'field_captain_last_name',
      '2' => 'field_captain_email',
      '3' => 'field_captain_location',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Team coordinator');

  return $groups;
}
