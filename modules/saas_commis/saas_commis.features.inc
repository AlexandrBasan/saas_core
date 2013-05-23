<?php
/**
 * @file
 * saas_commis.features.inc
 */

/**
 * Implements hook_views_api().
 */
function saas_commis_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function saas_commis_eck_bundle_info() {
  $items = array(
  'variablesm_fines_commission' => array(
  'machine_name' => 'variablesm_fines_commission',
  'entity_type' => 'variablesm',
  'name' => 'fines_commission',
  'label' => 'Штрафы и комисии',
),
  );
  return $items;
}
