<?php
/**
 * @file
 * latest_news_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function latest_news_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'latest-news';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
