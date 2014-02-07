<?php
/**
 * @file
 * basic_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function basic_pages_menu_default_menu_custom() {
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
