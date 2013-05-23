<?php
/**
 * @file
 * saas_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function saas_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: access rules link akt_vip_rob.
  $permissions['access rules link akt_vip_rob'] = array(
    'name' => 'access rules link akt_vip_rob',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link check_static.
  $permissions['access rules link check_static'] = array(
    'name' => 'access rules link check_static',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link ved_dlya_sverky.
  $permissions['access rules link ved_dlya_sverky'] = array(
    'name' => 'access rules link ved_dlya_sverky',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: flag statdost.
  $permissions['flag statdost'] = array(
    'name' => 'flag statdost',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'flag',
  );

  // Exported permission: flag statusoplksd.
  $permissions['flag statusoplksd'] = array(
    'name' => 'flag statusoplksd',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'flag',
  );

  // Exported permission: flag statusoplshop.
  $permissions['flag statusoplshop'] = array(
    'name' => 'flag statusoplshop',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'flag',
  );

  // Exported permission: flag vzyatie_zakazi.
  $permissions['flag vzyatie_zakazi'] = array(
    'name' => 'flag vzyatie_zakazi',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'flag',
  );

  // Exported permission: unflag statdost.
  $permissions['unflag statdost'] = array(
    'name' => 'unflag statdost',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'flag',
  );

  // Exported permission: unflag statusoplksd.
  $permissions['unflag statusoplksd'] = array(
    'name' => 'unflag statusoplksd',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'flag',
  );

  // Exported permission: unflag statusoplshop.
  $permissions['unflag statusoplshop'] = array(
    'name' => 'unflag statusoplshop',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'flag',
  );

  // Exported permission: unflag vzyatie_zakazi.
  $permissions['unflag vzyatie_zakazi'] = array(
    'name' => 'unflag vzyatie_zakazi',
    'roles' => array(
      'КСД' => 'КСД',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
