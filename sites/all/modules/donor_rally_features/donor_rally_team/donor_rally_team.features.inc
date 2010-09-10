<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function donor_rally_team_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function donor_rally_team_imagecache_default_presets() {
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
 * Implementation of hook_node_info().
 */
function donor_rally_team_node_info() {
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

/**
 * Implementation of hook_views_api().
 */
function donor_rally_team_views_api() {
  return array(
    'api' => '2',
  );
}
