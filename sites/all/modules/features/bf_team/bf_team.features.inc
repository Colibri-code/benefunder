<?php
/**
 * @file
 * bf_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_team_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bf_team_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bf_team_image_default_styles() {
  $styles = array();

  // Exported image style: team_300x300.
  $styles['team_300x300'] = array(
    'label' => 'Team 300x300',
    'effects' => array(
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'anchor' => 'center-center',
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
function bf_team_node_info() {
  $items = array(
    'team_bio' => array(
      'name' => t('Team Bio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
