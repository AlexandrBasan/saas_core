<?php
/**
 * @file
 * saas_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function saas_core_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 4,
  );

  // Exported role: КСД.
  $roles['КСД'] = array(
    'name' => 'КСД',
    'weight' => 2,
  );

  // Exported role: Магазин.
  $roles['Магазин'] = array(
    'name' => 'Магазин',
    'weight' => 3,
  );

  return $roles;
}
