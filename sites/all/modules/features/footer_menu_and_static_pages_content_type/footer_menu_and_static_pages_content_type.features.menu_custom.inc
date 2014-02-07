<?php
/**
 * @file
 * footer_menu_and_static_pages_content_type.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_menu_and_static_pages_content_type_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => 'Menus present on the footer region',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Menus present on the footer region');


  return $menus;
}
