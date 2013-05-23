<?php
/**
 * @file
 * saas_company_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saas_company_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function saas_company_core_eck_bundle_info() {
  $items = array(
  'company_company' => array(
  'machine_name' => 'company_company',
  'entity_type' => 'company',
  'name' => 'company',
  'label' => 'Компания',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function saas_company_core_eck_entity_type_info() {
$items = array(
       'company' => array(
  'name' => 'company',
  'label' => 'Компания',
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
    'name_comp' => array(
      'label' => 'Имя компании',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
  );
  return $items;
}

/**
 * Implements hook_homebox().
 */
function saas_company_core_homebox() {
  $homeboxes = array();

  $homeboxes['home'] = array (
    'regions' => 3,
    'cache' => 0,
    'color' => 1,
    'colors' => 
    array (
      0 => '#E4F0F8',
      1 => '#CC0000',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => 
    array (
      'homebox_custom' => 
      array (
        'module' => 'homebox',
        'delta' => 'custom',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
      'user_online' => 
      array (
        'module' => 'user',
        'delta' => 'online',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
    ),
    'widths' => 
    array (
    ),
    'title' => 'Сводка',
    'path' => 'home',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}
