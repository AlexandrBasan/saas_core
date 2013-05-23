<?php
/**
 * @file
 * saas_company_core.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function saas_company_core_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'employee';
  $relation_type->label = 'Сотрудник';
  $relation_type->reverse_label = 'Сотрудник';
  $relation_type->directional = 0;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'company:company',
    1 => 'user:user',
  );
  $relation_type->target_bundles = array();
  $export['employee'] = $relation_type;

  return $export;
}
