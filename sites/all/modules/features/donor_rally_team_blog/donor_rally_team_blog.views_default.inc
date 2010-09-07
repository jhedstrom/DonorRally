<?php

/**
 * Implementation of hook_views_default_views().
 */
function donor_rally_team_blog_views_default_views() {
  $views = array();

  // Exported view: team_blog
  $view = new view;
  $view->name = 'team_blog';
  $view->description = 'Competitive Drive Team Blog';
  $view->tag = 'competitive drive';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'views_or_begin' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'default_argument_fixed' => '',
      'id' => 'views_or_begin',
      'table' => 'node',
      'field' => 'views_or_begin',
      'relationship' => 'none',
    ),
    'uid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'user',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '5' => 0,
        '4' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 1,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'admin_blog_post' => 0,
        'block' => 0,
        'page' => 0,
        'team' => 0,
        'team_blog_post' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
    'type' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '5' => 0,
        '4' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => 'team_blog_post',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'admin_blog_post' => 0,
        'block' => 0,
        'page' => 0,
        'team' => 0,
        'team_blog_post' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
    'views_or_next' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'default_argument_fixed' => '',
      'share_arguments' => 0,
      'id' => 'views_or_next',
      'table' => 'node',
      'field' => 'views_or_next',
      'relationship' => 'none',
    ),
    'type_1' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '5' => 0,
        '4' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => 'admin_blog_post',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'admin_blog_post' => 0,
        'block' => 0,
        'page' => 0,
        'team' => 0,
        'team_blog_post' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
    'views_or_end' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'default_argument_fixed' => '',
      'id' => 'views_or_end',
      'table' => 'node',
      'field' => 'views_or_end',
      'relationship' => 'none',
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
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'full',
    'links' => 1,
    'comments' => 0,
  ));
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->override_option('items_per_page', 3);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'team/rss.xml');
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
    'block' => 'block',
    'default' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);

  $views[$view->name] = $view;

  return $views;
}
