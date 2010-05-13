<?php
// $Id: boxes_box.inc,v 1.1 2010/03/30 21:34:31 jmiccolis Exp $
 
/**
 * Abstract base class defining a box. A boxes content plugin provides a
 * form of options for configuring content and renders content for display.
 *
 * @see boxes_simple.
 */
abstract class boxes_box {
  static $boxes;
  public $delta;
  public $title;
  public $description;
  public $options;
  public $plugin_key;
  public $new;
  public $export_type;
 
  /**
   * Load an existing box by its unique identifier $delta.
   */
  public static function load($delta) {
    if (!isset(self::$boxes[$delta])) {
      ctools_include('export');
      if ($values = array_pop(ctools_export_load_object('box', 'names', array($delta)))) {
        $box = self::create(isset($values->plugin_key) ? $values->plugin_key : 'simple'); // Handle legacy boxes.
        foreach ($box as $key => $value) {
          if (isset($values->$key)) {
            $box->$key = $values->$key;
          }
        }
        $box->new = FALSE; // Set in __construct().
        self::$boxes[$delta] = $box;
      }
    }
    return isset(self::$boxes[$delta]) ? self::$boxes[$delta] : NULL;
  }
 
  /**
   * Create a new box. Factory for creating a box of a particular type.
   *
   * @param $values
   * An array with at least a plugin_key key identifying the plugin class to
   * use for instantiating this box.
   */
  public static function create($plugin_key) {
    ctools_include('plugins');
    if ($class = ctools_plugin_load_class('boxes', 'plugins', $plugin_key, 'handler')) {
      $box = new $class();
      $box->plugin_key = $plugin_key;
      return $box;
    }
    else {
      throw new Exception(t('Plugin !key not found.', array('!key' => $plugin_key)));
    }
  }
 
  /**
   * Create a new box.
   */
  protected function __construct() {
    $this->new = TRUE; // A box is new unless it exists in the DB or in code.
    $this->options = $this->options_defaults();
  }
 
  /**
   * Set class variables.
   *
   * @param $values
   * A keyed array where the keys are class variables or keys in
   * $this->options declared by options_defaults().
   */
  public function set($values) {
    foreach ($this as $key => $value) {
      if (isset($values[$key])) {
        $this->$key = $values[$key];
      }
    }
    foreach ($this->options_defaults() as $key => $value) {
      if (isset($values[$key])) {
        $this->options[$key] = $values[$key];
      }
    }
    // Make sure box is present in static cache as soon as delta is set.
    if (!empty($this->delta)) {
      self::$boxes[$this->delta] = $this;
    }
  }
 
  /**
   * Reset the boxes cache.
   */
  public static function reset() {
    ctools_export_load_object_reset('box');
  }
 
  /**
   * Save a box.
   */
  public function save() {
    if (empty($this->delta)) {
      throw new Exception(t('Cannot save box without a specified delta.'));
    }
    self::reset();
    $existing = boxes_load($this->delta);
    if ($existing && ($existing->export_type & EXPORT_IN_DATABASE)) {
      drupal_write_record('box', $this, array('delta'));
    }
    else {
      drupal_write_record('box', $this);
    }
    $this->new = FALSE;
    self::reset();
    module_exists('context') ? context_invalidate_cache() : NULL;
  }
 
  /**
   * Delete a box.
   */
  public function delete() {
    self::reset();
    unset(self::$boxes[$this->delta]);
    db_query("DELETE FROM {box} WHERE delta = '%s'", $this->delta);
    module_exists('context') ? context_invalidate_cache() : NULL;
  }
 
  /**
   * Declare default options.
   */
  abstract public function options_defaults();
 
  /**
   * Provide options to configure content.
   */
  abstract public function options_form();
 
  /**
   * Render a block. Must return an array with the keys
   * 'delta', 'title', 'subject' (same as title) and 'content'.
   *
   * title AND subject need to be present to avoid that block module overrides
   * title.
   */
  abstract public function render();
}
