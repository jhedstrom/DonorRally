<?php
// $Id: autoassignrole-path.inc,v 1.1.2.3 2009/09/21 19:21:18 cyberswat Exp $

/**
 * @file
 *
 * The autoassignrole-admin.inc file
 *
 * Contains path specific functionality
 */

require_once drupal_get_path('module', 'user') .'/user.pages.inc';

function autoassignrole_path($rid) {
  $page = db_fetch_object(db_query("SELECT description, format FROM {autoassignrole_page} WHERE rid = %d", $rid));
  $output = check_markup($page->description, $page->format, FALSE);
  $output .= drupal_get_form('user_register');
  return $output;
}

function _autoassignrole_user_password() {
  require_once drupal_get_path('module', 'user') .'/user.pages.inc';
  $output = drupal_get_form('user_pass');
  return $output;
}
function _autoassignrole_user_login() {
  require_once drupal_get_path('module', 'user') .'/user.pages.inc';
  $output = user_page();
  return $output;
}
