<?php
/**
 * @file
 * saas_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function saas_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'user',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: create field_edit_zakaz.
  $permissions['create field_edit_zakaz'] = array(
    'name' => 'create field_edit_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_return_zakaz.
  $permissions['create field_return_zakaz'] = array(
    'name' => 'create field_return_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_vzyat_zakaz.
  $permissions['create field_vzyat_zakaz'] = array(
    'name' => 'create field_vzyat_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: eck add documents appdelivery entities.
  $permissions['eck add documents appdelivery entities'] = array(
    'name' => 'eck add documents appdelivery entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck add documents bundles.
  $permissions['eck add documents bundles'] = array(
    'name' => 'eck add documents bundles',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck add location bundles.
  $permissions['eck add location bundles'] = array(
    'name' => 'eck add location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck add location location entities.
  $permissions['eck add location location entities'] = array(
    'name' => 'eck add location location entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck add product bundles.
  $permissions['eck add product bundles'] = array(
    'name' => 'eck add product bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck add product product entities.
  $permissions['eck add product product entities'] = array(
    'name' => 'eck add product product entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck administer documents appdelivery entities.
  $permissions['eck administer documents appdelivery entities'] = array(
    'name' => 'eck administer documents appdelivery entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer documents bundles.
  $permissions['eck administer documents bundles'] = array(
    'name' => 'eck administer documents bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer location bundles.
  $permissions['eck administer location bundles'] = array(
    'name' => 'eck administer location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer location location entities.
  $permissions['eck administer location location entities'] = array(
    'name' => 'eck administer location location entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer product product entities.
  $permissions['eck administer product product entities'] = array(
    'name' => 'eck administer product product entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete documents appdelivery entities.
  $permissions['eck delete documents appdelivery entities'] = array(
    'name' => 'eck delete documents appdelivery entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete documents bundles.
  $permissions['eck delete documents bundles'] = array(
    'name' => 'eck delete documents bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete location bundles.
  $permissions['eck delete location bundles'] = array(
    'name' => 'eck delete location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete location location entities.
  $permissions['eck delete location location entities'] = array(
    'name' => 'eck delete location location entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck delete product bundles.
  $permissions['eck delete product bundles'] = array(
    'name' => 'eck delete product bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete product product entities.
  $permissions['eck delete product product entities'] = array(
    'name' => 'eck delete product product entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck edit documents appdelivery entities.
  $permissions['eck edit documents appdelivery entities'] = array(
    'name' => 'eck edit documents appdelivery entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck edit documents bundles.
  $permissions['eck edit documents bundles'] = array(
    'name' => 'eck edit documents bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit location bundles.
  $permissions['eck edit location bundles'] = array(
    'name' => 'eck edit location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit location location entities.
  $permissions['eck edit location location entities'] = array(
    'name' => 'eck edit location location entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck edit product bundles.
  $permissions['eck edit product bundles'] = array(
    'name' => 'eck edit product bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit product product entities.
  $permissions['eck edit product product entities'] = array(
    'name' => 'eck edit product product entities',
    'roles' => array(
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck list documents appdelivery entities.
  $permissions['eck list documents appdelivery entities'] = array(
    'name' => 'eck list documents appdelivery entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list documents bundles.
  $permissions['eck list documents bundles'] = array(
    'name' => 'eck list documents bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list location bundles.
  $permissions['eck list location bundles'] = array(
    'name' => 'eck list location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list location location entities.
  $permissions['eck list location location entities'] = array(
    'name' => 'eck list location location entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list product bundles.
  $permissions['eck list product bundles'] = array(
    'name' => 'eck list product bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list product product entities.
  $permissions['eck list product product entities'] = array(
    'name' => 'eck list product product entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck view documents appdelivery entities.
  $permissions['eck view documents appdelivery entities'] = array(
    'name' => 'eck view documents appdelivery entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck view location location entities.
  $permissions['eck view location location entities'] = array(
    'name' => 'eck view location location entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck view product product entities.
  $permissions['eck view product product entities'] = array(
    'name' => 'eck view product product entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: edit field_edit_zakaz.
  $permissions['edit field_edit_zakaz'] = array(
    'name' => 'edit field_edit_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_return_zakaz.
  $permissions['edit field_return_zakaz'] = array(
    'name' => 'edit field_return_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_vzyat_zakaz.
  $permissions['edit field_vzyat_zakaz'] = array(
    'name' => 'edit field_vzyat_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_edit_zakaz.
  $permissions['edit own field_edit_zakaz'] = array(
    'name' => 'edit own field_edit_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_return_zakaz.
  $permissions['edit own field_return_zakaz'] = array(
    'name' => 'edit own field_return_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_vzyat_zakaz.
  $permissions['edit own field_vzyat_zakaz'] = array(
    'name' => 'edit own field_vzyat_zakaz',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'media',
  );

  // Exported permission: manage documents properties.
  $permissions['manage documents properties'] = array(
    'name' => 'manage documents properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: manage location properties.
  $permissions['manage location properties'] = array(
    'name' => 'manage location properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: view field_edit_zakaz.
  $permissions['view field_edit_zakaz'] = array(
    'name' => 'view field_edit_zakaz',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Магазин' => 'Магазин',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_return_zakaz.
  $permissions['view field_return_zakaz'] = array(
    'name' => 'view field_return_zakaz',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Магазин' => 'Магазин',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_vzyat_zakaz.
  $permissions['view field_vzyat_zakaz'] = array(
    'name' => 'view field_vzyat_zakaz',
    'roles' => array(
      'Administrator' => 'Administrator',
      'КСД' => 'КСД',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_edit_zakaz.
  $permissions['view own field_edit_zakaz'] = array(
    'name' => 'view own field_edit_zakaz',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Магазин' => 'Магазин',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_return_zakaz.
  $permissions['view own field_return_zakaz'] = array(
    'name' => 'view own field_return_zakaz',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Магазин' => 'Магазин',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_vzyat_zakaz.
  $permissions['view own field_vzyat_zakaz'] = array(
    'name' => 'view own field_vzyat_zakaz',
    'roles' => array(
      'Administrator' => 'Administrator',
      'КСД' => 'КСД',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  return $permissions;
}
