<?php
/**
 * @file
 * saas_company_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function saas_company_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_com_company.
  $permissions['create field_com_company'] = array(
    'name' => 'create field_com_company',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: eck add company bundles.
  $permissions['eck add company bundles'] = array(
    'name' => 'eck add company bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck add company company entities.
  $permissions['eck add company company entities'] = array(
    'name' => 'eck add company company entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer company bundles.
  $permissions['eck administer company bundles'] = array(
    'name' => 'eck administer company bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck administer company company entities.
  $permissions['eck administer company company entities'] = array(
    'name' => 'eck administer company company entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete company bundles.
  $permissions['eck delete company bundles'] = array(
    'name' => 'eck delete company bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck delete company company entities.
  $permissions['eck delete company company entities'] = array(
    'name' => 'eck delete company company entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit company bundles.
  $permissions['eck edit company bundles'] = array(
    'name' => 'eck edit company bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck edit company company entities.
  $permissions['eck edit company company entities'] = array(
    'name' => 'eck edit company company entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: eck list company bundles.
  $permissions['eck list company bundles'] = array(
    'name' => 'eck list company bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck list company company entities.
  $permissions['eck list company company entities'] = array(
    'name' => 'eck list company company entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: eck view company company entities.
  $permissions['eck view company company entities'] = array(
    'name' => 'eck view company company entities',
    'roles' => array(
      'КСД' => 'КСД',
      'Магазин' => 'Магазин',
    ),
    'module' => 'eck',
  );

  // Exported permission: edit own field_com_company.
  $permissions['edit own field_com_company'] = array(
    'name' => 'edit own field_com_company',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: manage company properties.
  $permissions['manage company properties'] = array(
    'name' => 'manage company properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: view own field_com_company.
  $permissions['view own field_com_company'] = array(
    'name' => 'view own field_com_company',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
