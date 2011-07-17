<?php
/**
 * @file
 * dc_sponsor.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function dc_sponsor_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'promo_sponsor_it';
  $box->plugin_key = 'simple';
  $box->title = 'Sponsor';
  $box->description = 'Promo sponsor IT';
  $box->options = array(
    'body' => array(
      'value' => 'Vuoi contribuire a supportare l\'evento ed essere riconosciuto dai visitatori del sito e della conferenza?
<strong><a href="/it/richiesta-di-sponsorizzazione">Diventa sponsor</a></strong>',
      'format' => 'filtered_html',
    ),
  );
  $export['promo_sponsor_it'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'sponsor_promo';
  $box->plugin_key = 'simple';
  $box->title = 'Sponsors';
  $box->description = 'Promo sponsor EN';
  $box->options = array(
    'body' => array(
      'value' => 'Do you want to support the event and to be recognized by website visitors and conference attendees?
<strong><a href="/en/sponsorship-request">Become a sponsor</a></strong>',
      'format' => 'filtered_html',
    ),
  );
  $export['sponsor_promo'] = $box;

  return $export;
}
