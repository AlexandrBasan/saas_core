<?php
/**
 * @file
 * saas_notifications_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function saas_notifications_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ksdmenu:notifications_ksd
  $menu_links['menu-ksdmenu:notifications_ksd'] = array(
    'menu_name' => 'menu-ksdmenu',
    'link_path' => 'notifications_ksd',
    'router_path' => 'notifications_ksd',
    'link_title' => 'Оповещения',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-menu-admin:notifications_ksd_admin
  $menu_links['menu-menu-admin:notifications_ksd_admin'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'notifications_ksd_admin',
    'router_path' => 'notifications_ksd_admin',
    'link_title' => 'Оповещение для КСД',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-menu-admin:notifications_shop_admin
  $menu_links['menu-menu-admin:notifications_shop_admin'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'notifications_shop_admin',
    'router_path' => 'notifications_shop_admin',
    'link_title' => 'Оповещения для магазина',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-menu-admin:statistic
  $menu_links['menu-menu-admin:statistic'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'statistic',
    'router_path' => 'statistic',
    'link_title' => 'Статистика',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-shopmenu:notifications_shop
  $menu_links['menu-shopmenu:notifications_shop'] = array(
    'menu_name' => 'menu-shopmenu',
    'link_path' => 'notifications_shop',
    'router_path' => 'notifications_shop',
    'link_title' => 'Оповещения',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-shopmenu:statistics_shop
  $menu_links['menu-shopmenu:statistics_shop'] = array(
    'menu_name' => 'menu-shopmenu',
    'link_path' => 'statistics_shop',
    'router_path' => 'statistics_shop',
    'link_title' => 'Статистика',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Оповещение для КСД');
  t('Оповещения');
  t('Оповещения для магазина');
  t('Статистика');


  return $menu_links;
}
