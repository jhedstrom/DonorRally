<?php

/**
 * Implementation of hook_views_default_views().
 */
function donor_rally_team_io_views_default_views() {
  module_load_include('inc', 'donor_rally_team_io', 'donor_rally_team_io.features.views');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_io_views_default_views', $args);
}
