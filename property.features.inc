<?php

/**
 * Implementation of hook_node_info().
 */
function property_node_info() {
  $items = array(
    'property' => array(
      'name' => t('Property'),
      'base' => 'node_content',
      'description' => t('Add new real estate to the website.'),
      'has_title' => '1',
      'title_label' => t('Property name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function property_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
