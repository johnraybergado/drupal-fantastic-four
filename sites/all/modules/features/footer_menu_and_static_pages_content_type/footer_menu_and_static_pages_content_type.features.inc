<?php
/**
 * @file
 * footer_menu_and_static_pages_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function footer_menu_and_static_pages_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function footer_menu_and_static_pages_content_type_node_info() {
  $items = array(
    'static_pages' => array(
      'name' => t('Static Pages'),
      'base' => 'node_content',
      'description' => t('Pages that are static'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
