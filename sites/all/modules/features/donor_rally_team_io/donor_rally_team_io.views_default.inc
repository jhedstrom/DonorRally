<?php

/**
 * Implementation of hook_views_default_views().
 */
function donor_rally_team_io_views_default_views() {
  $views = array();

  // Exported view: team_export
  $view = new view;
  $view->name = 'team_export';
  $view->description = 'CSV export of team data';
  $view->tag = 'competitive drive';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'nid' => array(
      'label' => 'Nid',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
    'field_raisers_edge_id_value' => array(
      'label' => 'Raiser\'s Edge ID',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_raisers_edge_id_value',
      'table' => 'node_data_field_raisers_edge_id',
      'field' => 'field_raisers_edge_id_value',
      'relationship' => 'none',
    ),
    'field_firm_name_value' => array(
      'label' => 'Firm name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_firm_name_value',
      'table' => 'node_data_field_firm_name',
      'field' => 'field_firm_name_value',
      'relationship' => 'none',
    ),
    'field_offline_cash_value' => array(
      'label' => 'Offline Cash',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'unformatted',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_offline_cash_value',
      'table' => 'node_data_field_offline_cash',
      'field' => 'field_offline_cash_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_offline_food_value' => array(
      'label' => 'Offline Food',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'unformatted',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_offline_food_value',
      'table' => 'node_data_field_offline_food',
      'field' => 'field_offline_food_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_offline_volunteer_value' => array(
      'label' => 'Offline Volunteer Shifts',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'unformatted',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_offline_volunteer_value',
      'table' => 'node_data_field_offline_volunteer',
      'field' => 'field_offline_volunteer_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'team' => 'team',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        '0' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Competitive Drive Teams');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'nid' => 'nid',
      'field_raisers_edge_id_value' => 'field_raisers_edge_id_value',
      'field_firm_name_value' => 'field_firm_name_value',
      'field_offline_cash_value' => 'field_offline_cash_value',
      'field_offline_food_value' => 'field_offline_food_value',
      'field_offline_volunteer_value' => 'field_offline_volunteer_value',
    ),
    'info' => array(
      'nid' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_raisers_edge_id_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_firm_name_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_offline_cash_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_offline_food_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_offline_volunteer_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'field_firm_name_value',
  ));
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('style_plugin', 'views_csv');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
    'attach_text' => 'CSV',
    'provide_file' => 1,
    'filename' => 'teams.csv',
    'parent_sort' => 0,
    'seperator' => ',',
    'quote' => 1,
    'header' => 1,
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('path', 'admin/content/competitive-drive/export/teams.csv');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('header', 'Download and edit the <a href="/admin/content/competitive-drive/export/teams.csv">CSV file</a> in order to update offline cash, food and volunteer hours.');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('path', 'admin/content/competitive-drive/export');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Export Teams',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Manage Teams',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
