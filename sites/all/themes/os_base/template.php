<?php

// $Id: template.php 897 2009-12-31 20:46:29Z jhedstrom $

/**
 * @file
 * OpenSourcery base theme template.php.
 */


function os_base_preprocess_page(&$vars) {
  /* Fix up number of grid columns (we need them different than standard blueprint) */
  // 3 columns
  if ($vars['layout'] == 'both') {
    $vars['left_classes'] = 'col-first col-left span-6';
    $vars['right_classes'] = 'col-right span-8 last';
    $vars['center_classes'] = 'col-center span-10';
    $vars['body_classes'] .= ' col-3 ';
  }
  // 2 columns
  else if ($vars['layout'] != 'none') {
    // left column & center
    if ($vars['layout'] == 'left') {
      $vars['left_classes'] = 'col-first col-left span-6';
      $vars['center_classes'] = 'col-center span-18 last';
    }
    // right column & center
    else if ($vars['layout'] == 'right') {
      $vars['right_classes'] = 'col-right span-8 last';
      $vars['center_classes'] = 'col-first col-center span-16';
    }
    $vars['body_classes'] .= ' col-2 ';
  }
  // 1 column
  else {
    $vars['center_classes'] = 'col-first col-center span-24';
    $vars['body_classes'] .= ' col-1 ';
  }

  // Nuke breadcrumbs
  unset($vars['breadcrumb']);

  // Rename some pages
  $title_aliases = array(
    'user/register' => t('Team coordinator sign up'),
    'user/login' => t('Team coordinator login'),
    'user' => t('Team coordinator login'),
  );
  if (isset($title_aliases[$_GET['q']])) {
    $vars['title'] = $title_aliases[$_GET['q']];
  }
}

/**
 * Implements theme_node_submitted().
 */
function os_base_node_submitted($node) {
  switch ($node->type) {
    case 'team_blog_post':
      $who = '';
      if ($profile = content_profile_load('team', $node->uid)) {
        if (isset($profile->field_captain_first_name[0]['value'])) {
          $who = check_plain($profile->field_captain_first_name[0]['value']);
          if (isset($profile->field_captain_last_name[0]['value'])) {
            $who .= ' '. check_plain($profile->field_captain_last_name[0]['value']);
          }
        }
        else {
          $who .= $node->name;
        }
        $who .= t(' (Team Coordinator)');
      }
      else {
        $who = $node->name;
      }
      break;
    case 'admin_blog_post':
      $who = $node->name . t(' (San Francisco Food Bank Staff)');
      break;
    default:
      return theme_node_submitted($node);
  }
  return t('Posted by @who on @datetime',
    array(
      '@who' => $who,
      '@datetime' => format_date($node->created)
    ));
}

