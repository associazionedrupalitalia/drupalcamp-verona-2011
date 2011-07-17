<?php
/**
 * @file
 * dc_news.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dc_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function dc_news_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function dc_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_preview
  $styles['news_preview'] = array(
    'name' => 'news_preview',
    'effects' => array(
      2 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function dc_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
