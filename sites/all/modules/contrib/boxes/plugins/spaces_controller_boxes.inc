<?php
// $Id: spaces_controller_boxes.inc,v 1.2 2010/03/30 16:23:00 jmiccolis Exp $

/**
 * Spaces controller for boxes module.
 */
class spaces_controller_boxes extends spaces_controller {

  protected function load_original_values($id = NULL) {
    if (empty($this->loaded_all['original'])) {
      if (!isset($id)) {
        $boxes = boxes_load();
        $this->values['original'] = $boxes;
        $this->loaded_all['original'] = TRUE;
      }
      else if (!isset($this->loaded['original'][$id])) {
        if ($box = boxes_load($id)) {
          $this->values['original'][$id] = $box;
          $this->loaded['original'][$id] = TRUE;
        }
      }
    }
  }

  /**
   * Override of the set() method.
   *
   * Remove flags used by to detect state and cast as array so that the box
   * configuration can be loaded regardless of whether the plugin is available.
   */
  function set($id, $value) {
    unset($value->new);
    unset($value->export_type);
    $box = (array)$value;
    parent::set($id, $box);
  }
}
