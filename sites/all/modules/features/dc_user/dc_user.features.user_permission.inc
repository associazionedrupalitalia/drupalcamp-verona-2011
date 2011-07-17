<?php
/**
 * @file
 * dc_user.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function dc_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user contact forms
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
