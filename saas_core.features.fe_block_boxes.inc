<?php
/**
 * @file
 * saas_core.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function saas_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Alerts for delivery company block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'alerts_for_delivery_company_bloc';
  $fe_block_boxes->body = 'Здесь Администратор службы доставки может выставить индивидуальные оповещения и уведомления о заказах, изменениях статусов движения заявок и прочих событиях, которые будут приходить средствами e-mail или SMS
Внимание! Телефон для SMS уведомлений можно настроить в Профиле компании.
';

  $export['alerts_for_delivery_company_bloc'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Alerts for online store';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'alerts_for_online_store';
  $fe_block_boxes->body = 'Здесь Администратор магазина может выставить индивидуальные оповещения и уведомления о заказах, изменениях статусов движения заявок и прочих событиях, которые будут приходить средствами e-mail или SMS
Внимание! Телефон для SMS уведомлений можно настроить в Профиле компании.
';

  $export['alerts_for_online_store'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Teleport_logo_for_non_authorization_users';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'big_logo_teleport_block_non_auth';
  $fe_block_boxes->body = '<div align="center"><p><a href="www.saas.teleport-ds.com" target="_blank"><img alt="teleport_logo_SAAS_system_for_main_page" class="aligncenter size-full wp-image-1795" src="http://proalab.com/wp-content/uploads/2013/05/teleport_logo_SAAS_system_for_main_page.png" style="height:338px; width:390px" /></a></p></div>
';

  $export['big_logo_teleport_block_non_auth'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Сurrent delivery block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'current_delivery_block';
  $fe_block_boxes->body = 'Здесь пользователь службы доставки или интернет магазина видит новые заявки на доставку товаров, их движение, а также может просмотреть профиль заявки на доставку.
Также на этой странице служба доставки может взять заявку на доставку и в режиме on-line выставлять статусы движения этой заявки.
';

  $export['current_delivery_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Delivery order block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'delivery_order_block';
  $fe_block_boxes->body = 'Здесь магазин может создать заявку на доставку товаров для службы доставки, заполнив все необходимые параметры. Созданная заявка на доставку в течении 5 секунд станет доступна службам доставки и перейдет в выполнение.';

  $export['delivery_order_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Fines and fees block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'fines_and_fees_block';
  $fe_block_boxes->body = 'Здесь Администратор системы может выставить комиссии и штрафы за доставку товаров для компаний контрагентов (магазинов и служб доставки).
Внимание! Индивидуальные комиссии для контрагента выставляются в профиле компании.
';

  $export['fines_and_fees_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Info summary block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'info_summary_block';
  $fe_block_boxes->body = '<div><strong>TELEPORT – on-line сервис,</strong> который обеспечивает связь между интернет магазинами и курьерскими службами&nbsp;доставки.<br />
Благодаря нашему сервису<strong> доставка товаров из интернет магазина заказчику составляет не более 120 минут. &nbsp;</strong></div>

<div>Наш сервис поможет Вам автоматизировать процесс доставки заказов покупателям. Teleport&nbsp;открывает&nbsp;новые возможности для логистики, управления поставками и электронной коммерции путем объединения потока заказов со службами доставки.</div>

<div>Зарегистрировавшись в нашей системе, интернет магазины получают возможность пользоваться безграничными ресурсами множества &nbsp;служб доставки, а службы доставки, в свою очередь, получают доступ к самому ценному ресурсу - заказам.</div>
';

  $export['info_summary_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Settings Page Block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'settings_page_block';
  $fe_block_boxes->body = 'Настройки магазина и КСД';

  $export['settings_page_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Statistics block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'statistics_block';
  $fe_block_boxes->body = 'Здесь Вы можете просмотреть статистику прошедших заявок на доставку товаров, сформировать счета, акты выполненных работ или другие необходимые документы, а также посмотреть статусы движения заявок на доставку.';

  $export['statistics_block'] = $fe_block_boxes;

  return $export;
}
