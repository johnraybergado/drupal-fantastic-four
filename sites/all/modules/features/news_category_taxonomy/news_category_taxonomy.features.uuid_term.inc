<?php
/**
 * @file
 * news_category_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function news_category_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Travel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3c4ae1be-75b4-4dcf-bfbb-775ca435fc39',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Sports',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5a104eb1-2ecd-4b2e-9db6-44312945058a',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Horoscope',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '75278ea2-df99-48a1-a114-62ad1c04f50e',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Games',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '78ac8e6d-cdfe-48bf-8113-3cd58d159c35',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Living',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '79b97084-583e-4a72-81c1-f3d23ebb3f22',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Entertainment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8e7bd4d6-42f1-4cfd-9fe7-32d6c795ca49',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Money',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9890e4de-83d5-477f-aa9f-7a9f0ba8e3d8',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Showbiz',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a245620d-6ff1-48f7-a85b-971985b2f972',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Tech',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a4dc7802-3b43-4333-9fa5-19752e74a9ea',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Politics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f3716d2f-b6a9-46c0-bd54-fc002263fb2f',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
