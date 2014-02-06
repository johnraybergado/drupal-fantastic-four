<?php
/**
 * @file
 * popular_news_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function popular_news_page_menu_default_menu_links() {
  $menu_links = array();

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
  t('Popular News');


  return $menu_links;
}
