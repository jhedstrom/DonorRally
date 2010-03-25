<?php
// $Id: context_condition_path.inc,v 1.1.2.2 2010/02/09 04:38:01 yhahn Exp $

/**
 * Expose paths as a context condition.
 */
class context_condition_path extends context_condition {
  /**
   * Omit condition values. We will provide a custom input form for our conditions.
   */
  function condition_values() {
    return array();
  }

  /**
   * Condition form.
   */
  function condition_form($context) {
    $form = parent::condition_form($context);
    unset($form['#options']);

    $form['#type'] = 'textarea';
    $form['#default_value'] = implode("\n", $this->fetch_from_context($context, 'values'));
    return $form;
  }

  /**
   * Condition form submit handler.
   */
  function condition_form_submit($values) {
    $parsed = array();
    $items = explode("\n", $values);
    if (!empty($items)) {
      foreach ($items as $v) {
        $v = trim($v);
        if (!empty($v)) {
          $parsed[$v] = $v;
        }
      }
    }
    return $parsed;
  }

  /**
   * Execute.
   */
  function execute() {
    $current_path = drupal_get_path_alias($_GET['q']);
    foreach (context_enabled_contexts() as $context) {
      if ($paths = $this->fetch_from_context($context, 'values')) {
        $paths = implode("\n", $paths);
        $path_match = drupal_match_path($current_path, $paths);
        if ($current_path != $_GET['q']) {
          $path_match = $path_match || drupal_match_path($_GET['q'], $paths);
        }
        if ($path_match) {
          $this->condition_met($context, $current_path);
        }
      }
    }
  }
}
