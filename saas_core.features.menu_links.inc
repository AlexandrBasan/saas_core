<?php
/**
 * @file
 * saas_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function saas_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ksdmenu:home
  $menu_links['menu-ksdmenu:home'] = array(
    'menu_name' => 'menu-ksdmenu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Сводка',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-ksdmenu:сontinuing_сlaims_free_ksd
  $menu_links['menu-ksdmenu:сontinuing_сlaims_free_ksd'] = array(
    'menu_name' => 'menu-ksdmenu',
    'link_path' => 'сontinuing_сlaims_free_ksd',
    'router_path' => 'сontinuing_сlaims_free_ksd',
    'link_title' => 'Текущие заявки',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-menu-admin:admin/structure/entity-type/documents/appdelivery/add
  $menu_links['menu-menu-admin:admin/structure/entity-type/documents/appdelivery/add'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'admin/structure/entity-type/documents/appdelivery/add',
    'router_path' => 'admin/structure/entity-type/documents/appdelivery/add',
    'link_title' => 'Заявка на доставку',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-menu-admin:home
  $menu_links['menu-menu-admin:home'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Сводка',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-menu-admin:сontinuing_сlaims_free
  $menu_links['menu-menu-admin:сontinuing_сlaims_free'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'сontinuing_сlaims_free',
    'router_path' => 'сontinuing_сlaims_free',
    'link_title' => 'Текущие заявки',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-shopmenu:admin/structure/entity-type/documents/appdelivery/add
  $menu_links['menu-shopmenu:admin/structure/entity-type/documents/appdelivery/add'] = array(
    'menu_name' => 'menu-shopmenu',
    'link_path' => 'admin/structure/entity-type/documents/appdelivery/add',
    'router_path' => 'admin/structure/entity-type/documents/appdelivery/add',
    'link_title' => 'Заявка на доставку',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-shopmenu:home
  $menu_links['menu-shopmenu:home'] = array(
    'menu_name' => 'menu-shopmenu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Сводка',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-shopmenu:сontinuing_сlaims_vip_shop
  $menu_links['menu-shopmenu:сontinuing_сlaims_vip_shop'] = array(
    'menu_name' => 'menu-shopmenu',
    'link_path' => 'сontinuing_сlaims_vip_shop',
    'router_path' => 'сontinuing_сlaims_vip_shop',
    'link_title' => 'Текущие заявки',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Заявка на доставку');
  t('Сводка');
  t('Текущие заявки');


  return $menu_links;
}
