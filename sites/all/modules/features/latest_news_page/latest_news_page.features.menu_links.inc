<?php
/**
 * @file
 * latest_news_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function latest_news_page_menu_default_menu_links() {
  $menu_links = array();

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
  // Translatables
  // Included for use with string extractors like potx.
  t('Latest News');


  return $menu_links;
}
