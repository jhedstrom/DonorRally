<?php
// $Id: content_handler_argument_numeric.inc 828 2009-06-16 17:56:46Z jhedstrom $

/**
 * @file
 * The subclass simply adds properties,
 * for field-specific subclasses to use if they need to.
 */
class content_handler_argument_numeric extends views_handler_argument_numeric {
  var $content_field;

  function construct() {
    parent::construct();

    $this->content_field = content_fields($this->definition['content_field_name']);
    $this->additional_fields = $this->definition['additional fields'];
  }
}