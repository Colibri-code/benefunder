<?php
/**
 * @file
 * bf_interest_list.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_interest_list_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create interest_list content'.
  $permissions['create interest_list content'] = array(
    'name' => 'create interest_list content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own interest_list content'.
  $permissions['delete own interest_list content'] = array(
    'name' => 'delete own interest_list content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own interest_list content'.
  $permissions['edit own interest_list content'] = array(
    'name' => 'edit own interest_list content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
