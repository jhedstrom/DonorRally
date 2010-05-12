<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _donor_rally_team_node_info() {
  $items = array(
    'team' => array(
      'name' => t('Team'),
      'module' => 'features',
      'description' => t('Donor Rally Team'),
      'has_title' => '1',
      'title_label' => t('Team name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
