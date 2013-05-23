<?php
/**
 * @file
 * saas_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function saas_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_documents';
  $view->human_name = 'Текущие заявки (КСД)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Текущие заявки';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_topseller_zd' => 'field_topseller_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'field_adres_rasptov_zd' => 'field_adres_rasptov_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'ops_1' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topseller_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adres_rasptov_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Шапка: Глобальный: Текстовое поле */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Показать только: <a class="form-adv" href="сontinuing_сlaims_free_ksd">Те, что сейчас свободны</a><a class="form-adv" href="сontinuing_сlaims_ksd">Все заказы в системе</a><a class="form-adv" href="сontinuing_сlaims_our_ksd">Те, что выполняются нами</a> <a class="form-adv" href="сontinuing_сlaims_overdue_ksd">Наши с просроченным сроком</a> <a class="form-adv" href="сontinuing_сlaims_ships_products_ksd">Доставлен товар</a> <a class="form-adv" href="сontinuing_сlaims_ships_full_ksd">Доставлен товар и оплата</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['type'] = 'cck_time_default';
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['type'] = 'cck_time_default';
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  /* Критерий сортировки: Документы: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_documents';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );

  /* Display: Текущие заявки */
  $handler = $view->new_display('page', 'Текущие заявки', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Все заявки в системе';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Флаги: vzyatie_zakazi */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'vzyatie_zakazi';
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ksd';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-ksdmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Те, что сейчас свободны */
  $handler = $view->new_display('page', 'Те, что сейчас свободны', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Те, что сейчас свободны';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Флаги: vzyatie_zakazi */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'vzyatie_zakazi';
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Документы: Авто статус (field_avtostatus) */
  $handler->display->display_options['filters']['field_avtostatus_value']['id'] = 'field_avtostatus_value';
  $handler->display->display_options['filters']['field_avtostatus_value']['table'] = 'field_data_field_avtostatus';
  $handler->display->display_options['filters']['field_avtostatus_value']['field'] = 'field_avtostatus_value';
  $handler->display->display_options['filters']['field_avtostatus_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_avtostatus_value']['value'] = array(
    'Заказ принят к выполнению' => 'Заказ принят к выполнению',
    'Заказ поступил в службу доставки' => 'Заказ поступил в службу доставки',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_free_ksd';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Текущие заявки';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-ksdmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Те, что выполняются нами */
  $handler = $view->new_display('page', 'Те, что выполняются нами', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Те, что выполняются нами';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_topseller_zd' => 'field_topseller_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'field_adres_rasptov_zd' => 'field_adres_rasptov_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'ops_1' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topseller_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adres_rasptov_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Флаги: vzyatie_zakazi */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Взять заказы';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'vzyatie_zakazi';
  /* Связь: Флаги: statdost */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Статус доставки';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'statdost';
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
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
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
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Документы: Статус оплаты (field_status_oplati) */
  $handler->display->display_options['filters']['field_status_oplati_value']['id'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['filters']['field_status_oplati_value']['field'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_oplati_value']['value'] = array(
    'Уже получена магазином' => 'Уже получена магазином',
    'Получена от КСД по Безналу' => 'Получена от КСД по Безналу',
    'Получена от КСД наличными' => 'Получена от КСД наличными',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_our_ksd';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Наши с просроченным сроком */
  $handler = $view->new_display('page', 'Наши с просроченным сроком', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Наши с просроченным сроком';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Флаги: vzyatie_zakazi */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Взять заявку';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'vzyatie_zakazi';
  /* Связь: Флаги: statdost */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Статус доставки';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'statdost';
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
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
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
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Документы: Макс. время выполнения заказа (field_maxtime_zd) */
  $handler->display->display_options['filters']['field_maxtime_zd_value']['id'] = 'field_maxtime_zd_value';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['field'] = 'field_maxtime_zd_value';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'сontinuing_сlaims_overdue_ksd';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Доставлен товар */
  $handler = $view->new_display('page', 'Доставлен товар', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Доставлен товар';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_topseller_zd' => 'field_topseller_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'field_adres_rasptov_zd' => 'field_adres_rasptov_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'ops_1' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topseller_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adres_rasptov_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Флаги: statusoplksd */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Статус оплаты';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'statusoplksd';
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
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ships_products_ksd';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Доставлен товар и оплата */
  $handler = $view->new_display('page', 'Доставлен товар и оплата', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Доставлен товар и оплата';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Поле: Документы: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Id заявки';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  /* Критерий фильтра: Документы: Статус оплаты (field_status_oplati) */
  $handler->display->display_options['filters']['field_status_oplati_value']['id'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['filters']['field_status_oplati_value']['field'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['value'] = array(
    'Уже получена магазином' => 'Уже получена магазином',
    'Получена от КСД по Безналу' => 'Получена от КСД по Безналу',
    'Получена от КСД наличными' => 'Получена от КСД наличными',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ships_full_ksd';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['contin'] = array(
    t('Master'),
    t('Текущие заявки'),
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
    t('Показать только: <a class="form-adv" href="сontinuing_сlaims_free_ksd">Те, что сейчас свободны</a><a class="form-adv" href="сontinuing_сlaims_ksd">Все заказы в системе</a><a class="form-adv" href="сontinuing_сlaims_our_ksd">Те, что выполняются нами</a> <a class="form-adv" href="сontinuing_сlaims_overdue_ksd">Наши с просроченным сроком</a> <a class="form-adv" href="сontinuing_сlaims_ships_products_ksd">Доставлен товар</a> <a class="form-adv" href="сontinuing_сlaims_ships_full_ksd">Доставлен товар и оплата</a>'),
    t('ID заявки'),
    t('Магазин-продавець'),
    t('Общий вес посылки'),
    t('Цена всего заказа с доставкой'),
    t('Габариты'),
    t('Адрес доставки'),
    t('Время поступления заказа'),
    t('Макс. время выполнения заказа'),
    t('Желаемое время получения товара заказчиком'),
    t('Статус доставки'),
    t('Статус оплаты'),
    t('За услуги КСД'),
    t('Общая сумма расчета'),
    t('Вся информация'),
    t('Дата'),
    t('Все заявки в системе'),
    t('отметить'),
    t('Пользователь'),
    t('Адрес расположения товара'),
    t('Нет данных'),
    t('Те, что сейчас свободны'),
    t('Те, что выполняются нами'),
    t('Взять заказы'),
    t('Компания entity referenced from field_field_ksd_zd'),
    t('Сотрудник'),
    t('Все'),
    t('Наши с просроченным сроком'),
    t('Взять заявку'),
    t('Доставлен товар'),
    t('Доставлен товар и оплата'),
    t('Id заявки'),
    t('.'),
  );
  $export['contin'] = $view;

  $view = new view();
  $view->name = 'curent_zd_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_documents';
  $view->human_name = 'Текущие заявки (admin)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Текущие заявки';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_topseller_zd' => 'field_topseller_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'field_adres_rasptov_zd' => 'field_adres_rasptov_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topseller_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adres_rasptov_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Шапка: Глобальный: Текстовое поле */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Показать только: <a class="form-adv" href="сontinuing_сlaims_free">Те, что сейчас свободны</a> <a class="form-adv" href="сontinuing_сlaims">Все заказы в системе</a> <a class="form-adv" href="сontinuing_сlaims_our">Те, что выполняются</a> <a class="form-adv" href="сontinuing_сlaims_overdue">C просроченным сроком</a> <a class="form-adv" href="сontinuing_сlaims_ships_products">Доставлен товар</a> <a class="form-adv" href="сontinuing_сlaims_ships_full">Доставлен товар и оплата</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Поле: Документы: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Id заявки';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['id'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['table'] = 'field_data_field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['field'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['label'] = 'Адрес расположения товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['type'] = 'cck_time_default';
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['type'] = 'cck_time_default';
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  /* Критерий сортировки: Документы: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_documents';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );

  /* Display: Все заказы в системе */
  $handler = $view->new_display('page', 'Все заказы в системе', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Все заказы в системе';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
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
  $handler->display->display_options['path'] = 'сontinuing_сlaims';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-menu-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Те, что сейчас свободны */
  $handler = $view->new_display('page', 'Те, что сейчас свободны', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Те, что сейчас свободны';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Связь: Пользователь: Компания */
  $handler->display->display_options['relationships']['eck_company']['id'] = 'eck_company';
  $handler->display->display_options['relationships']['eck_company']['table'] = 'users';
  $handler->display->display_options['relationships']['eck_company']['field'] = 'eck_company';
  $handler->display->display_options['relationships']['eck_company']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Обработчик испорчен или отсутствует */
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['id'] = 'field_ksd_zd_target_id';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['table'] = 'field_data_field_ksd_zd';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['field'] = 'field_ksd_zd_target_id';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['expose']['operator_id'] = 'field_ksd_zd_target_id_op';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['expose']['label'] = 'КСД, которая выполняет заказ (field_ksd_zd)';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['expose']['operator'] = 'field_ksd_zd_target_id_op';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['expose']['identifier'] = 'field_ksd_zd_target_id';
  $handler->display->display_options['path'] = 'сontinuing_сlaims_free';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Текущие заявки';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-menu-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Те, что выполняются */
  $handler = $view->new_display('page', 'Те, что выполняются', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Те, что выполняются';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_ksd_zd']['id'] = 'field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['table'] = 'field_data_field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['field'] = 'field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['label'] = 'КСД, которая выполняет заказ';
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['id'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['table'] = 'field_data_field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['field'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['label'] = 'Адрес расположения товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  /* Критерий фильтра: Обработчик испорчен или отсутствует */
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['id'] = 'field_ksd_zd_target_id';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['table'] = 'field_data_field_ksd_zd';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['field'] = 'field_ksd_zd_target_id';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ksd_zd_target_id']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_our';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: C просроченным сроком */
  $handler = $view->new_display('page', 'C просроченным сроком', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'C просроченным сроком';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_ksd_zd']['id'] = 'field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['table'] = 'field_data_field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['field'] = 'field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['label'] = 'КСД, которая выполняет заказ';
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['id'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['table'] = 'field_data_field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['field'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['label'] = 'Адрес расположения товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  /* Критерий фильтра: Документы: Макс. время выполнения заказа (field_maxtime_zd) */
  $handler->display->display_options['filters']['field_maxtime_zd_value']['id'] = 'field_maxtime_zd_value';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['field'] = 'field_maxtime_zd_value';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'сontinuing_сlaims_overdue';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Доставлен товар */
  $handler = $view->new_display('page', 'Доставлен товар', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Доставлен товар';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_ksd_zd']['id'] = 'field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['table'] = 'field_data_field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['field'] = 'field_ksd_zd';
  $handler->display->display_options['fields']['field_ksd_zd']['label'] = 'КСД, которая выполняет заказ';
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Обработчик испорчен или отсутствует */
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['id'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['table'] = 'field_data_field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['field'] = 'field_adres_rasptov_zd';
  $handler->display->display_options['fields']['field_adres_rasptov_zd']['label'] = 'Адрес расположения товара';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ships_products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Доставлен товар и оплата */
  $handler = $view->new_display('page', 'Доставлен товар и оплата', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Доставлен товар и оплата';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Документы: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  /* Критерий фильтра: Документы: Статус оплаты (field_status_oplati) */
  $handler->display->display_options['filters']['field_status_oplati_value']['id'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['filters']['field_status_oplati_value']['field'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['value'] = array(
    'Уже получена магазином' => 'Уже получена магазином',
    'Получена от КСД по Безналу' => 'Получена от КСД по Безналу',
    'Получена от КСД наличными' => 'Получена от КСД наличными',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ships_full';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['curent_zd_admin'] = array(
    t('Master'),
    t('Текущие заявки'),
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
    t('Показать только: <a class="form-adv" href="сontinuing_сlaims_free">Те, что сейчас свободны</a> <a class="form-adv" href="сontinuing_сlaims">Все заказы в системе</a> <a class="form-adv" href="сontinuing_сlaims_our">Те, что выполняются</a> <a class="form-adv" href="сontinuing_сlaims_overdue">C просроченным сроком</a> <a class="form-adv" href="сontinuing_сlaims_ships_products">Доставлен товар</a> <a class="form-adv" href="сontinuing_сlaims_ships_full">Доставлен товар и оплата</a>'),
    t('Id заявки'),
    t('.'),
    t('Магазин-продавець'),
    t('Общий вес посылки'),
    t('Цена всего заказа с доставкой'),
    t('Габариты'),
    t('Адрес доставки'),
    t('Адрес расположения товара'),
    t('Время поступления заказа'),
    t('Макс. время выполнения заказа'),
    t('Желаемое время получения товара заказчиком'),
    t('Статус доставки'),
    t('Статус оплаты'),
    t('За услуги КСД'),
    t('Общая сумма расчета'),
    t('Вся информация'),
    t('Дата'),
    t('Все заказы в системе'),
    t('Пользователь'),
    t('ID заявки'),
    t('Нет данных'),
    t('Те, что сейчас свободны'),
    t('Компания'),
    t('КСД, которая выполняет заказ (field_ksd_zd)'),
    t('Те, что выполняются'),
    t('КСД, которая выполняет заказ'),
    t('Страна и город'),
    t('C просроченным сроком'),
    t('Доставлен товар'),
    t('Доставлен товар и оплата'),
  );
  $export['curent_zd_admin'] = $view;

  $view = new view();
  $view->name = 'current_zdshop';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_documents';
  $view->human_name = 'Текущие заявки (Магазин)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Текущие заявки';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_topseller_zd' => 'field_topseller_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'field_adres_rasptov_zd' => 'field_adres_rasptov_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'ops' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topseller_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adres_rasptov_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Шапка: Глобальный: Текстовое поле */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Показать только:  <a class="form-adv" href="сontinuing_сlaims_vip_shop">Те, что сейчас выполняются</a><a class="form-adv" href="сontinuing_сlaims_free_shop">Те, что сейчас свободны</a> <a class="form-adv" href="сontinuing_сlaims_shop">Все заказы в системе</a><a class="form-adv" href="сontinuing_сlaims_overdue_shop">Наши с просроченным сроком</a> <a class="form-adv" href="сontinuing_сlaims_ships_products_shop">Доставлен товар</a> <a class="form-adv" href="сontinuing_сlaims_ships_full_shop">Доставлен товар и оплата</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Магазин-продавец */
  $handler->display->display_options['fields']['field_topseller_zd']['id'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['field'] = 'field_topseller_zd';
  $handler->display->display_options['fields']['field_topseller_zd']['label'] = 'Магазин-продавець';
  $handler->display->display_options['fields']['field_topseller_zd']['settings'] = array(
    'link' => 1,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['type'] = 'cck_time_default';
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['type'] = 'cck_time_default';
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  /* Критерий сортировки: Документы: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_documents';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );

  /* Display: Все заявки в системе */
  $handler = $view->new_display('page', 'Все заявки в системе', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Все заявки в системе';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 1;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['id'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['field'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
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
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'сontinuing_сlaims_shop';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-shopmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Те, что сейчас выполняются */
  $handler = $view->new_display('page', 'Те, что сейчас выполняются', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Те, что сейчас выполняются';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 1;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['id'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['field'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: КСД, которая выполняет заказ */
  $handler->display->display_options['fields']['field_field_ksd_zd']['id'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['field'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Документы: Авто статус (field_avtostatus) */
  $handler->display->display_options['filters']['field_avtostatus_value']['id'] = 'field_avtostatus_value';
  $handler->display->display_options['filters']['field_avtostatus_value']['table'] = 'field_data_field_avtostatus';
  $handler->display->display_options['filters']['field_avtostatus_value']['field'] = 'field_avtostatus_value';
  $handler->display->display_options['filters']['field_avtostatus_value']['value'] = array(
    'Заказ принят к выполнению' => 'Заказ принят к выполнению',
    'Заказ поступил в службу доставки' => 'Заказ поступил в службу доставки',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['filters']['field_countcity_tid']['value'] = '';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'сontinuing_сlaims_vip_shop';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Текущие заявки';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-shopmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Наши с просроченным сроком */
  $handler = $view->new_display('page', 'Наши с просроченным сроком', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Наши с просроченным сроком';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_id_zd' => 'field_id_zd',
    'field_topseller_zd' => 'field_topseller_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_locproduct' => 'field_address_locproduct',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'ops' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
    'field_status_oplatishop' => 'field_status_oplatishop',
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
    'field_topseller_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locproduct' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplatishop' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 1;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['id'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['field'] = 'field_address_locproduct_target_id';
  /* Связь: Флаги: statusoplshop */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'statusoplshop';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: КСД, которая выполняет заказ */
  $handler->display->display_options['fields']['field_field_ksd_zd']['id'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['field'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Документы: Макс. время выполнения заказа (field_maxtime_zd) */
  $handler->display->display_options['filters']['field_maxtime_zd_value']['id'] = 'field_maxtime_zd_value';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['field'] = 'field_maxtime_zd_value';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_maxtime_zd_value']['default_date'] = 'now';
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_overdue_shop';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Доставлен товар и оплата */
  $handler = $view->new_display('page', 'Доставлен товар и оплата', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Доставлен товар и оплата';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 1;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['id'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['field'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: КСД, которая выполняет заказ */
  $handler->display->display_options['fields']['field_field_ksd_zd']['id'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['field'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  /* Критерий фильтра: Документы: Статус оплаты (field_status_oplati) */
  $handler->display->display_options['filters']['field_status_oplati_value']['id'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['filters']['field_status_oplati_value']['field'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['value'] = array(
    'Уже получена магазином' => 'Уже получена магазином',
    'Получена от КСД по Безналу' => 'Получена от КСД по Безналу',
    'Получена от КСД наличными' => 'Получена от КСД наличными',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ships_full_shop';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Те, что сейчас свободны */
  $handler = $view->new_display('page', 'Те, что сейчас свободны', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Те, что сейчас свободны';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 1;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['id'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['field'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Документы: Авто статус (field_avtostatus) */
  $handler->display->display_options['filters']['field_avtostatus_value']['id'] = 'field_avtostatus_value';
  $handler->display->display_options['filters']['field_avtostatus_value']['table'] = 'field_data_field_avtostatus';
  $handler->display->display_options['filters']['field_avtostatus_value']['field'] = 'field_avtostatus_value';
  $handler->display->display_options['filters']['field_avtostatus_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_avtostatus_value']['value'] = array(
    'Заказ принят к выполнению' => 'Заказ принят к выполнению',
    'Заказ поступил в службу доставки' => 'Заказ поступил в службу доставки',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['filters']['field_countcity_tid']['value'] = '';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'сontinuing_сlaims_free_shop';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-shopmenu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Доставлен товар */
  $handler = $view->new_display('page', 'Доставлен товар', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Доставлен товар';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_id_zd' => 'field_id_zd',
    'field_field_ksd_zd' => 'field_field_ksd_zd',
    'field_total_weight_zd' => 'field_total_weight_zd',
    'field_cost_deliverydos_zd' => 'field_cost_deliverydos_zd',
    'field_clear_parcels_zd' => 'field_clear_parcels_zd',
    'field_address_locproduct' => 'field_address_locproduct',
    'field_address_dos_zd' => 'field_address_dos_zd',
    'created' => 'created',
    'field_maxtime_zd' => 'field_maxtime_zd',
    'field_zeltime_zd' => 'field_zeltime_zd',
    'field_status_dost' => 'field_status_dost',
    'field_status_oplati' => 'field_status_oplati',
    'ops' => 'field_status_oplati',
    'field_serv_ksd' => 'field_serv_ksd',
    'field_summa_raschet_zd' => 'field_summa_raschet_zd',
    'megarow_links' => 'megarow_links',
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
    'field_field_ksd_zd' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_weight_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_deliverydos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clear_parcels_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locproduct' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_dos_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maxtime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zeltime_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_dost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_oplati' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_serv_ksd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summa_raschet_zd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['id'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['table'] = 'field_data_field_topseller_zd';
  $handler->display->display_options['relationships']['field_topseller_zd_target_id']['field'] = 'field_topseller_zd_target_id';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'field_topseller_zd_target_id';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 1;
  /* Связь: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['id'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['relationships']['field_address_locproduct_target_id']['field'] = 'field_address_locproduct_target_id';
  /* Связь: Флаги: statusoplshop */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'eck_documents';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'statusoplshop';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Документы: ID заявки */
  $handler->display->display_options['fields']['field_id_zd']['id'] = 'field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['table'] = 'field_data_field_id_zd';
  $handler->display->display_options['fields']['field_id_zd']['field'] = 'field_id_zd';
  /* Поле: Документы: КСД, которая выполняет заказ */
  $handler->display->display_options['fields']['field_field_ksd_zd']['id'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['table'] = 'field_data_field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['field'] = 'field_field_ksd_zd';
  $handler->display->display_options['fields']['field_field_ksd_zd']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Документы: Общий вес посылки */
  $handler->display->display_options['fields']['field_total_weight_zd']['id'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['table'] = 'field_data_field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['field'] = 'field_total_weight_zd';
  $handler->display->display_options['fields']['field_total_weight_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Стоимость с доставкой */
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['id'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['table'] = 'field_data_field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['field'] = 'field_cost_deliverydos_zd';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['label'] = 'Цена всего заказа с доставкой';
  $handler->display->display_options['fields']['field_cost_deliverydos_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Габарит посылки */
  $handler->display->display_options['fields']['field_clear_parcels_zd']['id'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['table'] = 'field_data_field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['field'] = 'field_clear_parcels_zd';
  $handler->display->display_options['fields']['field_clear_parcels_zd']['label'] = 'Габариты';
  /* Поле: Документы: Адрес расположения товара */
  $handler->display->display_options['fields']['field_address_locproduct']['id'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['table'] = 'field_data_field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['field'] = 'field_address_locproduct';
  $handler->display->display_options['fields']['field_address_locproduct']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_address_locproduct']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Поле: Документы: Адрес доставки */
  $handler->display->display_options['fields']['field_address_dos_zd']['id'] = 'field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['table'] = 'field_data_field_address_dos_zd';
  $handler->display->display_options['fields']['field_address_dos_zd']['field'] = 'field_address_dos_zd';
  /* Поле: Документы: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Время поступления заказа';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Поле: Документы: Макс. время выполнения заказа */
  $handler->display->display_options['fields']['field_maxtime_zd']['id'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['table'] = 'field_data_field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['field'] = 'field_maxtime_zd';
  $handler->display->display_options['fields']['field_maxtime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Документы: Желаемое время получения товара заказчиком */
  $handler->display->display_options['fields']['field_zeltime_zd']['id'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['table'] = 'field_data_field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['field'] = 'field_zeltime_zd';
  $handler->display->display_options['fields']['field_zeltime_zd']['empty'] = 'Нет данных';
  $handler->display->display_options['fields']['field_zeltime_zd']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Поле: Статус доставки */
  $handler->display->display_options['fields']['field_status_dost']['id'] = 'field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['fields']['field_status_dost']['field'] = 'field_status_dost';
  /* Поле: Документы: Статус оплаты */
  $handler->display->display_options['fields']['field_status_oplati']['id'] = 'field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['fields']['field_status_oplati']['field'] = 'field_status_oplati';
  /* Поле: Флаги: Ссылка флага */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
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
  /* Поле: Документы: Сумма расчета */
  $handler->display->display_options['fields']['field_summa_raschet_zd']['id'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['table'] = 'field_data_field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['field'] = 'field_summa_raschet_zd';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['label'] = 'Общая сумма расчета';
  $handler->display->display_options['fields']['field_summa_raschet_zd']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Документы: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_documents';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Вся информация';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Открыть|documents/appdelivery/[documents:id]',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );
  /* Критерий фильтра: Дата: Дата (eck_documents) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Дата';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'eck_documents.created' => 'eck_documents.created',
  );
  /* Критерий фильтра: Поле: Статус доставки (field_status_dost) */
  $handler->display->display_options['filters']['field_status_dost_value']['id'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['table'] = 'field_data_field_status_dost';
  $handler->display->display_options['filters']['field_status_dost_value']['field'] = 'field_status_dost_value';
  $handler->display->display_options['filters']['field_status_dost_value']['value'] = array(
    'Доставлен заказчику' => 'Доставлен заказчику',
  );
  /* Критерий фильтра: Поле: Страна и город (field_countcity) */
  $handler->display->display_options['filters']['field_countcity_tid']['id'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['table'] = 'field_data_field_countcity';
  $handler->display->display_options['filters']['field_countcity_tid']['field'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['relationship'] = 'field_address_locproduct_target_id';
  $handler->display->display_options['filters']['field_countcity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator_id'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['label'] = 'Страна и город';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['operator'] = 'field_countcity_tid_op';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['identifier'] = 'field_countcity_tid';
  $handler->display->display_options['filters']['field_countcity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_countcity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_countcity_tid']['vocabulary'] = 'countriescity';
  $handler->display->display_options['filters']['field_countcity_tid']['hierarchy'] = 1;
  /* Критерий фильтра: Документы: Статус оплаты (field_status_oplati) */
  $handler->display->display_options['filters']['field_status_oplati_value']['id'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['table'] = 'field_data_field_status_oplati';
  $handler->display->display_options['filters']['field_status_oplati_value']['field'] = 'field_status_oplati_value';
  $handler->display->display_options['filters']['field_status_oplati_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_oplati_value']['value'] = array(
    'Уже получена магазином' => 'Уже получена магазином',
    'Получена от КСД по Безналу' => 'Получена от КСД по Безналу',
    'Получена от КСД наличными' => 'Получена от КСД наличными',
  );
  $handler->display->display_options['path'] = 'сontinuing_сlaims_ships_products_shop';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['current_zdshop'] = array(
    t('Master'),
    t('Текущие заявки'),
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
    t('Показать только:  <a class="form-adv" href="сontinuing_сlaims_vip_shop">Те, что сейчас выполняются</a><a class="form-adv" href="сontinuing_сlaims_free_shop">Те, что сейчас свободны</a> <a class="form-adv" href="сontinuing_сlaims_shop">Все заказы в системе</a><a class="form-adv" href="сontinuing_сlaims_overdue_shop">Наши с просроченным сроком</a> <a class="form-adv" href="сontinuing_сlaims_ships_products_shop">Доставлен товар</a> <a class="form-adv" href="сontinuing_сlaims_ships_full_shop">Доставлен товар и оплата</a>'),
    t('ID заявки'),
    t('Магазин-продавець'),
    t('Общий вес посылки'),
    t('Цена всего заказа с доставкой'),
    t('Габариты'),
    t('Адрес расположения товара'),
    t('Адрес доставки'),
    t('Время поступления заказа'),
    t('Макс. время выполнения заказа'),
    t('Желаемое время получения товара заказчиком'),
    t('Статус доставки'),
    t('Статус оплаты'),
    t('За услуги КСД'),
    t('Общая сумма расчета'),
    t('Вся информация'),
    t('Дата'),
    t('Все заявки в системе'),
    t('Компания entity referenced from field_topseller_zd'),
    t('Сотрудник'),
    t('Местоположение entity referenced from field_address_locproduct'),
    t('Нет данных'),
    t('Страна и город'),
    t('Те, что сейчас выполняются'),
    t('КСД, которая выполняет заказ'),
    t('Все'),
    t('Наши с просроченным сроком'),
    t('отметить'),
    t('Доставлен товар и оплата'),
    t('Те, что сейчас свободны'),
    t('Доставлен товар'),
  );
  $export['current_zdshop'] = $view;

  $view = new view();
  $view->name = 'formvigzd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_documents';
  $view->human_name = 'Формирование и выгрузка заказа';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Поле: Документы: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_documents';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'formation_order\'>
<h2>Формирование и выгрузка заказа</h2>
<div class=\'left\'>
<p><span>Договор купли продажи товара:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Word</a></p>
<p><span>Акт приема-передачи товара:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
<p><span>Накладная на отгрузку со склада:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
<p><span>Чек на товар для покупателя:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
</div>
<div class=\'right\'>
<p><span>Вся форма:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
<p><span>Расписка о получении денег магазином:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Контекстный фильтр: Документы: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_documents';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Критерий фильтра: Документы: documents type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_documents';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'appdelivery' => 'appdelivery',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['formvigzd'] = array(
    t('Master'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('.'),
    t(','),
    t('<div class=\'formation_order\'>
<h2>Формирование и выгрузка заказа</h2>
<div class=\'left\'>
<p><span>Договор купли продажи товара:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Word</a></p>
<p><span>Акт приема-передачи товара:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
<p><span>Накладная на отгрузку со склада:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
<p><span>Чек на товар для покупателя:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
</div>
<div class=\'right\'>
<p><span>Вся форма:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
<p><span>Расписка о получении денег магазином:</span><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkppdf\'>PDF</a><a href=\'http://myheart.pp.ua/documents/appdelivery/[id]/dkpexl\'>Excel</a></p>
</div>
</div>'),
    t('Все'),
    t('Block'),
  );
  $export['formvigzd'] = $view;

  $view = new view();
  $view->name = 'selectloc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_location';
  $view->human_name = 'Выбор местоположения';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Связь: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_address_sklad_company']['id'] = 'reverse_field_address_sklad_company';
  $handler->display->display_options['relationships']['reverse_field_address_sklad_company']['table'] = 'eck_location';
  $handler->display->display_options['relationships']['reverse_field_address_sklad_company']['field'] = 'reverse_field_address_sklad_company';
  /* Связь: Компания: Relation: Сотрудник (company ↔ user) */
  $handler->display->display_options['relationships']['relation_employee_user']['id'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['table'] = 'eck_company';
  $handler->display->display_options['relationships']['relation_employee_user']['field'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_user']['relationship'] = 'reverse_field_address_sklad_company';
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_user']['entity_deduplication_right'] = 0;
  /* Связь: Пользователь: Relation: Сотрудник (user ↔ company) */
  $handler->display->display_options['relationships']['relation_employee_company']['id'] = 'relation_employee_company';
  $handler->display->display_options['relationships']['relation_employee_company']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_employee_company']['field'] = 'relation_employee_company';
  $handler->display->display_options['relationships']['relation_employee_company']['relationship'] = 'relation_employee_user';
  $handler->display->display_options['relationships']['relation_employee_company']['label'] = 'Сотрудник2';
  $handler->display->display_options['relationships']['relation_employee_company']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_company']['entity_deduplication_right'] = 0;
  /* Поле: Местоположение: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_location';
  $handler->display->display_options['fields']['id']['field'] = 'id';
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
  /* Критерий фильтра: Местоположение: location type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_location';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'street' => 'street',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Местоположение: Улица */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'eck_location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $translatables['selectloc'] = array(
    t('Master'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Компания referencing Местоположение from field_address_sklad'),
    t('Сотрудник'),
    t('Сотрудник2'),
    t('Id'),
    t('.'),
    t(','),
    t('Все'),
    t('Entity Reference'),
  );
  $export['selectloc'] = $view;

  $view = new view();
  $view->name = 'user_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'user_block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'rid' => 'rid',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  /* Связь: Пользователь: Relation: Сотрудник (user ↔ company) */
  $handler->display->display_options['relationships']['relation_employee_company']['id'] = 'relation_employee_company';
  $handler->display->display_options['relationships']['relation_employee_company']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_employee_company']['field'] = 'relation_employee_company';
  $handler->display->display_options['relationships']['relation_employee_company']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_employee_company']['entity_deduplication_right'] = 0;
  /* Поле: Пользователь: Название */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Поле: Пользователь: Роли */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  /* Поле: Пользователь: Отношение к компании */
  $handler->display->display_options['fields']['field_otn_compuser']['id'] = 'field_otn_compuser';
  $handler->display->display_options['fields']['field_otn_compuser']['table'] = 'field_data_field_otn_compuser';
  $handler->display->display_options['fields']['field_otn_compuser']['field'] = 'field_otn_compuser';
  $handler->display->display_options['fields']['field_otn_compuser']['label'] = 'Пользователь компании';
  $handler->display->display_options['fields']['field_otn_compuser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_otn_compuser']['settings'] = array(
    'link' => 0,
  );
  /* Поле: Глобальный: Пользовательский текст */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Вы являетесь сотрудником компании [field_otn_compuser]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Критерий сортировки: Пользователь: Дата создания */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Контекстный фильтр: Пользователь: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Критерий фильтра: Пользователь: Активен */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-block';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['user_block'] = array(
    t('Master'),
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
    t('Сотрудник'),
    t('Пользователь компании'),
    t('Вы являетесь сотрудником компании [field_otn_compuser]'),
    t('Все'),
    t('Page'),
    t('Block'),
  );
  $export['user_block'] = $view;

  return $export;
}
