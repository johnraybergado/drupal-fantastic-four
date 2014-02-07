<?php
/**
 * @file
 * footer_menu_and_static_pages_content_type.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_menu_and_static_pages_content_type_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer_about:node/302
  $menu_links['menu-footer_about:node/302'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/302',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'menu-footer_about:node/302',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer_advertising:node/304
  $menu_links['menu-footer_advertising:node/304'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/304',
    'router_path' => 'node/%',
    'link_title' => 'Advertising',
    'options' => array(
      'identifier' => 'menu-footer_advertising:node/304',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer_disclaimer:node/303
  $menu_links['menu-footer_disclaimer:node/303'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/303',
    'router_path' => 'node/%',
    'link_title' => 'Disclaimer',
    'options' => array(
      'identifier' => 'menu-footer_disclaimer:node/303',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer_terms-and-use:node/301
  $menu_links['menu-footer_terms-and-use:node/301'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/301',
    'router_path' => 'node/%',
    'link_title' => 'Terms and Use',
    'options' => array(
      'identifier' => 'menu-footer_terms-and-use:node/301',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Advertising');
  t('Disclaimer');
  t('Terms and Use');


  return $menu_links;
}
