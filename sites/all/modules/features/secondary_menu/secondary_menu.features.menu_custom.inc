<?php
/**
 * @file
 * secondary_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function secondary_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary Menu',
    'description' => 'Provides menu for the taxonomy based pages.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Provides menu for the taxonomy based pages.');
  t('Secondary Menu');


  return $menus;
}
