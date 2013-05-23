<?php
/**
 * @file
 * saas_notifications_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function saas_notifications_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-shopmenu.
  $menus['menu-shopmenu'] = array(
    'menu_name' => 'menu-shopmenu',
    'title' => 'Меню магазина',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Меню магазина');


  return $menus;
}
