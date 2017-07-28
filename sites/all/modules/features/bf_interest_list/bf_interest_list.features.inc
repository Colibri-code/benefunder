<?php
/**
 * @file
 * bf_interest_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_interest_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bf_interest_list_node_info() {
  $items = array(
    'interest_list' => array(
      'name' => t('Interest List'),
      'base' => 'node_content',
      'description' => t('List of causes of interest'),
      'has_title' => '1',
      'title_label' => t('List Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
