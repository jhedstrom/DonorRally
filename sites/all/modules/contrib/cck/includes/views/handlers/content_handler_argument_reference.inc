<?php
// $Id: content_handler_argument_reference.inc 828 2009-06-16 17:56:46Z jhedstrom $

/**
 * @file
 * Provide handler to replace reference with title.
 */
class content_handler_argument_reference extends content_handler_argument_numeric {
  /**
   * Override the behavior of title().
   */
  function title_query() {
    $titles = array();
    $placeholders = implode(', ', array_fill(0, sizeof($this->value), '%d'));

    $table_data = views_fetch_data($this->name_table);
    $table = array_shift($table_data['table']['join']);

    $result = db_query("SELECT $this->name_field AS title FROM {". $table['table'] ."} WHERE ". $table['field'] ." IN ($placeholders)", $this->value);
    while ($row = db_fetch_object($result)) {
      $titles[] = check_plain($row->title);
    }
    return $titles;
  }
}
