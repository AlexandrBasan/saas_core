<?php
/**
 * @file
 * saas_commis.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function saas_commis_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-admin:fines_and_commission
  $menu_links['menu-menu-admin:fines_and_commission'] = array(
    'menu_name' => 'menu-menu-admin',
    'link_path' => 'fines_and_commission',
    'router_path' => 'fines_and_commission',
    'link_title' => 'Штрафы и комиссии',
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
  t('Штрафы и комиссии');


  return $menu_links;
}
