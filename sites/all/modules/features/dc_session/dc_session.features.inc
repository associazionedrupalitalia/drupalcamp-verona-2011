<?php
/**
 * @file
 * dc_session.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dc_session_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => 1);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function dc_session_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function dc_session_flag_default_flags() {
  $flags = array();
  // Exported flag: "I link this session".
  $flags['session_like'] = array(
    'content_type' => 'node',
    'title' => 'I link this session',
    'global' => '0',
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'I like this session',
    'flag_long' => 'I like this session',
    'flag_message' => 'Your preference is registred',
    'unflag_short' => 'Remove your preference',
    'unflag_long' => 'Remove this session from this session',
    'unflag_message' => 'Your prefernce is removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'dc_session',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function dc_session_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Propose a new session to DrupalCamp'),
      'has_title' => '1',
      'title_label' => t('Session name'),
      'help' => '',
    ),
  );
  return $items;
}
