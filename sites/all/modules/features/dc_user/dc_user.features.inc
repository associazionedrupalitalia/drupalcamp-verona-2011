<?php
/**
 * @file
 * dc_user.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dc_user_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function dc_user_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function dc_user_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => '0',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'dc_user',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implementation of hook_image_default_styles().
 */
function dc_user_image_default_styles() {
  $styles = array();

  // Exported image style: user_avatar
  $styles['user_avatar'] = array(
    'name' => 'user_avatar',
    'effects' => array(
      1 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '150',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
