<?php
/**
 * @file
 * main_content_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function main_content_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_content';
  $context->description = 'context for main content';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for main content');
  t('theme');
  $export['main_content'] = $context;

  return $export;
}
