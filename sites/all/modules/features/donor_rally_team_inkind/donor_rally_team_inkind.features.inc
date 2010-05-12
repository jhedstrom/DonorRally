<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_team_inkind_ctools_plugin_api() {
  module_load_include('inc', 'donor_rally_team_inkind', 'donor_rally_team_inkind.defaults');
  $args = func_get_args();
  return call_user_func_array('_donor_rally_team_inkind_ctools_plugin_api', $args);
}
