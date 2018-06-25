<?php
/**
 * @file
 * bf_researcher_menu_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_researcher_menu_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cause content'.
  $permissions['create cause content'] = array(
    'name' => 'create cause content',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cause content'.
  $permissions['edit own cause content'] = array(
    'name' => 'edit own cause content',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
