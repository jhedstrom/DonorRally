<?php
// $Id: context_reaction.inc,v 1.1.2.1 2009/12/14 22:34:05 yhahn Exp $

/**
 * Base class for a context reaction.
 */
class context_reaction {
  var $plugin;
  var $title;
  var $description;

  /**
   * Constructor. Do not override.
   */
  function __construct($plugin, $info) {
    $this->plugin = $plugin;
    $this->title = isset($info['title']) ? $info['title'] : $plugin;
    $this->description = isset($info['description']) ? $info['description'] : '';
  }

  function options_form($context) {
  }

  /**
   * Options form submit handler.
   */
  function options_form_submit($values) {
    return $values;
  }

  /**
   * Public method that is called from hooks or other integration
   * points with Drupal.
   */
  function execute() {
  }

  /**
   * Retrieve active contexts that have values for this reaction.
   */
  function get_contexts() {
    $contexts = array();
    foreach (context_active_contexts() as $context) {
      if ($this->fetch_from_context($context)) {
        $contexts[$context->name] = $context;
      }
    }
    return $contexts;
  }

  /**
   * Retrieve options from the context provided.
   */
  function fetch_from_context($context) {
    // Allow other modules to alter the value just before it's returned.
    if (!context_isset('context_ui', 'no_alter')) {
      drupal_alter('context_reaction_fetch', $this, $context);
    }
    return isset($context->reactions[$this->plugin]) ? $context->reactions[$this->plugin] : array();
  }
}
