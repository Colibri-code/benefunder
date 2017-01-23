<?php
/**
 * @file
 * bf_fa_dashboard.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bf_fa_dashboard_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['linkedin_profile-linkedin_profile'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'linkedin_profile',
    'module' => 'linkedin_profile',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'benefunder' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'benefunder',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
