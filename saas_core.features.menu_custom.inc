<?php
/**
 * @file
 * saas_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function saas_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ksdmenu.
  $menus['menu-ksdmenu'] = array(
    'menu_name' => 'menu-ksdmenu',
    'title' => 'Меню КСД',
    'description' => '',
  );
  // Exported menu: menu-menu-admin.
  $menus['menu-menu-admin'] = array(
    'menu_name' => 'menu-menu-admin',
    'title' => 'Меню администратора',
    'description' => '',
  );
  // Exported menu: menu-shopmenu.
  $menus['menu-shopmenu'] = array(
    'menu_name' => 'menu-shopmenu',
    'title' => 'Меню магазина',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Меню КСД');
  t('Меню администратора');
  t('Меню магазина');


  return $menus;
}
