<?php
/**
 * @file
 * hwc_good_practice_exchange.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hwc_good_practice_exchange_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_multilingual_node_index';
  $view->human_name = 'Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EU-OSHA Communications';
  $handler->display->display_options['css_class'] = 'view-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    12 => '12',
    11 => '11',
    13 => '13',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@order Showing @start - @end from @total';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '__add_new_document_link__';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No results';
  /* Field: Indexed Multilingual Content: Cover image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'medium_crop_220',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Multilingual ID */
  $handler->display->display_options['fields']['search_api_et_id']['id'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['search_api_et_id']['field'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_et_id']['link_to_entity'] = 0;
  /* Field: Indexed Multilingual Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'practical_tool_title';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Files */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['label'] = '';
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_files']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_document_files']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_files']['display'] = 'view';
  $handler->display->display_options['fields']['field_document_files']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_document_files']['bypass_access'] = 0;
  /* Field: Indexed Multilingual Content: Document Partner Organisation */
  $handler->display->display_options['fields']['partner_organisation_1']['id'] = 'partner_organisation_1';
  $handler->display->display_options['fields']['partner_organisation_1']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['partner_organisation_1']['field'] = 'partner_organisation';
  $handler->display->display_options['fields']['partner_organisation_1']['label'] = '';
  $handler->display->display_options['fields']['partner_organisation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['partner_organisation_1']['separator'] = '';
  $handler->display->display_options['fields']['partner_organisation_1']['link_to_entity'] = 0;
  /* Field: Indexed Multilingual Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = '';
  $handler->display->display_options['fields']['search_api_relevance']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['alter']['text'] = '<a href=\'[url]\'>See more</a>';
  $handler->display->display_options['fields']['search_api_relevance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Multilingual Content: Title #2 */
  $handler->display->display_options['sorts']['title2']['id'] = 'title2';
  $handler->display->display_options['sorts']['title2']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['sorts']['title2']['field'] = 'title2';
  $handler->display->display_options['sorts']['title2']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title2']['expose']['label'] = 'Alphabetically';
  /* Sort criterion: Indexed Multilingual Content: Publication date */
  $handler->display->display_options['sorts']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['sorts']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_publication_date']['expose']['label'] = 'Date of publication';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    16 => 0,
    14 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'title' => 'title',
    'title_field' => 'title_field',
  );
  /* Filter criterion: Indexed Multilingual Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Multilingual Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Partners documents */
  $handler = $view->new_display('page', 'Partners documents', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partners Documents';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multilingual Content: Cover image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'medium_crop_220',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Multilingual ID */
  $handler->display->display_options['fields']['search_api_et_id']['id'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['search_api_et_id']['field'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_et_id']['link_to_entity'] = 0;
  /* Field: Indexed Multilingual Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'practical_tool_title';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Document Partner Organisation */
  $handler->display->display_options['fields']['partner_organisation_1']['id'] = 'partner_organisation_1';
  $handler->display->display_options['fields']['partner_organisation_1']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['partner_organisation_1']['field'] = 'partner_organisation';
  $handler->display->display_options['fields']['partner_organisation_1']['label'] = '';
  $handler->display->display_options['fields']['partner_organisation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['partner_organisation_1']['separator'] = '';
  $handler->display->display_options['fields']['partner_organisation_1']['link_to_entity'] = 0;
  /* Field: Indexed Multilingual Content: Files */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['label'] = '';
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_files']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_document_files']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_files']['display'] = 'view';
  $handler->display->display_options['fields']['field_document_files']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_document_files']['bypass_access'] = 0;
  /* Field: Indexed Multilingual Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = '';
  $handler->display->display_options['fields']['search_api_relevance']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['alter']['text'] = '<a href=\'[url]\'>See more</a>';
  $handler->display->display_options['fields']['search_api_relevance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'partners-documents';

  /* Display: EU-OSHA Communications */
  $handler = $view->new_display('page', 'EU-OSHA Communications', 'page_2');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@order Showing @start - @end from @total';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multilingual Content: Cover image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'medium_crop_220',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Multilingual ID */
  $handler->display->display_options['fields']['search_api_et_id']['id'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['search_api_et_id']['field'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_et_id']['link_to_entity'] = 0;
  /* Field: Indexed Multilingual Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'osha_day_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'practical_tool_title';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Multilingual Content: Files */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['label'] = '';
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_files']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_document_files']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_files']['display'] = 'view';
  $handler->display->display_options['fields']['field_document_files']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_document_files']['bypass_access'] = 0;
  /* Field: Indexed Multilingual Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_default_multilingual_node_index';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = '';
  $handler->display->display_options['fields']['search_api_relevance']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['alter']['text'] = '<a href=\'[url]\'>See more</a>';
  $handler->display->display_options['fields']['search_api_relevance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'communications';
  $translatables['documents'] = array(
    t('Master'),
    t('EU-OSHA Communications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@order Showing @start - @end from @total'),
    t('__add_new_document_link__'),
    t('No results'),
    t('Multilingual ID'),
    t('.'),
    t('<a href=\'[url]\'>See more</a>'),
    t(','),
    t('Alphabetically'),
    t('Date of publication'),
    t('Search'),
    t('Partners documents'),
    t('Partners Documents'),
  );
  $export['documents'] = $view;

  return $export;
}