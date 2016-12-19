<?php
/**
 * @file
 * bf_giving_proposal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_giving_proposal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bf_giving_proposal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bf_giving_proposal_node_info() {
  $items = array(
    'giving_proposal' => array(
      'name' => t('Giving Proposal'),
      'base' => 'node_content',
      'description' => t('A proposal for a Giving Plan for a client.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
