<?php
/**
 * @file
 * saas_core.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function saas_core_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-alerts_for_delivery_company_bloc'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'alerts_for_delivery_company_bloc',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'notifications_ksd_admin
notifications_ksd',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -13,
      ),
    ),
    'title' => 'Оповещения и уведомления для служб доставки',
    'visibility' => 1,
  );

  $export['block-alerts_for_online_store'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'alerts_for_online_store',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'notifications_shop_admin
notifications_shop',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -12,
      ),
    ),
    'title' => 'Оповещения и уведомления для магазинов',
    'visibility' => 1,
  );

  $export['block-big_logo_teleport_block_non_auth'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'big_logo_teleport_block_non_auth',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-current_delivery_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'current_delivery_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'сontinuing_сlaims_free
сontinuing_сlaims_free_shop
сontinuing_сlaims_free_ksd',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -14,
      ),
    ),
    'title' => 'Текущие заявки на доставку товаров',
    'visibility' => 1,
  );

  $export['block-delivery_order_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'delivery_order_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'documents/appdelivery/add',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -15,
      ),
    ),
    'title' => 'Заявка на доставку товаров',
    'visibility' => 1,
  );

  $export['block-fines_and_fees_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'fines_and_fees_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'fines_and_commission',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -11,
      ),
    ),
    'title' => 'Штрафы и комиссии для Контрагентов',
    'visibility' => 1,
  );

  $export['block-info_summary_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'info_summary_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -9,
      ),
    ),
    'title' => 'Информация о сервисе',
    'visibility' => 1,
  );

  $export['block-settings_page_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'settings_page_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'company/',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -7,
      ),
    ),
    'title' => 'Настройки пользователя системы',
    'visibility' => 1,
  );

  $export['block-statistics_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'statistics_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'statistic
statistics_shop
statistics_ksd',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -8,
      ),
    ),
    'title' => 'Статистика текущих и прошедших заявок',
    'visibility' => 1,
  );

  $export['menu-menu-ksdmenu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-ksdmenu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'КСД' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'boron',
        'weight' => -7,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-menu-admin'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-menu-admin',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'Administrator' => 5,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'boron',
        'weight' => -6,
      ),
    ),
    'title' => 'Общие настройки',
    'visibility' => 1,
  );

  $export['menu-menu-shopmenu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-shopmenu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'Магазин' => 4,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'boron',
        'weight' => -5,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['multiblock-1'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'multiblock',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -9,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-formvigzd-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'formvigzd-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'documents/appdelivery/*/edit
documents/appdelivery/add',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'boron',
        'weight' => -5,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-user_block-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_block-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'boron' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'boron',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
