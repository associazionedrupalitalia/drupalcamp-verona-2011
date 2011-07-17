<?php
/**
 * @file
 * dc_sponsor.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dc_sponsor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function dc_sponsor_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function dc_sponsor_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor_bronze
  $styles['sponsor_bronze'] = array(
    'name' => 'sponsor_bronze',
    'effects' => array(
      5 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '200',
          'height' => '150',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: sponsor_gold
  $styles['sponsor_gold'] = array(
    'name' => 'sponsor_gold',
    'effects' => array(
      3 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '400',
          'height' => '300',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: sponsor_silver
  $styles['sponsor_silver'] = array(
    'name' => 'sponsor_silver',
    'effects' => array(
      4 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '250',
          'height' => '180',
          'upscale' => 0,
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
function dc_sponsor_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Drupal Camp Sponsor'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
