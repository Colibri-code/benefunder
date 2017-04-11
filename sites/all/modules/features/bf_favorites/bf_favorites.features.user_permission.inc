<?php
/**
 * @file
 * bf_favorites.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_favorites_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag bookmarks'.
  $permissions['flag bookmarks'] = array(
    'name' => 'flag bookmarks',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag bookmarks'.
  $permissions['unflag bookmarks'] = array(
    'name' => 'unflag bookmarks',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
