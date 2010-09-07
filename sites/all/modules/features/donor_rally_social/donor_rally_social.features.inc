<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_social_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
