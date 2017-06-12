<?php
/**
 * @file
 * bf_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bf_partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bf_partners_image_default_styles() {
  $styles = array();

  // Exported image style: partners_full.
  $styles['partners_full'] = array(
    'label' => 'partners_full',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      11 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 320,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: partners_teaser.
  $styles['partners_teaser'] = array(
    'label' => 'partners_teaser',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      14 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 230,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bf_partners_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Financial or community partners with Benefunder'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
