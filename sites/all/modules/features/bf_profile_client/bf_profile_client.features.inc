<?php
/**
 * @file
 * bf_profile_client.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_profile_client_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bf_profile_client_node_info() {
  $items = array(
    'client_profile' => array(
      'name' => t('Client Profile'),
      'base' => 'node_content',
      'description' => t('Client profile for use by financial advisors'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
