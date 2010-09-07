<?php

/**
 * Implementation of hook_default_box().
 */
function donor_rally_team_default_box() {
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
