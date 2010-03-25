<?php
// $Id: context_condition_node.inc,v 1.1.2.2 2010/02/09 04:38:01 yhahn Exp $

/**
 * Expose node views/node forms of specific node types as a context condition.
 */
class context_condition_node extends context_condition {
  function condition_values() {
    $values = array();
    foreach (node_get_types() as $type) {
      $values[$type->type] = $type->name;
    }
    return $values;
  }

  function options_form($context) {
    $defaults = $this->fetch_from_context($context, 'options');
    return array(
      'node_form' => array(
        '#title' => t('Set on node form'),
        '#type' => 'checkbox',
        '#description' => t('Set this context on node forms'),
        '#default_value' => isset($defaults['node_form']) ? $defaults['node_form'] : TRUE,
      ),
    );
  }

  function execute($node, $op) {
    foreach ($this->get_contexts($node->type) as $context) {
      // Check the node form option.
      if ($op === 'form') {
        $options = $this->fetch_from_context($context, 'options');
        if (!empty($options['node_form'])) {
          $this->condition_met($context, $node->type);
        }
      }
      else {
        $this->condition_met($context, $node->type);
      }
    }
  }
}
