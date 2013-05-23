<?php
/**
 * @file
 * saas_notifications_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function saas_notifications_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'notifications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_variablesm';
  $view->human_name = 'Оповещения';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Оповещения для КСД';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  /* Поле: Переменные: Заявка возвращена в систему (e-mail) */
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['id'] = 'field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['table'] = 'field_data_field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['field'] = 'field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка возвращена в систему (sms) */
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['id'] = 'field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['table'] = 'field_data_field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['field'] = 'field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка отменена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_zayotm']['id'] = 'field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['table'] = 'field_data_field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['field'] = 'field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_zayotm']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка отменена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_zayotm']['id'] = 'field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['table'] = 'field_data_field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['field'] = 'field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_zayotm']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка принята в исполнение (e-mail) */
  $handler->display->display_options['fields']['field_mail_prvisp']['id'] = 'field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['table'] = 'field_data_field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['field'] = 'field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_prvisp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка принята в исполнение (sms) */
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['id'] = 'field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['table'] = 'field_data_field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['field'] = 'field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Информация по заявке обновилась (e-mail) */
  $handler->display->display_options['fields']['field_mail_obnzay']['id'] = 'field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['table'] = 'field_data_field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['field'] = 'field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_obnzay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Информация по заявке обновилась (sms) */
  $handler->display->display_options['fields']['field_sms_obnzay']['id'] = 'field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['table'] = 'field_data_field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['field'] = 'field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_obnzay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Краткое уведомление о заявке (e-mail) */
  $handler->display->display_options['fields']['field_mail_info_zay']['id'] = 'field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['table'] = 'field_data_field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['field'] = 'field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_info_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Краткое уведомление о заявке (sms) */
  $handler->display->display_options['fields']['field_info_zay']['id'] = 'field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['table'] = 'field_data_field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['field'] = 'field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_info_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Поступила новая заявка в систему (e-mail) */
  $handler->display->display_options['fields']['field_mail_new_zay']['id'] = 'field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['table'] = 'field_data_field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['field'] = 'field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_new_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Поступила новая заявка в систему (sms) */
  $handler->display->display_options['fields']['field_sms_new_zay']['id'] = 'field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['table'] = 'field_data_field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['field'] = 'field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_new_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['id'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['table'] = 'field_data_field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['field'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['id'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['table'] = 'field_data_field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['field'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (e-mail) */
  $handler->display->display_options['fields']['field_mail_dosvsh']['id'] = 'field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['table'] = 'field_data_field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['field'] = 'field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_dosvsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (sms) */
  $handler->display->display_options['fields']['field_sms_dosvsh']['id'] = 'field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['table'] = 'field_data_field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['field'] = 'field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_dosvsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['id'] = 'field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['table'] = 'field_data_field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['field'] = 'field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (sms) */
  $handler->display->display_options['fields']['field__sms_opdost_shop']['id'] = 'field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['table'] = 'field_data_field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['field'] = 'field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['id'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['table'] = 'field_data_field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['field'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['id'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['table'] = 'field_data_field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['field'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplpolsh']['id'] = 'field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['table'] = 'field_data_field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['field'] = 'field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_oplpolsh']['id'] = 'field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['table'] = 'field_data_field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['field'] = 'field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена в магазин по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['id'] = 'field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['table'] = 'field_data_field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['field'] = 'field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена в магазин по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['id'] = 'field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['table'] = 'field_data_field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['field'] = 'field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена через сервис Teleport (e-mail) */
  $handler->display->display_options['fields']['field_mail_opltelsh']['id'] = 'field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['table'] = 'field_data_field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['field'] = 'field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_opltelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена через сервис Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_opltelsh']['id'] = 'field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['table'] = 'field_data_field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['field'] = 'field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opltelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена в магазин по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['id'] = 'field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['table'] = 'field_data_field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['field'] = 'field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена в магазин по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['id'] = 'field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['table'] = 'field_data_field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['field'] = 'field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена через сервис телепорт (e-mail) */
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['id'] = 'field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['table'] = 'field_data_field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['field'] = 'field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['id'] = 'field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['table'] = 'field_data_field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['field'] = 'field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['id'] = 'field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['table'] = 'field_data_field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['field'] = 'field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Оплата получена магазином по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplpolbash']['id'] = 'field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['table'] = 'field_data_field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['field'] = 'field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Оплата получена магазином по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplpolbash']['id'] = 'field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['table'] = 'field_data_field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['field'] = 'field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена через сервис телепорт (sms) */
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['id'] = 'field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['table'] = 'field_data_field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['field'] = 'field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Контекстный фильтр: Обработчик испорчен или отсутствует */
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['id'] = 'field_notifications_user_target_id';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['table'] = 'field_data_field_notifications_user';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['field'] = 'field_notifications_user_target_id';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_notifications_user_target_id']['summary_options']['items_per_page'] = '25';
  /* Критерий фильтра: Переменные: variablesm type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notifications_ksd' => 'notifications_ksd',
  );

  /* Display: Оповещение для настр ксд */
  $handler = $view->new_display('page', 'Оповещение для настр ксд', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Оповещения';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_notifications_client_company']['id'] = 'reverse_field_notifications_client_company';
  $handler->display->display_options['relationships']['reverse_field_notifications_client_company']['table'] = 'eck_variablesm';
  $handler->display->display_options['relationships']['reverse_field_notifications_client_company']['field'] = 'reverse_field_notifications_client_company';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'reverse_field_notifications_client_company';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Переменные: Заявка возвращена в систему (e-mail) */
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['id'] = 'field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['table'] = 'field_data_field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['field'] = 'field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка возвращена в систему (sms) */
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['id'] = 'field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['table'] = 'field_data_field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['field'] = 'field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка отменена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_zayotm']['id'] = 'field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['table'] = 'field_data_field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['field'] = 'field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_zayotm']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка отменена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_zayotm']['id'] = 'field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['table'] = 'field_data_field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['field'] = 'field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_zayotm']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка принята в исполнение (e-mail) */
  $handler->display->display_options['fields']['field_mail_prvisp']['id'] = 'field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['table'] = 'field_data_field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['field'] = 'field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_prvisp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка принята в исполнение (sms) */
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['id'] = 'field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['table'] = 'field_data_field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['field'] = 'field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Информация по заявке обновилась (e-mail) */
  $handler->display->display_options['fields']['field_mail_obnzay']['id'] = 'field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['table'] = 'field_data_field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['field'] = 'field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_obnzay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Информация по заявке обновилась (sms) */
  $handler->display->display_options['fields']['field_sms_obnzay']['id'] = 'field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['table'] = 'field_data_field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['field'] = 'field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_obnzay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Краткое уведомление о заявке (e-mail) */
  $handler->display->display_options['fields']['field_mail_info_zay']['id'] = 'field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['table'] = 'field_data_field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['field'] = 'field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_info_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Краткое уведомление о заявке (sms) */
  $handler->display->display_options['fields']['field_info_zay']['id'] = 'field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['table'] = 'field_data_field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['field'] = 'field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_info_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Поступила новая заявка в систему (e-mail) */
  $handler->display->display_options['fields']['field_mail_new_zay']['id'] = 'field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['table'] = 'field_data_field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['field'] = 'field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_new_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Поступила новая заявка в систему (sms) */
  $handler->display->display_options['fields']['field_sms_new_zay']['id'] = 'field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['table'] = 'field_data_field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['field'] = 'field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_new_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['id'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['table'] = 'field_data_field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['field'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['id'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['table'] = 'field_data_field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['field'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (e-mail) */
  $handler->display->display_options['fields']['field_mail_dosvsh']['id'] = 'field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['table'] = 'field_data_field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['field'] = 'field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_dosvsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (sms) */
  $handler->display->display_options['fields']['field_sms_dosvsh']['id'] = 'field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['table'] = 'field_data_field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['field'] = 'field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_dosvsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['id'] = 'field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['table'] = 'field_data_field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['field'] = 'field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (sms) */
  $handler->display->display_options['fields']['field__sms_opdost_shop']['id'] = 'field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['table'] = 'field_data_field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['field'] = 'field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['id'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['table'] = 'field_data_field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['field'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['id'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['table'] = 'field_data_field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['field'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplpolsh']['id'] = 'field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['table'] = 'field_data_field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['field'] = 'field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_oplpolsh']['id'] = 'field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['table'] = 'field_data_field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['field'] = 'field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена в магазин по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['id'] = 'field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['table'] = 'field_data_field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['field'] = 'field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена в магазин по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['id'] = 'field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['table'] = 'field_data_field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['field'] = 'field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена через сервис Teleport (e-mail) */
  $handler->display->display_options['fields']['field_mail_opltelsh']['id'] = 'field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['table'] = 'field_data_field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['field'] = 'field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_opltelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена через сервис Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_opltelsh']['id'] = 'field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['table'] = 'field_data_field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['field'] = 'field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opltelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена в магазин по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['id'] = 'field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['table'] = 'field_data_field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['field'] = 'field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена в магазин по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['id'] = 'field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['table'] = 'field_data_field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['field'] = 'field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена через сервис телепорт (e-mail) */
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['id'] = 'field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['table'] = 'field_data_field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['field'] = 'field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['id'] = 'field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['table'] = 'field_data_field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['field'] = 'field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['id'] = 'field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['table'] = 'field_data_field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['field'] = 'field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Оплата получена магазином по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplpolbash']['id'] = 'field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['table'] = 'field_data_field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['field'] = 'field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Оплата получена магазином по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplpolbash']['id'] = 'field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['table'] = 'field_data_field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['field'] = 'field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена через сервис телепорт (sms) */
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['id'] = 'field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['table'] = 'field_data_field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['field'] = 'field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Контекстный фильтр: Пользователь: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'relation_employee_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'notifications_ksd';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Оповещения';
  $handler->display->display_options['menu']['name'] = 'menu-ksdmenu';

  /* Display: Оповещение админ для ксд */
  $handler = $view->new_display('page', 'Оповещение админ для ксд', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Переменные: Заявка возвращена в систему (e-mail) */
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['id'] = 'field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['table'] = 'field_data_field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['field'] = 'field_mail_vozzayvsis';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_vozzayvsis']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка возвращена в систему (sms) */
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['id'] = 'field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['table'] = 'field_data_field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['field'] = 'field_sms_vozzayvsis';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_vozzayvsis']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка отменена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_zayotm']['id'] = 'field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['table'] = 'field_data_field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['field'] = 'field_mail_zayotm';
  $handler->display->display_options['fields']['field_mail_zayotm']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_zayotm']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка отменена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_zayotm']['id'] = 'field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['table'] = 'field_data_field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['field'] = 'field_sms_zayotm';
  $handler->display->display_options['fields']['field_sms_zayotm']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_zayotm']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка принята в исполнение (e-mail) */
  $handler->display->display_options['fields']['field_mail_prvisp']['id'] = 'field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['table'] = 'field_data_field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['field'] = 'field_mail_prvisp';
  $handler->display->display_options['fields']['field_mail_prvisp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_prvisp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заявка принята в исполнение (sms) */
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['id'] = 'field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['table'] = 'field_data_field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['field'] = 'field_sms_zay_prvisp';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_zay_prvisp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Информация по заявке обновилась (e-mail) */
  $handler->display->display_options['fields']['field_mail_obnzay']['id'] = 'field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['table'] = 'field_data_field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['field'] = 'field_mail_obnzay';
  $handler->display->display_options['fields']['field_mail_obnzay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_obnzay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Информация по заявке обновилась (sms) */
  $handler->display->display_options['fields']['field_sms_obnzay']['id'] = 'field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['table'] = 'field_data_field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['field'] = 'field_sms_obnzay';
  $handler->display->display_options['fields']['field_sms_obnzay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_obnzay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Краткое уведомление о заявке (e-mail) */
  $handler->display->display_options['fields']['field_mail_info_zay']['id'] = 'field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['table'] = 'field_data_field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['field'] = 'field_mail_info_zay';
  $handler->display->display_options['fields']['field_mail_info_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_info_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Краткое уведомление о заявке (sms) */
  $handler->display->display_options['fields']['field_info_zay']['id'] = 'field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['table'] = 'field_data_field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['field'] = 'field_info_zay';
  $handler->display->display_options['fields']['field_info_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_info_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Поступила новая заявка в систему (e-mail) */
  $handler->display->display_options['fields']['field_mail_new_zay']['id'] = 'field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['table'] = 'field_data_field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['field'] = 'field_mail_new_zay';
  $handler->display->display_options['fields']['field_mail_new_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_new_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Поступила новая заявка в систему (sms) */
  $handler->display->display_options['fields']['field_sms_new_zay']['id'] = 'field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['table'] = 'field_data_field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['field'] = 'field_sms_new_zay';
  $handler->display->display_options['fields']['field_sms_new_zay']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_new_zay']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['id'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['table'] = 'field_data_field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['field'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['id'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['table'] = 'field_data_field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['field'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (e-mail) */
  $handler->display->display_options['fields']['field_mail_dosvsh']['id'] = 'field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['table'] = 'field_data_field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['field'] = 'field_mail_dosvsh';
  $handler->display->display_options['fields']['field_mail_dosvsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_dosvsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (sms) */
  $handler->display->display_options['fields']['field_sms_dosvsh']['id'] = 'field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['table'] = 'field_data_field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['field'] = 'field_sms_dosvsh';
  $handler->display->display_options['fields']['field_sms_dosvsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_dosvsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['id'] = 'field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['table'] = 'field_data_field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['field'] = 'field__e_mail_opdost_shop';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (sms) */
  $handler->display->display_options['fields']['field__sms_opdost_shop']['id'] = 'field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['table'] = 'field_data_field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['field'] = 'field__sms_opdost_shop';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['id'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['table'] = 'field_data_field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['field'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['id'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['table'] = 'field_data_field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['field'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplpolsh']['id'] = 'field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['table'] = 'field_data_field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['field'] = 'field_mail_oplpolsh';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_oplpolsh']['id'] = 'field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['table'] = 'field_data_field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['field'] = 'field_sms_oplpolsh';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена в магазин по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['id'] = 'field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['table'] = 'field_data_field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['field'] = 'field_mail_oplbeznsh';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplbeznsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена в магазин по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['id'] = 'field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['table'] = 'field_data_field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['field'] = 'field_sms_oplbeznsh';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplbeznsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена через сервис Teleport (e-mail) */
  $handler->display->display_options['fields']['field_mail_opltelsh']['id'] = 'field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['table'] = 'field_data_field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['field'] = 'field_mail_opltelsh';
  $handler->display->display_options['fields']['field_mail_opltelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_opltelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет отправлена через сервис Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_opltelsh']['id'] = 'field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['table'] = 'field_data_field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['field'] = 'field_sms_opltelsh';
  $handler->display->display_options['fields']['field_sms_opltelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opltelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена в магазин по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['id'] = 'field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['table'] = 'field_data_field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['field'] = 'field_mail_oplotpbezsh';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplotpbezsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена в магазин по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['id'] = 'field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['table'] = 'field_data_field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['field'] = 'field_sms_oplotpbezsh';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplotpbezsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена через сервис телепорт (e-mail) */
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['id'] = 'field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['table'] = 'field_data_field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['field'] = 'field_mail_opotrtelsh';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_opotrtelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена магазином (e-mail) */
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['id'] = 'field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['table'] = 'field_data_field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['field'] = 'field_mail_neoplpolsh';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_neoplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена магазином (sms) */
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['id'] = 'field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['table'] = 'field_data_field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['field'] = 'field_sms_neoplpolsh';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_neoplpolsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Оплата получена магазином по безналу (e-mail) */
  $handler->display->display_options['fields']['field_mail_oplpolbash']['id'] = 'field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['table'] = 'field_data_field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['field'] = 'field_mail_oplpolbash';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['type'] = 'editable';
  $handler->display->display_options['fields']['field_mail_oplpolbash']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Оплата получена магазином по безналу (sms) */
  $handler->display->display_options['fields']['field_sms_oplpolbash']['id'] = 'field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['table'] = 'field_data_field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['field'] = 'field_sms_oplpolbash';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_oplpolbash']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отправлена через сервис телепорт (sms) */
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['id'] = 'field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['table'] = 'field_data_field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['field'] = 'field_sms_opotrtelsh';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opotrtelsh']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Переменные: variablesm type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notifications_ksd' => 'notifications_ksd',
  );
  /* Критерий фильтра: Переменные: Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '2';
  $handler->display->display_options['path'] = 'notifications_ksd_admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Оповещение для КСД';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-menu-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Оповещения для магазина админ */
  $handler = $view->new_display('page', 'Оповещения для магазина админ', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Оповещения для магазина';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Переменные: Заказ возвращен службой доставки в систему (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['id'] = 'field__e_mail_returnsdshop';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['table'] = 'field_data_field__e_mail_returnsdshop';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['field'] = 'field__e_mail_returnsdshop';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ возвращен службой доставки в систему (sms) */
  $handler->display->display_options['fields']['field__sms_returnsdshop']['id'] = 'field__sms_returnsdshop';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['table'] = 'field_data_field__sms_returnsdshop';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['field'] = 'field__sms_returnsdshop';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ забран на складе (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['id'] = 'field__e_mail_tovzabrskladshop';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['table'] = 'field_data_field__e_mail_tovzabrskladshop';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['field'] = 'field__e_mail_tovzabrskladshop';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ забран на складе (sms) */
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['id'] = 'field_sms_tovzabrskladshop';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['table'] = 'field_data_field_sms_tovzabrskladshop';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['field'] = 'field_sms_tovzabrskladshop';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в систему (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_postshop']['id'] = 'field__e_mail_postshop';
  $handler->display->display_options['fields']['field__e_mail_postshop']['table'] = 'field_data_field__e_mail_postshop';
  $handler->display->display_options['fields']['field__e_mail_postshop']['field'] = 'field__e_mail_postshop';
  $handler->display->display_options['fields']['field__e_mail_postshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_postshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в систему (sms) */
  $handler->display->display_options['fields']['field__sms_post_shop']['id'] = 'field__sms_post_shop';
  $handler->display->display_options['fields']['field__sms_post_shop']['table'] = 'field_data_field__sms_post_shop';
  $handler->display->display_options['fields']['field__sms_post_shop']['field'] = 'field__sms_post_shop';
  $handler->display->display_options['fields']['field__sms_post_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_post_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в службу доставки (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['id'] = 'field__e_mail_postsdshop';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['table'] = 'field_data_field__e_mail_postsdshop';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['field'] = 'field__e_mail_postsdshop';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в службу доставки (sms) */
  $handler->display->display_options['fields']['field__sms_postsdshop']['id'] = 'field__sms_postsdshop';
  $handler->display->display_options['fields']['field__sms_postsdshop']['table'] = 'field_data_field__sms_postsdshop';
  $handler->display->display_options['fields']['field__sms_postsdshop']['field'] = 'field__sms_postsdshop';
  $handler->display->display_options['fields']['field__sms_postsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_postsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Ошибка поступления заказа в систему (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['id'] = 'field__e_mail_eror_zdshop';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['table'] = 'field_data_field__e_mail_eror_zdshop';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['field'] = 'field__e_mail_eror_zdshop';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Ошибка поступления заказа в систему (sms) */
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['id'] = 'field__sms_eror_zdshop';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['table'] = 'field_data_field__sms_eror_zdshop';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['field'] = 'field__sms_eror_zdshop';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['id'] = 'field__e_mail_dostper_shop';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['table'] = 'field_data_field__e_mail_dostper_shop';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['field'] = 'field__e_mail_dostper_shop';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_dostper_shop']['id'] = 'field__sms_dostper_shop';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['table'] = 'field_data_field__sms_dostper_shop';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['field'] = 'field__sms_dostper_shop';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлен  (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['id'] = 'field__e_mail_dostn_shop';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['table'] = 'field_data_field__e_mail_dostn_shop';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['field'] = 'field__e_mail_dostn_shop';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлен (sms) */
  $handler->display->display_options['fields']['field__sms_dostn_shop']['id'] = 'field__sms_dostn_shop';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['table'] = 'field_data_field__sms_dostn_shop';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['field'] = 'field__sms_dostn_shop';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['id'] = 'field__e_mail_dost_shop';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['table'] = 'field_data_field__e_mail_dost_shop';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['field'] = 'field__e_mail_dost_shop';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (sms) */
  $handler->display->display_options['fields']['field__sms_dost_shop']['id'] = 'field__sms_dost_shop';
  $handler->display->display_options['fields']['field__sms_dost_shop']['table'] = 'field_data_field__sms_dost_shop';
  $handler->display->display_options['fields']['field__sms_dost_shop']['field'] = 'field__sms_dost_shop';
  $handler->display->display_options['fields']['field__sms_dost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_dost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не принят заказчиком - возврат в магазин (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['id'] = 'field__e_mail_neprz_vshop';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['table'] = 'field_data_field__e_mail_neprz_vshop';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['field'] = 'field__e_mail_neprz_vshop';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не принят заказчиком - возврат в магазин (sms) */
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['id'] = 'field__sms_neprz_vshop';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['table'] = 'field_data_field__sms_neprz_vshop';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['field'] = 'field__sms_neprz_vshop';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - возврат в магазин (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['id'] = 'field__e_mail_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['table'] = 'field_data_field__e_mail_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['field'] = 'field__e_mail_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - возврат в магазин (sms) */
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['id'] = 'field__sms_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['table'] = 'field_data_field__sms_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['field'] = 'field__sms_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - требуется уточнение (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['id'] = 'field__e_mail_nevr_tryt';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['table'] = 'field_data_field__e_mail_nevr_tryt';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['field'] = 'field__e_mail_nevr_tryt';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - требуется уточнение (sms) */
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['id'] = 'field__sms_nevr_tryt';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['table'] = 'field_data_field__sms_nevr_tryt';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['field'] = 'field__sms_nevr_tryt';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отменен магазином (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['id'] = 'field__e_mail_abort_shop';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['table'] = 'field_data_field__e_mail_abort_shop';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['field'] = 'field__e_mail_abort_shop';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отменен магазином (sms) */
  $handler->display->display_options['fields']['field__sms_abort_shop']['id'] = 'field__sms_abort_shop';
  $handler->display->display_options['fields']['field__sms_abort_shop']['table'] = 'field_data_field__sms_abort_shop';
  $handler->display->display_options['fields']['field__sms_abort_shop']['field'] = 'field__sms_abort_shop';
  $handler->display->display_options['fields']['field__sms_abort_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_abort_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Служба доставки не смогла забрать товар на складе (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['id'] = 'field__e_mail_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['table'] = 'field_data_field__e_mail_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['field'] = 'field__e_mail_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Служба доставки не смогла забрать товар на складе (sms) */
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['id'] = 'field__sms_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['table'] = 'field_data_field__sms_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['field'] = 'field__sms_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена от заказчика (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['id'] = 'field__e_mail_opnepol_shop';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['table'] = 'field_data_field__e_mail_opnepol_shop';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['field'] = 'field__e_mail_opnepol_shop';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена от заказчика (sms) */
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['id'] = 'field__sms_opnepol_shop';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['table'] = 'field_data_field__sms_opnepol_shop';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['field'] = 'field__sms_opnepol_shop';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неверный адрес доставки - возврат в магазин (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_nevadr']['id'] = 'field__e_mail_nevadr';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['table'] = 'field_data_field__e_mail_nevadr';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['field'] = 'field__e_mail_nevadr';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неверный адрес доставки - возврат в магазин (sms) */
  $handler->display->display_options['fields']['field__sms_nevadr']['id'] = 'field__sms_nevadr';
  $handler->display->display_options['fields']['field__sms_nevadr']['table'] = 'field_data_field__sms_nevadr';
  $handler->display->display_options['fields']['field__sms_nevadr']['field'] = 'field__sms_nevadr';
  $handler->display->display_options['fields']['field__sms_nevadr']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_nevadr']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена курьером от заказчика (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['id'] = 'field__e_mail_polkurzak_shop';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['table'] = 'field_data_field__e_mail_polkurzak_shop';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['field'] = 'field__e_mail_polkurzak_shop';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена курьером от заказчика (sms) */
  $handler->display->display_options['fields']['field_polkurzak_shop']['id'] = 'field_polkurzak_shop';
  $handler->display->display_options['fields']['field_polkurzak_shop']['table'] = 'field_data_field_polkurzak_shop';
  $handler->display->display_options['fields']['field_polkurzak_shop']['field'] = 'field_polkurzak_shop';
  $handler->display->display_options['fields']['field_polkurzak_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_polkurzak_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Требуется уточнение или дополнительная информация (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['id'] = 'field__e_mail_tryt_shop';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['table'] = 'field_data_field__e_mail_tryt_shop';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['field'] = 'field__e_mail_tryt_shop';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Требуется уточнение или дополнительная информация (sms) */
  $handler->display->display_options['fields']['field_sms_tryt_shop']['id'] = 'field_sms_tryt_shop';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['table'] = 'field_data_field_sms_tryt_shop';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['field'] = 'field_sms_tryt_shop';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['id'] = 'field__e_mail_pol_mag';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['table'] = 'field_data_field__e_mail_pol_mag';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['field'] = 'field__e_mail_pol_mag';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (sms) */
  $handler->display->display_options['fields']['field__sms_pol_mag']['id'] = 'field__sms_pol_mag';
  $handler->display->display_options['fields']['field__sms_pol_mag']['table'] = 'field_data_field__sms_pol_mag';
  $handler->display->display_options['fields']['field__sms_pol_mag']['field'] = 'field__sms_pol_mag';
  $handler->display->display_options['fields']['field__sms_pol_mag']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_pol_mag']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от КСД по Безналу (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['id'] = 'field__e_mail_budopbez_shop';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['table'] = 'field_data_field__e_mail_budopbez_shop';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['field'] = 'field__e_mail_budopbez_shop';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от КСД по Безналу (sms) */
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['id'] = 'field__sms_budopbez_shop';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['table'] = 'field_data_field__sms_budopbez_shop';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['field'] = 'field__sms_budopbez_shop';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от сервиса Teleport (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['id'] = 'field_e_mail_budoptel_shop';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['table'] = 'field_data_field_e_mail_budoptel_shop';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['field'] = 'field_e_mail_budoptel_shop';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от сервиса Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['id'] = 'field_sms_budoptel_shop';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['table'] = 'field_data_field_sms_budoptel_shop';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['field'] = 'field_sms_budoptel_shop';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['id'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['table'] = 'field_data_field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['field'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['id'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['table'] = 'field_data_field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['field'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvshop']['id'] = 'field__sms_opdostvshop';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['table'] = 'field_data_field__sms_opdostvshop';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['field'] = 'field__sms_opdostvshop';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['id'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['table'] = 'field_data_field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['field'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['id'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['table'] = 'field_data_field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['field'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от КСД по Безналу (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['id'] = 'field_e_mail_opbez_shop';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['table'] = 'field_data_field_e_mail_opbez_shop';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['field'] = 'field_e_mail_opbez_shop';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от КСД по Безналу (sms) */
  $handler->display->display_options['fields']['field_sms_opbez_shop']['id'] = 'field_sms_opbez_shop';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['table'] = 'field_data_field_sms_opbez_shop';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['field'] = 'field_sms_opbez_shop';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от сервиса Teleport (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['id'] = 'field_e_mail_optel_shop';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['table'] = 'field_data_field_e_mail_optel_shop';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['field'] = 'field_e_mail_optel_shop';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от сервиса Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_optel_shop']['id'] = 'field_sms_optel_shop';
  $handler->display->display_options['fields']['field_sms_optel_shop']['table'] = 'field_data_field_sms_optel_shop';
  $handler->display->display_options['fields']['field_sms_optel_shop']['field'] = 'field_sms_optel_shop';
  $handler->display->display_options['fields']['field_sms_optel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_optel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['id'] = 'field_e_mail_opdostvshop';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['table'] = 'field_data_field_e_mail_opdostvshop';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['field'] = 'field_e_mail_opdostvshop';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Переменные: variablesm type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notifications_shop' => 'notifications_shop',
  );
  /* Критерий фильтра: Переменные: Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '3';
  $handler->display->display_options['path'] = 'notifications_shop_admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Оповещения для магазина';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-menu-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Оповещения для магазина */
  $handler = $view->new_display('page', 'Оповещения для магазина', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Оповещения';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_notifications_client_company']['id'] = 'reverse_field_notifications_client_company';
  $handler->display->display_options['relationships']['reverse_field_notifications_client_company']['table'] = 'eck_variablesm';
  $handler->display->display_options['relationships']['reverse_field_notifications_client_company']['field'] = 'reverse_field_notifications_client_company';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'reverse_field_notifications_client_company';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 0;
  /* Связь: Пользователь: Компания */
  $handler->display->display_options['relationships']['eck_company']['id'] = 'eck_company';
  $handler->display->display_options['relationships']['eck_company']['table'] = 'users';
  $handler->display->display_options['relationships']['eck_company']['field'] = 'eck_company';
  $handler->display->display_options['relationships']['eck_company']['relationship'] = 'relation_employee_user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Переменные: Заказ возвращен службой доставки в систему (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['id'] = 'field__e_mail_returnsdshop';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['table'] = 'field_data_field__e_mail_returnsdshop';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['field'] = 'field__e_mail_returnsdshop';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_returnsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ возвращен службой доставки в систему (sms) */
  $handler->display->display_options['fields']['field__sms_returnsdshop']['id'] = 'field__sms_returnsdshop';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['table'] = 'field_data_field__sms_returnsdshop';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['field'] = 'field__sms_returnsdshop';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_returnsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ забран на складе (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['id'] = 'field__e_mail_tovzabrskladshop';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['table'] = 'field_data_field__e_mail_tovzabrskladshop';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['field'] = 'field__e_mail_tovzabrskladshop';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_tovzabrskladshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ забран на складе (sms) */
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['id'] = 'field_sms_tovzabrskladshop';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['table'] = 'field_data_field_sms_tovzabrskladshop';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['field'] = 'field_sms_tovzabrskladshop';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_tovzabrskladshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в систему (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_postshop']['id'] = 'field__e_mail_postshop';
  $handler->display->display_options['fields']['field__e_mail_postshop']['table'] = 'field_data_field__e_mail_postshop';
  $handler->display->display_options['fields']['field__e_mail_postshop']['field'] = 'field__e_mail_postshop';
  $handler->display->display_options['fields']['field__e_mail_postshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_postshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в систему (sms) */
  $handler->display->display_options['fields']['field__sms_post_shop']['id'] = 'field__sms_post_shop';
  $handler->display->display_options['fields']['field__sms_post_shop']['table'] = 'field_data_field__sms_post_shop';
  $handler->display->display_options['fields']['field__sms_post_shop']['field'] = 'field__sms_post_shop';
  $handler->display->display_options['fields']['field__sms_post_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_post_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в службу доставки (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['id'] = 'field__e_mail_postsdshop';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['table'] = 'field_data_field__e_mail_postsdshop';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['field'] = 'field__e_mail_postsdshop';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_postsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Заказ поступил в службу доставки (sms) */
  $handler->display->display_options['fields']['field__sms_postsdshop']['id'] = 'field__sms_postsdshop';
  $handler->display->display_options['fields']['field__sms_postsdshop']['table'] = 'field_data_field__sms_postsdshop';
  $handler->display->display_options['fields']['field__sms_postsdshop']['field'] = 'field__sms_postsdshop';
  $handler->display->display_options['fields']['field__sms_postsdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_postsdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Ошибка поступления заказа в систему (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['id'] = 'field__e_mail_eror_zdshop';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['table'] = 'field_data_field__e_mail_eror_zdshop';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['field'] = 'field__e_mail_eror_zdshop';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_eror_zdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Ошибка поступления заказа в систему (sms) */
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['id'] = 'field__sms_eror_zdshop';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['table'] = 'field_data_field__sms_eror_zdshop';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['field'] = 'field__sms_eror_zdshop';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_eror_zdshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['id'] = 'field__e_mail_dostper_shop';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['table'] = 'field_data_field__e_mail_dostper_shop';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['field'] = 'field__e_mail_dostper_shop';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_dostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_dostper_shop']['id'] = 'field__sms_dostper_shop';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['table'] = 'field_data_field__sms_dostper_shop';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['field'] = 'field__sms_dostper_shop';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_dostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлен  (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['id'] = 'field__e_mail_dostn_shop';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['table'] = 'field_data_field__e_mail_dostn_shop';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['field'] = 'field__e_mail_dostn_shop';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_dostn_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлен (sms) */
  $handler->display->display_options['fields']['field__sms_dostn_shop']['id'] = 'field__sms_dostn_shop';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['table'] = 'field_data_field__sms_dostn_shop';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['field'] = 'field__sms_dostn_shop';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_dostn_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['id'] = 'field__e_mail_dost_shop';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['table'] = 'field_data_field__e_mail_dost_shop';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['field'] = 'field__e_mail_dost_shop';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_dost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставляется (sms) */
  $handler->display->display_options['fields']['field__sms_dost_shop']['id'] = 'field__sms_dost_shop';
  $handler->display->display_options['fields']['field__sms_dost_shop']['table'] = 'field_data_field__sms_dost_shop';
  $handler->display->display_options['fields']['field__sms_dost_shop']['field'] = 'field__sms_dost_shop';
  $handler->display->display_options['fields']['field__sms_dost_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_dost_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не принят заказчиком - возврат в магазин (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['id'] = 'field__e_mail_neprz_vshop';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['table'] = 'field_data_field__e_mail_neprz_vshop';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['field'] = 'field__e_mail_neprz_vshop';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_neprz_vshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не принят заказчиком - возврат в магазин (sms) */
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['id'] = 'field__sms_neprz_vshop';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['table'] = 'field_data_field__sms_neprz_vshop';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['field'] = 'field__sms_neprz_vshop';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_neprz_vshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - возврат в магазин (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['id'] = 'field__e_mail_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['table'] = 'field_data_field__e_mail_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['field'] = 'field__e_mail_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_nevr_vozvrshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - возврат в магазин (sms) */
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['id'] = 'field__sms_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['table'] = 'field_data_field__sms_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['field'] = 'field__sms_nevr_vozvrshop';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_nevr_vozvrshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - требуется уточнение (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['id'] = 'field__e_mail_nevr_tryt';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['table'] = 'field_data_field__e_mail_nevr_tryt';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['field'] = 'field__e_mail_nevr_tryt';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_nevr_tryt']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не удачная попытка вручения - требуется уточнение (sms) */
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['id'] = 'field__sms_nevr_tryt';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['table'] = 'field_data_field__sms_nevr_tryt';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['field'] = 'field__sms_nevr_tryt';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_nevr_tryt']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отменен магазином (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['id'] = 'field__e_mail_abort_shop';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['table'] = 'field_data_field__e_mail_abort_shop';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['field'] = 'field__e_mail_abort_shop';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_abort_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Отменен магазином (sms) */
  $handler->display->display_options['fields']['field__sms_abort_shop']['id'] = 'field__sms_abort_shop';
  $handler->display->display_options['fields']['field__sms_abort_shop']['table'] = 'field_data_field__sms_abort_shop';
  $handler->display->display_options['fields']['field__sms_abort_shop']['field'] = 'field__sms_abort_shop';
  $handler->display->display_options['fields']['field__sms_abort_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_abort_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Служба доставки не смогла забрать товар на складе (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['id'] = 'field__e_mail_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['table'] = 'field_data_field__e_mail_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['field'] = 'field__e_mail_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_zdnzsklad_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Служба доставки не смогла забрать товар на складе (sms) */
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['id'] = 'field__sms_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['table'] = 'field_data_field__sms_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['field'] = 'field__sms_zdnzsklad_shop';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_zdnzsklad_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена от заказчика (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['id'] = 'field__e_mail_opnepol_shop';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['table'] = 'field_data_field__e_mail_opnepol_shop';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['field'] = 'field__e_mail_opnepol_shop';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opnepol_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Не получена от заказчика (sms) */
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['id'] = 'field__sms_opnepol_shop';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['table'] = 'field_data_field__sms_opnepol_shop';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['field'] = 'field__sms_opnepol_shop';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opnepol_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неверный адрес доставки - возврат в магазин (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_nevadr']['id'] = 'field__e_mail_nevadr';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['table'] = 'field_data_field__e_mail_nevadr';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['field'] = 'field__e_mail_nevadr';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_nevadr']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неверный адрес доставки - возврат в магазин (sms) */
  $handler->display->display_options['fields']['field__sms_nevadr']['id'] = 'field__sms_nevadr';
  $handler->display->display_options['fields']['field__sms_nevadr']['table'] = 'field_data_field__sms_nevadr';
  $handler->display->display_options['fields']['field__sms_nevadr']['field'] = 'field__sms_nevadr';
  $handler->display->display_options['fields']['field__sms_nevadr']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_nevadr']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена курьером от заказчика (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['id'] = 'field__e_mail_polkurzak_shop';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['table'] = 'field_data_field__e_mail_polkurzak_shop';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['field'] = 'field__e_mail_polkurzak_shop';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_polkurzak_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена курьером от заказчика (sms) */
  $handler->display->display_options['fields']['field_polkurzak_shop']['id'] = 'field_polkurzak_shop';
  $handler->display->display_options['fields']['field_polkurzak_shop']['table'] = 'field_data_field_polkurzak_shop';
  $handler->display->display_options['fields']['field_polkurzak_shop']['field'] = 'field_polkurzak_shop';
  $handler->display->display_options['fields']['field_polkurzak_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_polkurzak_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Требуется уточнение или дополнительная информация (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['id'] = 'field__e_mail_tryt_shop';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['table'] = 'field_data_field__e_mail_tryt_shop';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['field'] = 'field__e_mail_tryt_shop';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_tryt_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Требуется уточнение или дополнительная информация (sms) */
  $handler->display->display_options['fields']['field_sms_tryt_shop']['id'] = 'field_sms_tryt_shop';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['table'] = 'field_data_field_sms_tryt_shop';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['field'] = 'field_sms_tryt_shop';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_tryt_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['id'] = 'field__e_mail_pol_mag';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['table'] = 'field_data_field__e_mail_pol_mag';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['field'] = 'field__e_mail_pol_mag';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_pol_mag']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Уже получена магазином (sms) */
  $handler->display->display_options['fields']['field__sms_pol_mag']['id'] = 'field__sms_pol_mag';
  $handler->display->display_options['fields']['field__sms_pol_mag']['table'] = 'field_data_field__sms_pol_mag';
  $handler->display->display_options['fields']['field__sms_pol_mag']['field'] = 'field__sms_pol_mag';
  $handler->display->display_options['fields']['field__sms_pol_mag']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_pol_mag']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от КСД по Безналу (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['id'] = 'field__e_mail_budopbez_shop';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['table'] = 'field_data_field__e_mail_budopbez_shop';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['field'] = 'field__e_mail_budopbez_shop';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_budopbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от КСД по Безналу (sms) */
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['id'] = 'field__sms_budopbez_shop';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['table'] = 'field_data_field__sms_budopbez_shop';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['field'] = 'field__sms_budopbez_shop';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_budopbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от сервиса Teleport (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['id'] = 'field_e_mail_budoptel_shop';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['table'] = 'field_data_field_e_mail_budoptel_shop';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['field'] = 'field_e_mail_budoptel_shop';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_budoptel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Будет получена от сервиса Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['id'] = 'field_sms_budoptel_shop';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['table'] = 'field_data_field_sms_budoptel_shop';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['field'] = 'field_sms_budoptel_shop';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_budoptel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['id'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['table'] = 'field_data_field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['field'] = 'field__e_mail_opdostper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставка оплаты перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['id'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['table'] = 'field_data_field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['field'] = 'field__sms_opdostper_shop';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvshop']['id'] = 'field__sms_opdostvshop';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['table'] = 'field_data_field__sms_opdostvshop';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['field'] = 'field__sms_opdostvshop';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (e-mail) */
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['id'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['table'] = 'field_data_field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['field'] = 'field__e_mail_opdostvrper_shop';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__e_mail_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Неудачная попытка вручения - доставка перенесена (sms) */
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['id'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['table'] = 'field_data_field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['field'] = 'field__sms_opdostvrper_shop';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field__sms_opdostvrper_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от КСД по Безналу (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['id'] = 'field_e_mail_opbez_shop';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['table'] = 'field_data_field_e_mail_opbez_shop';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['field'] = 'field_e_mail_opbez_shop';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_opbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от КСД по Безналу (sms) */
  $handler->display->display_options['fields']['field_sms_opbez_shop']['id'] = 'field_sms_opbez_shop';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['table'] = 'field_data_field_sms_opbez_shop';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['field'] = 'field_sms_opbez_shop';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_opbez_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от сервиса Teleport (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['id'] = 'field_e_mail_optel_shop';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['table'] = 'field_data_field_e_mail_optel_shop';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['field'] = 'field_e_mail_optel_shop';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_optel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Получена от сервиса Teleport (sms) */
  $handler->display->display_options['fields']['field_sms_optel_shop']['id'] = 'field_sms_optel_shop';
  $handler->display->display_options['fields']['field_sms_optel_shop']['table'] = 'field_data_field_sms_optel_shop';
  $handler->display->display_options['fields']['field_sms_optel_shop']['field'] = 'field_sms_optel_shop';
  $handler->display->display_options['fields']['field_sms_optel_shop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sms_optel_shop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Переменные: Доставлена в интернет магазин (e-mail) */
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['id'] = 'field_e_mail_opdostvshop';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['table'] = 'field_data_field_e_mail_opdostvshop';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['field'] = 'field_e_mail_opdostvshop';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['type'] = 'editable';
  $handler->display->display_options['fields']['field_e_mail_opdostvshop']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Статус оплаты';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Статус доставки';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Контекстный фильтр: Пользователь: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'relation_employee_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Переменные: variablesm type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notifications_shop' => 'notifications_shop',
  );
  $handler->display->display_options['path'] = 'notifications_shop';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Оповещения';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-shopmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['notifications'] = array(
    t('Master'),
    t('Оповещения для КСД'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Заявка возвращена в систему (e-mail)'),
    t('Заявка возвращена в систему (sms)'),
    t('Заявка отменена магазином (e-mail)'),
    t('Заявка отменена магазином (sms)'),
    t('Заявка принята в исполнение (e-mail)'),
    t('Заявка принята в исполнение (sms)'),
    t('Информация по заявке обновилась (e-mail)'),
    t('Информация по заявке обновилась (sms)'),
    t('Краткое уведомление о заявке (e-mail)'),
    t('Краткое уведомление о заявке (sms)'),
    t('Поступила новая заявка в систему (e-mail)'),
    t('Поступила новая заявка в систему (sms)'),
    t('Доставка оплаты перенесена (e-mail)'),
    t('Доставка оплаты перенесена (sms)'),
    t('Доставлена в интернет магазин (e-mail)'),
    t('Доставлена в интернет магазин (sms)'),
    t('Доставляется (e-mail)'),
    t('Доставляется (sms)'),
    t('Неудачная попытка вручения - доставка перенесена (e-mail)'),
    t('Неудачная попытка вручения - доставка перенесена (sms)'),
    t('Уже получена магазином (e-mail)'),
    t('Уже получена магазином (sms)'),
    t('Будет отправлена в магазин по безналу (e-mail)'),
    t('Будет отправлена в магазин по безналу (sms)'),
    t('Будет отправлена через сервис Teleport (e-mail)'),
    t('Будет отправлена через сервис Teleport (sms)'),
    t('Отправлена в магазин по безналу (e-mail)'),
    t('Отправлена в магазин по безналу (sms)'),
    t('Отправлена через сервис телепорт (e-mail)'),
    t('Не получена магазином (e-mail)'),
    t('Не получена магазином (sms)'),
    t('Оплата получена магазином по безналу (e-mail)'),
    t('Оплата получена магазином по безналу (sms)'),
    t('Отправлена через сервис телепорт (sms)'),
    t('Все'),
    t('Оповещение для настр ксд'),
    t('Оповещения'),
    t('Компания referencing Переменные from field_notifications_client'),
    t('Сотрудник'),
    t('Статус доставки'),
    t('Статус оплаты'),
    t('Оповещение админ для ксд'),
    t('Оповещения для магазина админ'),
    t('Оповещения для магазина'),
    t('Заказ возвращен службой доставки в систему (e-mail)'),
    t('Заказ возвращен службой доставки в систему (sms)'),
    t('Заказ забран на складе (e-mail)'),
    t('Заказ забран на складе (sms)'),
    t('Заказ поступил в систему (e-mail)'),
    t('Заказ поступил в систему (sms)'),
    t('Заказ поступил в службу доставки (e-mail)'),
    t('Заказ поступил в службу доставки (sms)'),
    t('Ошибка поступления заказа в систему (e-mail)'),
    t('Ошибка поступления заказа в систему (sms)'),
    t('Доставка перенесена (e-mail)'),
    t('Доставка перенесена (sms)'),
    t('Доставлен  (e-mail)'),
    t('Доставлен (sms)'),
    t('Не принят заказчиком - возврат в магазин (e-mail)'),
    t('Не принят заказчиком - возврат в магазин (sms)'),
    t('Не удачная попытка вручения - возврат в магазин (e-mail)'),
    t('Не удачная попытка вручения - возврат в магазин (sms)'),
    t('Не удачная попытка вручения - требуется уточнение (e-mail)'),
    t('Не удачная попытка вручения - требуется уточнение (sms)'),
    t('Отменен магазином (e-mail)'),
    t('Отменен магазином (sms)'),
    t('Служба доставки не смогла забрать товар на складе (e-mail)'),
    t('Служба доставки не смогла забрать товар на складе (sms)'),
    t('Не получена от заказчика (e-mail)'),
    t('Не получена от заказчика (sms)'),
    t('Неверный адрес доставки - возврат в магазин (e-mail)'),
    t('Неверный адрес доставки - возврат в магазин (sms)'),
    t('Получена курьером от заказчика (e-mail)'),
    t('Получена курьером от заказчика (sms)'),
    t('Требуется уточнение или дополнительная информация (e-mail)'),
    t('Требуется уточнение или дополнительная информация (sms)'),
    t('Будет получена от КСД по Безналу (e-mail)'),
    t('Будет получена от КСД по Безналу (sms)'),
    t('Будет получена от сервиса Teleport (e-mail)'),
    t('Будет получена от сервиса Teleport (sms)'),
    t('Получена от КСД по Безналу (e-mail)'),
    t('Получена от КСД по Безналу (sms)'),
    t('Получена от сервиса Teleport (e-mail)'),
    t('Получена от сервиса Teleport (sms)'),
    t('Компания'),
  );
  $export['notifications'] = $view;

  $view = new view();
  $view->name = 'statistics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_documents';
  $view->human_name = 'Статистика';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Статистика';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100, 120';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'views_supertable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_id_zd' => 'field_id_zd',
    'created' => 'created',
    'field_fio_pol_pos_zd' => 'field_fio_pol_pos_zd',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'field_status_oplati' => 'field_status_oplati',
    'field_status_dost' => 'field_status_dost',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'field_serv_ksd' => 'field_serv_ksd',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_id_zd' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fio_pol_pos_zd' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_serv_ksd' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Шапка: Глобальный: Текстовое поле */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><span>Выгрузить в:</span><a href=\'#\'>PDF</a><a href=\'#\'>Excel</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_products_zd_target_id']['id'] = 'field_products_zd_target_id';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['table'] = 'field_data_field_products_zd';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['field'] = 'field_products_zd_target_id';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_id_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Дата заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Ф.И.О. получателя */
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['id'] = 'field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['table'] = 'field_data_field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['field'] = 'field_fio_pol_pos_zd';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги КСД */
  $handler->display->display_options['fields']['field_serv_ksd']['id'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['table'] = 'field_data_field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['field'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Критерий сортировки: Документы: Id */
  $handler->display->display_options['sorts']['id']['id'] = 'id';
  $handler->display->display_options['sorts']['id']['table'] = 'eck_documents';
  $handler->display->display_options['sorts']['id']['field'] = 'id';
  $handler->display->display_options['sorts']['id']['order'] = 'DESC';
  /* Контекстный фильтр: Документы: Author */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_dost_value']['expose']['operator_id'] = 'field_status_dost_value_op';
  $handler->display->display_options['filters']['field_status_dost_value']['expose']['label'] = 'Статус доставки';
  $handler->display->display_options['filters']['field_status_dost_value']['expose']['operator'] = 'field_status_dost_value_op';
  $handler->display->display_options['filters']['field_status_dost_value']['expose']['identifier'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Критерий фильтра: Документы: Статус оплаты (field_status_oplati) */
  $handler->display->display_options['filters']['field_status_oplati_value']['id'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['filters']['field_status_oplati_value']['field'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_oplati_value']['expose']['operator_id'] = 'field_status_oplati_value_op';
  $handler->display->display_options['filters']['field_status_oplati_value']['expose']['label'] = 'Статус оплаты';
  $handler->display->display_options['filters']['field_status_oplati_value']['expose']['operator'] = 'field_status_oplati_value_op';
  $handler->display->display_options['filters']['field_status_oplati_value']['expose']['identifier'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Период';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );

  /* Display: Статистика магазина */
  $handler = $view->new_display('page', 'Статистика магазина', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_products_zd_target_id']['id'] = 'field_products_zd_target_id';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['table'] = 'field_data_field_products_zd';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['field'] = 'field_products_zd_target_id';
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Массовые операции: Документы */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'rules_component::rules_link_set_akt_vip_rob' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Акт вып. работ',
    ),
    'rules_component::rules_link_set_ved_dlya_sverky' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Ведомость для сверки',
    ),
    'rules_component::rules_link_set_check_static' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Счет',
    ),
    'rules_component::rules_zay_vz_kcd' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_calculated_products' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Поле: Глобальный: Счетчик результатов */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#  п/п';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_id_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Поле: Товар: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_product';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['id']['label'] = 'Id товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Дата заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Время выполнения */
  $handler->display->display_options['fields']['field_time_completed_zd']['id'] = 'field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['table'] = 'field_data_field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['field'] = 'field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Товар: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Название товара';
  /* Поле: Товар: Количество */
  $handler->display->display_options['fields']['field_quantity_product']['id'] = 'field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['table'] = 'field_data_field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['field'] = 'field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['field_quantity_product']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: КСД, которая выполняет заказ */
  $handler->display->display_options['fields']['field_field_ksd_zd']['id'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['field'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['label'] = 'КСД, которая выполняла заказ';
  $handler->display->display_options['fields']['field_field_ksd_zd']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['label'] = 'Адрес склада на котором забирался товар';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Поле: Документы: Ф.И.О. получателя */
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['id'] = 'field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['table'] = 'field_data_field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['field'] = 'field_fio_pol_pos_zd';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Товар: Цена */
  $handler->display->display_options['fields']['field_price_product']['id'] = 'field_price_product';
  $handler->display->display_options['fields']['field_price_product']['table'] = 'field_data_field_price_product';
  $handler->display->display_options['fields']['field_price_product']['field'] = 'field_price_product';
  $handler->display->display_options['fields']['field_price_product']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['field_price_product']['label'] = 'Цена товара';
  $handler->display->display_options['fields']['field_price_product']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость доставки */
  $handler->display->display_options['fields']['field_cost_delivery_zd']['id'] = 'field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['table'] = 'field_data_field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['field'] = 'field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['label'] = 'Цена доставки';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги КСД */
  $handler->display->display_options['fields']['field_serv_ksd']['id'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['table'] = 'field_data_field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['field'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги сервиса */
  $handler->display->display_options['fields']['field_zausl_serv_zd']['id'] = 'field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['table'] = 'field_data_field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['field'] = 'field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Контекстный фильтр: Пользователь: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'relation_employee_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'statistics_shop';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Статистика';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-shopmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Статистика КСД */
  $handler = $view->new_display('page', 'Статистика КСД', 'page_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_products_zd_target_id']['id'] = 'field_products_zd_target_id';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['table'] = 'field_data_field_products_zd';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['field'] = 'field_products_zd_target_id';
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_field_ksd_zd_target_id']['id'] = 'field_field_ksd_zd_target_id';
  $handler->display->display_options['relationships']['field_field_ksd_zd_target_id']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['relationships']['field_field_ksd_zd_target_id']['field'] = 'field_field_ksd_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_field_ksd_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Массовые операции: Документы */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'rules_component::rules_link_set_akt_vip_rob' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Акт вып. работ',
    ),
    'rules_component::rules_link_set_ved_dlya_sverky' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Ведомость для сверки',
    ),
    'rules_component::rules_link_set_check_static' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Счет',
    ),
    'rules_component::rules_zay_vz_kcd' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_calculated_products' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Поле: Глобальный: Счетчик результатов */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '№ п/п';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_id_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Поле: Товар: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_product';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['id']['label'] = 'Id товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Дата заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Время выполнения */
  $handler->display->display_options['fields']['field_time_completed_zd']['id'] = 'field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['table'] = 'field_data_field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['field'] = 'field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Товар: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Название товара';
  /* Поле: Товар: Количество */
  $handler->display->display_options['fields']['field_quantity_product']['id'] = 'field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['table'] = 'field_data_field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['field'] = 'field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['field_quantity_product']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['label'] = 'Адрес склада на котором забирался товар';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  /* Поле: Документы: Ф.И.О. получателя */
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['id'] = 'field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['table'] = 'field_data_field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['field'] = 'field_fio_pol_pos_zd';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Товар: Цена */
  $handler->display->display_options['fields']['field_price_product']['id'] = 'field_price_product';
  $handler->display->display_options['fields']['field_price_product']['table'] = 'field_data_field_price_product';
  $handler->display->display_options['fields']['field_price_product']['field'] = 'field_price_product';
  $handler->display->display_options['fields']['field_price_product']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['field_price_product']['label'] = 'Цена товара';
  $handler->display->display_options['fields']['field_price_product']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость доставки */
  $handler->display->display_options['fields']['field_cost_delivery_zd']['id'] = 'field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['table'] = 'field_data_field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['field'] = 'field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['label'] = 'Цена доставки';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги КСД */
  $handler->display->display_options['fields']['field_serv_ksd']['id'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['table'] = 'field_data_field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['field'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги сервиса */
  $handler->display->display_options['fields']['field_zausl_serv_zd']['id'] = 'field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['table'] = 'field_data_field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['field'] = 'field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Контекстный фильтр: Пользователь: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'relation_employee_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'statistics_ksd';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Статистика';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-ksdmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Статистика Админа */
  $handler = $view->new_display('page', 'Статистика Админа', 'page_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_products_zd_target_id']['id'] = 'field_products_zd_target_id';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['table'] = 'field_data_field_products_zd';
  $handler->display->display_options['relationships']['field_products_zd_target_id']['field'] = 'field_products_zd_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Массовые операции: Документы */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'rules_component::rules_link_set_akt_vip_rob' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Акт вып. работ',
    ),
    'rules_component::rules_link_set_ved_dlya_sverky' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Ведомость для сверки',
    ),
    'rules_component::rules_link_set_check_static' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Счет',
    ),
    'rules_component::rules_zay_vz_kcd' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_calculated_products' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Поле: Глобальный: Счетчик результатов */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '№ п/п';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_id_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Поле: Товар: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_product';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['id']['label'] = 'Id товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Дата заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Время выполнения */
  $handler->display->display_options['fields']['field_time_completed_zd']['id'] = 'field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['table'] = 'field_data_field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['field'] = 'field_time_completed_zd';
  $handler->display->display_options['fields']['field_time_completed_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Товар: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Наименование товара';
  /* Поле: Товар: Количество */
  $handler->display->display_options['fields']['field_quantity_product']['id'] = 'field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['table'] = 'field_data_field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['field'] = 'field_quantity_product';
  $handler->display->display_options['fields']['field_quantity_product']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['field_quantity_product']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Интернет магазин в котором заказывался товар';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: КСД, которая выполняет заказ */
  $handler->display->display_options['fields']['field_field_ksd_zd']['id'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['field'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['label'] = 'КСД, которая выполняла заказ';
  $handler->display->display_options['fields']['field_field_ksd_zd']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['label'] = 'Адрес склада на котором забирался товар';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Поле: Документы: Ф.И.О. получателя */
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['id'] = 'field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['table'] = 'field_data_field_fio_pol_pos_zd';
  $handler->display->display_options['fields']['field_fio_pol_pos_zd']['field'] = 'field_fio_pol_pos_zd';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Товар: Цена */
  $handler->display->display_options['fields']['field_price_product']['id'] = 'field_price_product';
  $handler->display->display_options['fields']['field_price_product']['table'] = 'field_data_field_price_product';
  $handler->display->display_options['fields']['field_price_product']['field'] = 'field_price_product';
  $handler->display->display_options['fields']['field_price_product']['relationship'] = 'field_products_zd_target_id';
  $handler->display->display_options['fields']['field_price_product']['label'] = 'Цена товара';
  $handler->display->display_options['fields']['field_price_product']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость доставки */
  $handler->display->display_options['fields']['field_cost_delivery_zd']['id'] = 'field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['table'] = 'field_data_field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['field'] = 'field_cost_delivery_zd';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['label'] = 'Цена доставки';
  $handler->display->display_options['fields']['field_cost_delivery_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги КСД */
  $handler->display->display_options['fields']['field_serv_ksd']['id'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['table'] = 'field_data_field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['field'] = 'field_serv_ksd';
  $handler->display->display_options['fields']['field_serv_ksd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: За услуги сервиса */
  $handler->display->display_options['fields']['field_zausl_serv_zd']['id'] = 'field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['table'] = 'field_data_field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['field'] = 'field_zausl_serv_zd';
  $handler->display->display_options['fields']['field_zausl_serv_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'statistic';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Статистика';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-menu-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['statistics'] = array(
    t('Master'),
    t('Статистика'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Элементов на страницу'),
    t('- Все -'),
    t('Пропустить'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('<p><span>Выгрузить в:</span><a href=\'#\'>PDF</a><a href=\'#\'>Excel</a></p>'),
    t('Товар entity referenced from field_products_zd'),
    t('ID заявки'),
    t('Дата заказа'),
    t('Ф.И.О. получателя'),
    t('Адрес доставки'),
    t('Статус оплаты'),
    t('Статус доставки'),
    t('Сумма расчета'),
    t('За услуги КСД'),
    t('Все'),
    t('Период'),
    t('Статистика магазина'),
    t('Компания entity referenced from field_topseller_zd'),
    t('Сотрудник'),
    t('#  п/п'),
    t('Id товара'),
    t('.'),
    t(','),
    t('Время выполнения'),
    t('Название товара'),
    t('Количество'),
    t('КСД, которая выполняла заказ'),
    t('Адрес склада на котором забирался товар'),
    t('Цена товара'),
    t('Цена доставки'),
    t('За услуги сервиса'),
    t('Статистика КСД'),
    t('Компания entity referenced from field_field_ksd_zd'),
    t('№ п/п'),
    t('Магазин-продавець'),
    t('Статистика Админа'),
    t('Наименование товара'),
    t('Интернет магазин в котором заказывался товар'),
  );
  $export['statistics'] = $view;

  return $export;
}
