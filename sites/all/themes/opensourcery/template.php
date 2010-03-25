<?php
// $Id: template.php 511 2008-12-01 19:51:25Z jhedstrom $

/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 */


/**
 * Implementation of HOOK_theme().
 */
function opensourcery_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}
