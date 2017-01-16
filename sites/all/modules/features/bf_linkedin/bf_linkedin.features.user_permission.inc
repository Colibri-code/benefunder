<?php
/**
 * @file
 * bf_linkedin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_linkedin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'display LinkedIn profile'.
  $permissions['display LinkedIn profile'] = array(
    'name' => 'display LinkedIn profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'linkedin_profile',
  );

  return $permissions;
}
