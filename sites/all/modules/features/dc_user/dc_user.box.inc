<?php
/**
 * @file
 * dc_user.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function dc_user_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'promo_user_it';
  $box->plugin_key = 'simple';
  $box->title = 'Registrati';
  $box->description = 'Promo user IT';
  $box->options = array(
    'body' => array(
      'value' => 'Vuoi unirti all\'evento? <strong><a href="/it/user/register">Registrati</a></strong> su questo sito e conferma la tua presenza.',
      'format' => 'filtered_html',
    ),
  );
  $export['promo_user_it'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'user_promo';
  $box->plugin_key = 'simple';
  $box->title = 'Register';
  $box->description = 'Promo user EN';
  $box->options = array(
    'body' => array(
      'value' => 'Want to join the event? <strong><a href="/en/user/register">Register</a></strong> to the site and please confirm your participation.',
      'format' => 'filtered_html',
    ),
  );
  $export['user_promo'] = $box;

  return $export;
}
