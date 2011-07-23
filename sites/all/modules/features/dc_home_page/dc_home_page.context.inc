<?php
/**
 * @file
 * dc_home_page.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function dc_home_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Home page (generic elements)';
  $context->tag = 'Home page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsor_block-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsor_block-block_3',
          'region' => 'pre_content_first',
          'weight' => '-10',
        ),
        'views-sessions-block_1' => array(
          'module' => 'views',
          'delta' => 'sessions-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-sponsor_block-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor_block-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-keynote' => array(
          'module' => 'boxes',
          'delta' => 'keynote',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'views-sponsor_block-block' => array(
          'module' => 'views',
          'delta' => 'sponsor_block-block',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'views-sponsor_block-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsor_block-block_2',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page');
  t('Home page (generic elements)');
  $export['homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage-en';
  $context->description = 'Home page (EN)';
  $context->tag = 'Home page';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-sponsor_promo' => array(
          'module' => 'boxes',
          'delta' => 'sponsor_promo',
          'region' => 'pre_content_second',
          'weight' => '-10',
        ),
        'boxes-user_promo' => array(
          'module' => 'boxes',
          'delta' => 'user_promo',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'boxes-cfp_en' => array(
          'module' => 'boxes',
          'delta' => 'cfp_en',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'boxes-promote_en' => array(
          'module' => 'boxes',
          'delta' => 'promote_en',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page');
  t('Home page (EN)');
  $export['homepage-en'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage-it';
  $context->description = 'Home page (IT)';
  $context->tag = 'Home page';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'it' => 'it',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-promo_sponsor_it' => array(
          'module' => 'boxes',
          'delta' => 'promo_sponsor_it',
          'region' => 'pre_content_second',
          'weight' => '-10',
        ),
        'boxes-promo_user_it' => array(
          'module' => 'boxes',
          'delta' => 'promo_user_it',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'boxes-cfp_it' => array(
          'module' => 'boxes',
          'delta' => 'cfp_it',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'boxes-promote_it' => array(
          'module' => 'boxes',
          'delta' => 'promote_it',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page');
  t('Home page (IT)');
  $export['homepage-it'] = $context;

  return $export;
}
