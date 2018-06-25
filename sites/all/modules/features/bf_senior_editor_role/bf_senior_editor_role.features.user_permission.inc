<?php
/**
 * @file
 * bf_senior_editor_role.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_senior_editor_role_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer workflow'.
  $permissions['administer workflow'] = array(
    'name' => 'administer workflow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workflow_admin_ui',
  );

  // Exported permission: 'edit workflow comment'.
  $permissions['edit workflow comment'] = array(
    'name' => 'edit workflow comment',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
      'Senior Editor' => 'Senior Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
      'Senior Editor' => 'Senior Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'schedule workflow transitions'.
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
      'Senior Editor' => 'Senior Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
      'Senior Editor' => 'Senior Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'workflow notify'.
  $permissions['workflow notify'] = array(
    'name' => 'workflow notify',
    'roles' => array(
      'Editor' => 'Editor',
      'Researcher' => 'Researcher',
      'Senior Editor' => 'Senior Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workflow_notify',
  );

  return $permissions;
}
