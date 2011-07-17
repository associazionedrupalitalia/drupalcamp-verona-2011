<?php
/**
 * @file
 * dc_session.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function dc_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer field permissions
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_approved
  $permissions['create field_session_approved'] = array(
    'name' => 'create field_session_approved',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_day
  $permissions['create field_session_day'] = array(
    'name' => 'create field_session_day',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_level
  $permissions['create field_session_level'] = array(
    'name' => 'create field_session_level',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_room
  $permissions['create field_session_room'] = array(
    'name' => 'create field_session_room',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_slide
  $permissions['create field_session_slide'] = array(
    'name' => 'create field_session_slide',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_slide_pdf
  $permissions['create field_session_slide_pdf'] = array(
    'name' => 'create field_session_slide_pdf',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_slot
  $permissions['create field_session_slot'] = array(
    'name' => 'create field_session_slot',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_session_video
  $permissions['create field_session_video'] = array(
    'name' => 'create field_session_video',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create session content
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any session content
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own session content
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any session content
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_session_approved
  $permissions['edit field_session_approved'] = array(
    'name' => 'edit field_session_approved',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_day
  $permissions['edit field_session_day'] = array(
    'name' => 'edit field_session_day',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_level
  $permissions['edit field_session_level'] = array(
    'name' => 'edit field_session_level',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_room
  $permissions['edit field_session_room'] = array(
    'name' => 'edit field_session_room',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_slide
  $permissions['edit field_session_slide'] = array(
    'name' => 'edit field_session_slide',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_slide_pdf
  $permissions['edit field_session_slide_pdf'] = array(
    'name' => 'edit field_session_slide_pdf',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_slot
  $permissions['edit field_session_slot'] = array(
    'name' => 'edit field_session_slot',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_session_video
  $permissions['edit field_session_video'] = array(
    'name' => 'edit field_session_video',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own session content
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
