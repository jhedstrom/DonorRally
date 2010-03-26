<?php
// $Id: spaces_controller_boxes.inc,v 1.1 2010/02/02 00:46:04 jmiccolis Exp $

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
}
