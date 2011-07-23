<?php
/**
 * @file
 * dc_home_page.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function dc_home_page_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cfp_en';
  $box->plugin_key = 'simple';
  $box->title = 'Call For Paper';
  $box->description = 'Call For Paper EN';
  $box->options = array(
    'body' => array(
      'value' => 'Propose a <a href="/node/add/session">session</a> (you must be registred).',
      'format' => 'filtered_html',
    ),
  );
  $export['cfp_en'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cfp_it';
  $box->plugin_key = 'simple';
  $box->title = 'Proponi una sessione';
  $box->description = 'Call For Paper IT';
  $box->options = array(
    'body' => array(
      'value' => 'Ritieni di avere qualche cosa di interessante da dire? Proponi una <a href="/node/add/session">sessione</a> (bisogna essere registrati).',
      'format' => 'filtered_html',
    ),
  );
  $export['cfp_it'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'keynote';
  $box->plugin_key = 'simple';
  $box->title = 'Keynote';
  $box->description = 'Keynote placeholder';
  $box->options = array(
    'body' => array(
      'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec lobortis faucibus eros, sed imperdiet augue vehicula bibendum. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec vestibulum tincidunt purus a gravida.

Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. In eget felis vitae erat tincidunt sollicitudin. Nam non lectus sit amet dui lacinia iaculis. Suspendisse molestie, massa ac gravida elementum, mi velit iaculis nulla, nec gravida metus ipsum vitae nisl. Proin sit amet sem libero, at imperdiet dui. Aenean convallis est sit amet ante bibendum consequat. ',
      'format' => 'filtered_html',
    ),
  );
  $export['keynote'] = $box;

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
  $box->delta = 'promote_en';
  $box->plugin_key = 'simple';
  $box->title = 'Promote the event';
  $box->description = 'Promote EN';
  $box->options = array(
    'body' => array(
      'value' => 'Download badges to promote the event or ask us the material to be distributed in your city!',
      'format' => 'filtered_html',
    ),
  );
  $export['promote_en'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'promote_it';
  $box->plugin_key = 'simple';
  $box->title = 'Promuovi l\'evento';
  $box->description = 'Promote IT';
  $box->options = array(
    'body' => array(
      'value' => 'Scarica i badge per promuovere l\'evento, chiedici il materiale da distribuire nella tua città!',
      'format' => 'filtered_html',
    ),
  );
  $export['promote_it'] = $box;

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
