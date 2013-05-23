<?php
/**
 * @file
 * saas_notifications_core.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function saas_notifications_core_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'notifications-page-fields';
  $ds_vd->label = 'Notifications: Page (Fields)';
  $export['notifications-page-fields'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'notifications-page_1-fields';
  $ds_vd->label = 'Notifications: Оповещение админ для ксд (Fields)';
  $export['notifications-page_1-fields'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'notifications-page_2-fields';
  $ds_vd->label = 'Notifications: Оповещения для магазина админ (Fields)';
  $export['notifications-page_2-fields'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'notifications-page_3-fields';
  $ds_vd->label = 'Notifications: Оповещения для магазина админ (Fields)';
  $export['notifications-page_3-fields'] = $ds_vd;

  return $export;
}
