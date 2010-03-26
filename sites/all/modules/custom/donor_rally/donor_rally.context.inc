<?php

// $Id$

/**
 * @file
 * Default contexts for the Competitive Drive module.
 */

/**
 * Helper implementation of hook_context_default_contexts().
 */
function _donor_rally_context_default_contexts() {
  $items[] = array(
    'namespace' => 'donor_rally',
    'attribute' => 'section',
    'value' => 'leaderboard',
    'system' => 0,
    'description' => 'Leaderboard',
    'path' => array(
      '<front>' => '<front>',
    ),
    'theme_regiontoggle' => array(
      '0' => 'left',
      '1' => 'right',
    ),
    'block' => array(
      'views_leaderboard_top-block_1' => array(
         'module' => 'views',
         'delta' => 'leaderboard_top-block_1',
         'weight' => 18,
         'region' => 'content',
         'status' => '0',
         'label' => 'Leaderboard Top Points',
         'type' => 'context_ui',
         'bid' => 'views_leaderboard_top-block_1',
      ),
      'views_leaderboard_top_ppc-block_1' => array(
         'module' => 'views',
         'delta' => 'leaderboard_top_ppc-block_1',
         'weight' => 19,
         'region' => 'content',
         'status' => '0',
         'label' => 'Leaderboard Top PPC',
         'type' => 'context_ui',
         'bid' => 'views_leaderboard_top_ppc-block_1',
      ),
      'donor_rally_7' => array(
         'module' => 'donor_rally',
         'delta' => '7',
         'weight' => 18,
         'region' => 'content_bottom',
         'status' => '0',
         'label' => 'Team Coordinator Dashboard Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_7',
      ),
    ),
    'type' => 1,
    'status' => 1,
  );

  $items[] = array(
    'namespace' => 'donor_rally',
    'attribute' => 'section',
    'value' => 'team_lead_pages',
    'system' => 0,
    'description' => 'Pages seen by team coordinators',
    'os_custom_not_team_page' => array(
      '0' => 5,
    ),
    'block' => array(
      'menu_menu-team-lead-user-pages' => array(
         'module' => 'menu',
         'delta' => 'menu-team-lead-user-pages',
         'weight' => 20,
         'region' => 'left',
         'status' => '0',
         'label' => 'Team Navigation',
         'type' => 'context_ui',
         'bid' => 'menu_menu-team-lead-user-pages',
      ),
      'donor_rally_4' => array(
         'module' => 'donor_rally',
         'delta' => '4',
         'weight' => 21,
         'region' => 'left',
         'status' => '0',
         'label' => 'Team Page Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_4',
      ),
      'donor_rally_2' => array(
         'module' => 'donor_rally',
         'delta' => '2',
         'weight' => 22,
         'region' => 'left',
         'status' => '0',
         'label' => 'Leaderboard Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_2',
      ),
    ),
    'type' => 1,
    'status' => 1,
  );

  $items[] = array(
    'namespace' => 'donor_rally',
    'attribute' => 'section',
    'value' => 'team_pages',
    'system' => 0,
    'description' => 'Team Pages',
    'path' => array(
      'team/*' => 'team/*',
    ),
    'theme_section' => array(
      'title' => 'team_page',
    ),
    'block' => array(
      'views_a0834de87587a506ffd1ef2e47374548' => array(
         'module' => 'views',
         'delta' => 'a0834de87587a506ffd1ef2e47374548',
         'weight' => -22,
         'region' => 'left',
         'status' => '0',
         'label' => 'Team Logo',
         'type' => 'context_ui',
         'bid' => 'views_a0834de87587a506ffd1ef2e47374548',
      ),
      'nodeblock_8' => array(
         'module' => 'nodeblock',
         'delta' => '8',
         'weight' => -21,
         'region' => 'left',
         'status' => '0',
         'label' => 'Food from the Bar makes the difference (nodeblock)',
         'type' => 'context_ui',
         'bid' => 'nodeblock_8',
      ),
      'donor_rally_6' => array(
         'module' => 'donor_rally',
         'delta' => '6',
         'weight' => -20,
         'region' => 'left',
         'status' => '0',
         'label' => 'Team Coordinator Log in Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_6',
      ),
      'donor_rally_1' => array(
         'module' => 'donor_rally',
         'delta' => '1',
         'weight' => 19,
         'region' => 'right',
         'status' => '0',
         'label' => 'Donate Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_1',
      ),
      'donor_rally_0' => array(
         'module' => 'donor_rally',
         'delta' => '0',
         'weight' => 20,
         'region' => 'right',
         'status' => '0',
         'label' => 'Team Progress Thermometer',
         'type' => 'context_ui',
         'bid' => 'donor_rally_0',
      ),
      'donor_rally_3' => array(
         'module' => 'donor_rally',
         'delta' => '3',
         'weight' => 21,
         'region' => 'right',
         'status' => '0',
         'label' => 'Team Progress Statistics',
         'type' => 'context_ui',
         'bid' => 'donor_rally_3',
      ),
      'nodeblock_60' => array(
         'module' => 'nodeblock',
         'delta' => '60',
         'weight' => 22,
         'region' => 'right',
         'status' => '0',
         'label' => 'Explanation of points (nodeblock)',
         'type' => 'context_ui',
         'bid' => 'nodeblock_60',
      ),
      'donor_rally_2' => array(
         'module' => 'donor_rally',
         'delta' => '2',
         'weight' => 23,
         'region' => 'right',
         'status' => '0',
         'label' => 'Leaderboard Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_2',
      ),
      'donor_rally_7' => array(
         'module' => 'donor_rally',
         'delta' => '7',
         'weight' => 24,
         'region' => 'right',
         'status' => '0',
         'label' => 'Team Coordinator Dashboard Button',
         'type' => 'context_ui',
         'bid' => 'donor_rally_7',
      ),
      'nodeblock_9' => array(
         'module' => 'nodeblock',
         'delta' => '9',
         'weight' => 25,
         'region' => 'right',
         'status' => '0',
         'label' => 'Where Your Money Goes (nodeblock)',
         'type' => 'context_ui',
         'bid' => 'nodeblock_9',
      ),
      'views_team_information-block_1' => array(
         'module' => 'views',
         'delta' => 'team_information-block_1',
         'weight' => 19,
         'region' => 'content_top',
         'status' => '0',
         'label' => 'team_information: Block',
         'type' => 'context_ui',
         'bid' => 'views_team_information-block_1',
      ),
      'donor_rally_5' => array(
         'module' => 'donor_rally',
         'delta' => '5',
         'weight' => 20,
         'region' => 'content_top',
         'status' => '0',
         'label' => 'New Team Blog Post',
         'type' => 'context_ui',
         'bid' => 'donor_rally_5',
      ),
      'views_team_blog-block' => array(
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
    'type' => 1,
    'status' => 1,
  );

  $items[] = array(
    'namespace' => 'donor_rally',
    'attribute' => 'section',
    'value' => 'site_editor_pages',
    'system' => 0,
    'description' => 'Pages seen by staff members',
    'os_custom_not_team_page' => array(
      '0' => 3,
    ),
    'block' => array(
      'menu_menu-site-editor' => array(
         'module' => 'menu',
         'delta' => 'menu-site-editor',
         'weight' => -20,
         'region' => 'left',
         'status' => '0',
         'label' => 'Staff Navigation',
         'type' => 'context_ui',
         'bid' => 'menu_menu-site-editor',
      ),
    ),
    'type' => 1,
    'status' => 1,
  );

  return $items;
}
