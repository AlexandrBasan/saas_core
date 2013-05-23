<?php
/**
 * @file
 * saas_company_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function saas_company_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ksdmenu:menutoken/5191e8e3e32e0
  $menu_links['menu-ksdmenu:menutoken/5191e8e3e32e0'] = array(
    'menu_name' => 'menu-ksdmenu',
    'link_path' => 'menutoken/5191e8e3e32e0',
    'router_path' => 'menutoken/%',
    'link_title' => 'Настройки',
    'options' => array(
      'menu_token_link_path' => 'company/company/[current-user:field-otn-compuser:id]/edit',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-shopmenu:menutoken/5191e633ad215
  $menu_links['menu-shopmenu:menutoken/5191e633ad215'] = array(
    'menu_name' => 'menu-shopmenu',
    'link_path' => 'menutoken/5191e633ad215',
    'router_path' => 'menutoken/%',
    'link_title' => 'Настройки',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_token_link_path' => 'company/company/[current-user:field-otn-compuser:id]/edit',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Настройки');


  return $menu_links;
}
