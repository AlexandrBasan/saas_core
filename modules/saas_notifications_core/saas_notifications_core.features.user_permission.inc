<?php
/**
 * @file
 * saas_notifications_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function saas_notifications_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: eck add variablesm notifications_ksd entities.
  $permissions['eck add variablesm notifications_ksd entities'] = array(
    'name' => 'eck add variablesm notifications_ksd entities',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck add variablesm notifications_shop entities.
  $permissions['eck add variablesm notifications_shop entities'] = array(
    'name' => 'eck add variablesm notifications_shop entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck administer variablesm notifications_ksd entities.
  $permissions['eck administer variablesm notifications_ksd entities'] = array(
    'name' => 'eck administer variablesm notifications_ksd entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer variablesm notifications_shop entities.
  $permissions['eck administer variablesm notifications_shop entities'] = array(
    'name' => 'eck administer variablesm notifications_shop entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete variablesm notifications_ksd entities.
  $permissions['eck delete variablesm notifications_ksd entities'] = array(
    'name' => 'eck delete variablesm notifications_ksd entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete variablesm notifications_shop entities.
  $permissions['eck delete variablesm notifications_shop entities'] = array(
    'name' => 'eck delete variablesm notifications_shop entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit variablesm notifications_ksd entities.
  $permissions['eck edit variablesm notifications_ksd entities'] = array(
    'name' => 'eck edit variablesm notifications_ksd entities',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck edit variablesm notifications_shop entities.
  $permissions['eck edit variablesm notifications_shop entities'] = array(
    'name' => 'eck edit variablesm notifications_shop entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck list variablesm notifications_ksd entities.
  $permissions['eck list variablesm notifications_ksd entities'] = array(
    'name' => 'eck list variablesm notifications_ksd entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list variablesm notifications_shop entities.
  $permissions['eck list variablesm notifications_shop entities'] = array(
    'name' => 'eck list variablesm notifications_shop entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck view variablesm notifications_ksd entities.
  $permissions['eck view variablesm notifications_ksd entities'] = array(
    'name' => 'eck view variablesm notifications_ksd entities',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck view variablesm notifications_shop entities.
  $permissions['eck view variablesm notifications_shop entities'] = array(
    'name' => 'eck view variablesm notifications_shop entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
