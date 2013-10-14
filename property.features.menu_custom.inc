<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function property_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-property
  $menus['menu-property'] = array(
    'menu_name' => 'menu-property',
    'title' => 'Property',
    'description' => 'Links to help you manage your property content.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links to help you manage your property content.');
  t('Property');


  return $menus;
}
