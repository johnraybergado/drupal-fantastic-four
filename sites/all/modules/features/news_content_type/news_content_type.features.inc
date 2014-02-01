<?php
/**
 * @file
 * news_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function news_content_type_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Content type for News '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
