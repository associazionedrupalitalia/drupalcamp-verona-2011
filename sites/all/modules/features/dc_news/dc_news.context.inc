<?php
/**
 * @file
 * dc_news.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function dc_news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-content';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news-content'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-homepage';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news-homepage'] = $context;

  return $export;
}
