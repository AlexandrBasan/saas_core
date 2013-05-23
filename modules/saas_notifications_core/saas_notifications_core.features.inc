<?php
/**
 * @file
 * saas_notifications_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saas_notifications_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function saas_notifications_core_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function saas_notifications_core_eck_bundle_info() {
  $items = array(
  'variablesm_notifications_ksd' => array(
  'machine_name' => 'variablesm_notifications_ksd',
  'entity_type' => 'variablesm',
  'name' => 'notifications_ksd',
  'label' => 'Уведомления КСД',
),
  'variablesm_notifications_shop' => array(
  'machine_name' => 'variablesm_notifications_shop',
  'entity_type' => 'variablesm',
  'name' => 'notifications_shop',
  'label' => 'Уведомления Магазина',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function saas_notifications_core_eck_entity_type_info() {
$items = array(
       'variablesm' => array(
  'name' => 'variablesm',
  'label' => 'Переменные',
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
  );
  return $items;
}
