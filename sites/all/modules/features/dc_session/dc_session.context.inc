<?php
/**
 * @file
 * dc_session.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function dc_session_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sessions-content';
  $context->description = '';
  $context->tag = 'Sessions';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'session' => 'session',
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
  t('Sessions');
  $export['sessions-content'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sessions-homepage';
  $context->description = '';
  $context->tag = 'Sessions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'sessions' => 'sessions',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sessions');
  $export['sessions-homepage'] = $context;

  return $export;
}
