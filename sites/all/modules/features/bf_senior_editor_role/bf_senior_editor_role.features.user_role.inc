<?php
/**
 * @file
 * bf_senior_editor_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bf_senior_editor_role_user_default_roles() {
  $roles = array();

  // Exported role: Senior Editor.
  $roles['Senior Editor'] = array(
    'name' => 'Senior Editor',
    'weight' => 7,
  );

  return $roles;
}
