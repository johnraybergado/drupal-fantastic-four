<?php
/**
 * @file
 * basic_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function basic_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer_about:about
  $menu_links['menu-footer_about:about'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'menu-footer_about:about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer_advertising:ads
  $menu_links['menu-footer_advertising:ads'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'ads',
    'router_path' => 'ads',
    'link_title' => 'Advertising',
    'options' => array(
      'identifier' => 'menu-footer_advertising:ads',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer_disclaimer:disclaimer
  $menu_links['menu-footer_disclaimer:disclaimer'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'disclaimer',
    'router_path' => 'disclaimer',
    'link_title' => 'Disclaimer',
    'options' => array(
      'identifier' => 'menu-footer_disclaimer:disclaimer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer_terms-and-use:terms
  $menu_links['menu-footer_terms-and-use:terms'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'terms',
    'router_path' => 'terms',
    'link_title' => 'Terms and use',
    'options' => array(
      'identifier' => 'menu-footer_terms-and-use:terms',
    ),
    'module' => 'system',
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
  t('Terms and use');


  return $menu_links;
}
