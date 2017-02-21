<?php
/**
 * @file
 * bf_fa_dashboard.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bf_fa_dashboard_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fa_menu';
  $context->description = 'Financial Advisor';
  $context->tag = 'giving proposal';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'giving_proposal' => 'giving_proposal',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
    'user' => array(
      'values' => array(
        'Financial Advisor' => 'Financial Advisor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bf_fa_dashboard-fa_menu' => array(
          'module' => 'bf_fa_dashboard',
          'delta' => 'fa_menu',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Financial Advisor');
  t('giving proposal');
  $export['fa_menu'] = $context;

  return $export;
}
