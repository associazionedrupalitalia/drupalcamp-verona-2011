<?php
/**
 * @file
 * dc_session.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function dc_session_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_admin|node|session|form';
  $field_group->group_name = 'group_session_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '4',
    'children' => array(
      0 => 'field_session_approved',
      1 => 'field_session_room',
      2 => 'field_session_day',
      3 => 'field_session_slot',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_admin|node|session|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_data|node|session|form';
  $field_group->group_name = 'group_session_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session data',
    'weight' => '1',
    'children' => array(
      0 => 'field_session_argument',
      1 => 'field_session_lang',
      2 => 'field_session_level',
      3 => 'field_session_type',
      4 => 'field_session_userday',
      5 => 'field_session_speakers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_data|node|session|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_post_conf|node|session|form';
  $field_group->group_name = 'group_session_post_conf';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Post conf',
    'weight' => '3',
    'children' => array(
      0 => 'field_session_slide',
      1 => 'field_session_slide_pdf',
      2 => 'field_session_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_post_conf|node|session|form'] = $field_group;

  return $export;
}
