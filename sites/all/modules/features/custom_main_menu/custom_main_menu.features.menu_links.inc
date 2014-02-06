<?php
/**
 * @file
 * custom_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function custom_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_archive-news:archive-news
  $menu_links['main-menu_archive-news:archive-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'archive-news',
    'router_path' => 'archive-news',
    'link_title' => 'Archive News',
    'options' => array(
      'identifier' => 'main-menu_archive-news:archive-news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_latest-news:latest-news
  $menu_links['main-menu_latest-news:latest-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'latest-news',
    'router_path' => 'latest-news',
    'link_title' => 'Latest News',
    'options' => array(
      'attributes' => array(
        'title' => 'News within 6 months',
      ),
      'identifier' => 'main-menu_latest-news:latest-news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_popular-news:popular-news
  $menu_links['main-menu_popular-news:popular-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'popular-news',
    'router_path' => 'popular-news',
    'link_title' => 'Popular News',
    'options' => array(
      'identifier' => 'main-menu_popular-news:popular-news',
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
  t('Archive News');
  t('Latest News');
  t('Popular News');


  return $menu_links;
}
