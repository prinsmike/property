<?php

/**
 * Implementation of hook_views_default_views().
 */
function property_views_default_views() {
  $views = array();

  // Exported view: property
  $view = new view;
  $view->name = 'property';
  $view->description = 'Property view with exposed filters.';
  $view->tag = 'node';
  $view->base_table = 'node';
  $view->human_name = 'Property';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Property';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'title';
  $handler->display->display_options['style_options']['columns'] = array(
    'entity_id_5' => 'entity_id_5',
    'title' => 'title',
    'entity_id_11' => 'entity_id_11',
    'entity_id_10' => 'entity_id_10',
    'entity_id_8' => 'entity_id_8',
    'entity_id_6' => 'entity_id_6',
    'entity_id_9' => 'entity_id_9',
    'entity_id_3' => 'entity_id_3',
    'entity_id_1' => 'entity_id_1',
    'entity_id' => 'entity_id',
    'entity_id_4' => 'entity_id_4',
    'entity_id_2' => 'entity_id_2',
    'entity_id_7' => 'entity_id_7',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_11' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_9' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not yield any results. Try adjusting the options above.';
  /* Field: Fields: field_images */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id_5']['label'] = '';
  $handler->display->display_options['fields']['entity_id_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_5']['element_class'] = 'images';
  $handler->display->display_options['fields']['entity_id_5']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_5']['element_wrapper_class'] = 'images-wrapper';
  $handler->display->display_options['fields']['entity_id_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_5']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Fields: field_type_of_property */
  $handler->display->display_options['fields']['entity_id_11']['id'] = 'entity_id_11';
  $handler->display->display_options['fields']['entity_id_11']['table'] = 'field_data_field_type_of_property';
  $handler->display->display_options['fields']['entity_id_11']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id_11']['label'] = 'Type of Property';
  $handler->display->display_options['fields']['entity_id_11']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_11']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_11']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_11']['element_class'] = 'property-type';
  $handler->display->display_options['fields']['entity_id_11']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_11']['element_label_class'] = 'property-type-label';
  $handler->display->display_options['fields']['entity_id_11']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_11']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_11']['element_wrapper_class'] = 'property-type-wrapper';
  $handler->display->display_options['fields']['entity_id_11']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_11']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_11']['click_sort_column'] = 'tid';
  /* Field: Fields: field_suburb */
  $handler->display->display_options['fields']['entity_id_10']['id'] = 'entity_id_10';
  $handler->display->display_options['fields']['entity_id_10']['table'] = 'field_data_field_suburb';
  $handler->display->display_options['fields']['entity_id_10']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id_10']['label'] = 'Suburb';
  $handler->display->display_options['fields']['entity_id_10']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_10']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_10']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_10']['element_class'] = 'suburb';
  $handler->display->display_options['fields']['entity_id_10']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_10']['element_label_class'] = 'suburb-label';
  $handler->display->display_options['fields']['entity_id_10']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_10']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_10']['element_wrapper_class'] = 'suburb-wrapper';
  $handler->display->display_options['fields']['entity_id_10']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_10']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_10']['click_sort_column'] = 'tid';
  /* Field: Fields: field_price */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id_8']['label'] = 'Price';
  $handler->display->display_options['fields']['entity_id_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_8']['element_class'] = 'price';
  $handler->display->display_options['fields']['entity_id_8']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_8']['element_label_class'] = 'price-label';
  $handler->display->display_options['fields']['entity_id_8']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_class'] = 'price-wrapper';
  $handler->display->display_options['fields']['entity_id_8']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['empty_zero'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Fields: field_bedrooms */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_bedrooms';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'Bedrooms';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'bedrooms';
  $handler->display->display_options['fields']['entity_id_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_label_class'] = 'bedrooms-label';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_wrapper_class'] = 'bedrooms-wrapper';
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 1;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'property' => 'property',
  );
  /* Filter: Fields: field_sale_rent (field_sale_rent) */
  $handler->display->display_options['filters']['field_sale_rent_value']['id'] = 'field_sale_rent_value';
  $handler->display->display_options['filters']['field_sale_rent_value']['table'] = 'field_data_field_sale_rent';
  $handler->display->display_options['filters']['field_sale_rent_value']['field'] = 'field_sale_rent_value';
  $handler->display->display_options['filters']['field_sale_rent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sale_rent_value']['expose']['operator'] = 'field_sale_rent_value_op';
  $handler->display->display_options['filters']['field_sale_rent_value']['expose']['identifier'] = 'field_sale_rent_value';
  $handler->display->display_options['filters']['field_sale_rent_value']['expose']['optional'] = 0;
  $handler->display->display_options['filters']['field_sale_rent_value']['expose']['reduce'] = 0;
  /* Filter: Fields: field_price (field_price) */
  $handler->display->display_options['filters']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['filters']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['label'] = 'Price';
  $handler->display->display_options['filters']['field_price_value']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_price_value']['expose']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['expose']['single'] = TRUE;
  /* Filter: Property type */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['ui_name'] = 'Property type';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type of Property';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'type_of_property';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter: Suburb */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['ui_name'] = 'Suburb';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'suburb';
  $handler->display->display_options['filters']['tid_1']['error_message'] = 1;
  /* Filter: Fields: field_bedrooms (field_bedrooms) */
  $handler->display->display_options['filters']['field_bedrooms_value']['id'] = 'field_bedrooms_value';
  $handler->display->display_options['filters']['field_bedrooms_value']['table'] = 'field_data_field_bedrooms';
  $handler->display->display_options['filters']['field_bedrooms_value']['field'] = 'field_bedrooms_value';
  $handler->display->display_options['filters']['field_bedrooms_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
  );
  $handler->display->display_options['filters']['field_bedrooms_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['operator'] = 'field_bedrooms_value_op';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['label'] = 'Bedrooms';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['identifier'] = 'bedrooms';
  $handler->display->display_options['filters']['field_bedrooms_value']['expose']['reduce'] = 1;
  /* Filter: Fields: field_bathrooms (field_bathrooms) */
  $handler->display->display_options['filters']['field_bathrooms_value']['id'] = 'field_bathrooms_value';
  $handler->display->display_options['filters']['field_bathrooms_value']['table'] = 'field_data_field_bathrooms';
  $handler->display->display_options['filters']['field_bathrooms_value']['field'] = 'field_bathrooms_value';
  $handler->display->display_options['filters']['field_bathrooms_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['field_bathrooms_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['operator'] = 'field_bathrooms_value_op';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['label'] = 'Bathrooms';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['identifier'] = 'bathrooms';
  $handler->display->display_options['filters']['field_bathrooms_value']['expose']['reduce'] = 1;
  /* Filter: Fields: field_garage (field_garage) */
  $handler->display->display_options['filters']['field_garage_value']['id'] = 'field_garage_value';
  $handler->display->display_options['filters']['field_garage_value']['table'] = 'field_data_field_garage';
  $handler->display->display_options['filters']['field_garage_value']['field'] = 'field_garage_value';
  $handler->display->display_options['filters']['field_garage_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_garage_value']['expose']['operator'] = 'field_garage_value_op';
  $handler->display->display_options['filters']['field_garage_value']['expose']['label'] = 'Garage';
  $handler->display->display_options['filters']['field_garage_value']['expose']['identifier'] = 'field_garage_value';
  $handler->display->display_options['filters']['field_garage_value']['expose']['reduce'] = 0;
  /* Filter: Fields: field_carport (field_carport) */
  $handler->display->display_options['filters']['field_carport_value']['id'] = 'field_carport_value';
  $handler->display->display_options['filters']['field_carport_value']['table'] = 'field_data_field_carport';
  $handler->display->display_options['filters']['field_carport_value']['field'] = 'field_carport_value';
  $handler->display->display_options['filters']['field_carport_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_carport_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_carport_value']['expose']['operator'] = 'field_carport_value_op';
  $handler->display->display_options['filters']['field_carport_value']['expose']['label'] = 'Carport';
  $handler->display->display_options['filters']['field_carport_value']['expose']['identifier'] = 'carport';
  $handler->display->display_options['filters']['field_carport_value']['expose']['reduce'] = 1;
  /* Filter: Fields: field_electricity (field_electricity) */
  $handler->display->display_options['filters']['field_electricity_value']['id'] = 'field_electricity_value';
  $handler->display->display_options['filters']['field_electricity_value']['table'] = 'field_data_field_electricity';
  $handler->display->display_options['filters']['field_electricity_value']['field'] = 'field_electricity_value';
  $handler->display->display_options['filters']['field_electricity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_electricity_value']['expose']['operator'] = 'field_electricity_value_op';
  $handler->display->display_options['filters']['field_electricity_value']['expose']['label'] = 'Electricity';
  $handler->display->display_options['filters']['field_electricity_value']['expose']['identifier'] = 'field_electricity_value';
  $handler->display->display_options['filters']['field_electricity_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'property';
  $translatables['property'] = array(
    t('Defaults'),
    t('Property'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Your search did not yield any results. Try adjusting the options above.'),
    t('Type of Property'),
    t('Suburb'),
    t('Price'),
    t('Bedrooms'),
    t('Bathrooms'),
    t('Garage'),
    t('Carport'),
    t('Electricity'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
