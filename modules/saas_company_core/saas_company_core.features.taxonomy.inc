<?php
/**
 * @file
 * saas_company_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function saas_company_core_taxonomy_default_vocabularies() {
  return array(
    'countriescity' => array(
      'name' => 'Страны и города',
      'machine_name' => 'countriescity',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
