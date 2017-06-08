<?php
/**
 * @file
 * bf_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_partner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bf_partner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bf_partner_image_default_styles() {
  $styles = array();

  // Exported image style: partners_full.
  $styles['partners_full'] = array(
    'label' => 'partners_full',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: partners_teaser.
  $styles['partners_teaser'] = array(
    'label' => 'partners_teaser',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 398,
          'height' => 230,
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
function bf_partner_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
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
