<?php
/**
 * @file
 * dc_sponsor.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function dc_sponsor_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sponsor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsor';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsor';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  /* Sort criterion: Content: Sponsorship level (field_sponsor_level) */
  $handler->display->display_options['sorts']['field_sponsor_level_value']['id'] = 'field_sponsor_level_value';
  $handler->display->display_options['sorts']['field_sponsor_level_value']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['sorts']['field_sponsor_level_value']['field'] = 'field_sponsor_level_value';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Sponsor list */
  $handler = $view->new_display('page', 'Sponsor list', 'page');
  $handler->display->display_options['path'] = 'sponsor';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sponsor';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Sponsor Feed */
  $handler = $view->new_display('feed', 'Sponsor Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'sponsor.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['sponsor'] = array(
    t('Master'),
    t('Sponsor'),
    t('more'),
    t('Apply'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Logo'),
    t('Sponsor list'),
    t('Sponsor Feed'),
  );
  $export['sponsor'] = $view;

  $view = new view;
  $view->name = 'sponsor_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsor block';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsor Gold';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_gold',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Sponsorship level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_value']['id'] = 'field_sponsor_level_value';
  $handler->display->display_options['filters']['field_sponsor_level_value']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_value']['field'] = 'field_sponsor_level_value';
  $handler->display->display_options['filters']['field_sponsor_level_value']['value'] = array(
    'gold' => 'gold',
  );

  /* Display: Sponsor gold */
  $handler = $view->new_display('block', 'Sponsor gold', 'block');

  /* Display: Sponsor silver */
  $handler = $view->new_display('block', 'Sponsor silver', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_gold',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Sponsorship level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_value']['id'] = 'field_sponsor_level_value';
  $handler->display->display_options['filters']['field_sponsor_level_value']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_value']['field'] = 'field_sponsor_level_value';
  $handler->display->display_options['filters']['field_sponsor_level_value']['value'] = array(
    'gold' => 'gold',
  );

  /* Display: Sponsor bronze */
  $handler = $view->new_display('block', 'Sponsor bronze', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_gold',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Sponsorship level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_value']['id'] = 'field_sponsor_level_value';
  $handler->display->display_options['filters']['field_sponsor_level_value']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_value']['field'] = 'field_sponsor_level_value';
  $handler->display->display_options['filters']['field_sponsor_level_value']['value'] = array(
    'gold' => 'gold',
  );
  $translatables['sponsor_block'] = array(
    t('Master'),
    t('Sponsor Gold'),
    t('more'),
    t('Apply'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sponsor gold'),
    t('Sponsor silver'),
    t('Sponsor bronze'),
  );
  $export['sponsor_block'] = $view;

  return $export;
}
