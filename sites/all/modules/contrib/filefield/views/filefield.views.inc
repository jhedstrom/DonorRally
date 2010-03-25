<?php
// $Id: filefield.views.inc 828 2009-06-16 17:56:46Z jhedstrom $
/**
 * @file
 * Provide views data for filefield.module.
 */

/**
 * @defgroup views_filefield_module filefield.module handlers
 *
 * Includes the handler for the FileField data column.
 * @{
 */

/**
 * Implementation of hook_views_handlers().
 */
function filefield_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'filefield') . '/views',
    ),
    'handlers' => array(
      // field handlers
      'filefield_handler_field_data' => array(
        'parent' => 'views_handler_field_node',
      ),
    ),
  );
}

/**
 * @}
 */
