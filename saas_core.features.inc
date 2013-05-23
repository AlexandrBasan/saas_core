<?php
/**
 * @file
 * saas_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saas_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function saas_core_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function saas_core_eck_bundle_info() {
  $items = array(
  'documents_appdelivery' => array(
  'machine_name' => 'documents_appdelivery',
  'entity_type' => 'documents',
  'name' => 'appdelivery',
  'label' => 'Заявка на доставку',
),
  'location_location' => array(
  'machine_name' => 'location_location',
  'entity_type' => 'location',
  'name' => 'location',
  'label' => 'Местоположение',
),
  'product_product' => array(
  'machine_name' => 'product_product',
  'entity_type' => 'product',
  'name' => 'product',
  'label' => 'Товар',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function saas_core_eck_entity_type_info() {
$items = array(
       'documents' => array(
  'name' => 'documents',
  'label' => 'Документы',
  'properties' => array(
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'language' => array(
      'label' => 'Entity language',
      'type' => 'language',
      'behavior' => 'language',
    ),
  ),
),
       'location' => array(
  'name' => 'location',
  'label' => 'Местоположение',
  'properties' => array(
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'street' => array(
      'label' => 'Улица',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
       'product' => array(
  'name' => 'product',
  'label' => 'Товар',
  'properties' => array(
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'language' => array(
      'label' => 'Entity language',
      'type' => 'language',
      'behavior' => 'language',
    ),
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
  );
  return $items;
}
