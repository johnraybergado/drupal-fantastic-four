<?php
/**
 * @file
 * footer_menu_and_static_pages_content_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function footer_menu_and_static_pages_content_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Entertainment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8e7bd4d6-42f1-4cfd-9fe7-32d6c795ca49',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
