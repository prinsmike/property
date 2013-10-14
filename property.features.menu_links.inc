<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function property_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-property:admin/structure/taxonomy/suburb/add
  $menu_links['menu-property:admin/structure/taxonomy/suburb/add'] = array(
    'menu_name' => 'menu-property',
    'link_path' => 'admin/structure/taxonomy/suburb/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Add a suburb',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-property:admin/structure/taxonomy/type_of_property
  $menu_links['menu-property:admin/structure/taxonomy/type_of_property'] = array(
    'menu_name' => 'menu-property',
    'link_path' => 'admin/structure/taxonomy/type_of_property',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage property types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-property:admin/structure/taxonomy/type_of_property/add
  $menu_links['menu-property:admin/structure/taxonomy/type_of_property/add'] = array(
    'menu_name' => 'menu-property',
    'link_path' => 'admin/structure/taxonomy/type_of_property/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Add a type of property',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-property:node/add/property
  $menu_links['menu-property:node/add/property'] = array(
    'menu_name' => 'menu-property',
    'link_path' => 'node/add/property',
    'router_path' => 'node/add/property',
    'link_title' => 'Add a new property',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add a new property');
  t('Add a suburb');
  t('Add a type of property');
  t('Manage property types');


  return $menu_links;
}
