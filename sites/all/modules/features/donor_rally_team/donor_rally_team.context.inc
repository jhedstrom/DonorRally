<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function donor_rally_team_context_default_contexts() {
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Donor Rally');
  t('Donor Rally Leader Board');

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
        'donor_rally-0' => array(
          'module' => 'donor_rally',
          'delta' => 0,
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'donor_rally-1' => array(
          'module' => 'donor_rally',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
        'boxes-team_page_common' => array(
          'module' => 'boxes',
          'delta' => 'team_page_common',
          'region' => 'sidebar_second',
          'weight' => 2,
        ),
        'donor_rally-3' => array(
          'module' => 'donor_rally',
          'delta' => 3,
          'region' => 'sidebar_second',
          'weight' => 3,
        ),
        'donor_rally-2' => array(
          'module' => 'donor_rally',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => 4,
        ),
        'donor_rally-6' => array(
          'module' => 'donor_rally',
          'delta' => 6,
          'region' => 'sidebar_second',
          'weight' => 5,
        ),
        'donor_rally-7' => array(
          'module' => 'donor_rally',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => 6,
        ),
        'views-donor_rally_team_logo-block_1' => array(
          'module' => 'views',
          'delta' => 'donor_rally_team_logo-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-team_information-block_1' => array(
          'module' => 'views',
          'delta' => 'team_information-block_1',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'views-team_blog-block' => array(
          'module' => 'views',
          'delta' => 'team_blog-block',
          'region' => 'content_bottom',
          'weight' => 2,
        ),
        'donor_rally-5' => array(
          'module' => 'donor_rally',
          'delta' => 5,
          'region' => 'content_bottom',
          'weight' => 3,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'team-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Donor Rally');
  t('Team landing pages');

  $export['team_page'] = $context;
  return $export;
}
