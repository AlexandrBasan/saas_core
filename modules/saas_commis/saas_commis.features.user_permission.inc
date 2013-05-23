<?php
/**
 * @file
 * saas_commis.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function saas_commis_user_default_permissions() {
  $permissions = array();

  // Exported permission: eck add variablesm fines_commission entities.
  $permissions['eck add variablesm fines_commission entities'] = array(
    'name' => 'eck add variablesm fines_commission entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer variablesm fines_commission entities.
  $permissions['eck administer variablesm fines_commission entities'] = array(
    'name' => 'eck administer variablesm fines_commission entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete variablesm fines_commission entities.
  $permissions['eck delete variablesm fines_commission entities'] = array(
    'name' => 'eck delete variablesm fines_commission entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit variablesm fines_commission entities.
  $permissions['eck edit variablesm fines_commission entities'] = array(
    'name' => 'eck edit variablesm fines_commission entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list variablesm fines_commission entities.
  $permissions['eck list variablesm fines_commission entities'] = array(
    'name' => 'eck list variablesm fines_commission entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck view variablesm fines_commission entities.
  $permissions['eck view variablesm fines_commission entities'] = array(
    'name' => 'eck view variablesm fines_commission entities',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
