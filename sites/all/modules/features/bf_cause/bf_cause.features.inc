<?php
/**
 * @file
 * bf_cause.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_cause_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function bf_cause_image_default_styles() {
  $styles = array();

  // Exported image style: 50x50.
  $styles['50x50'] = array(
    'label' => '50x50',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bf_cause_node_info() {
  $items = array(
    'cause' => array(
      'name' => t('Cause'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
