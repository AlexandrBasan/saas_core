<?php
/**
 * @file
 * saas_commis.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function saas_commis_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fines_and_commission';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_variablesm';
  $view->human_name = 'Штрафы и комиссии';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Штрафы и комиссии';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_tip_comis' => 'field_tip_comis',
    'field_ksdgrn_comis_editable' => 'field_ksdgrn_comis_editable',
    'field_shopgrn_comis_editable' => 'field_shopgrn_comis_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_tip_comis' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ksdgrn_comis_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shopgrn_comis_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  /* Шапка: Глобальный: Текстовое поле */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="admin/structure/entity-type/variablesm/fines_commission/add">Создать новый штраф или комиссию</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Поле: Переменные: Тип */
  $handler->display->display_options['fields']['field_tip_comis']['id'] = 'field_tip_comis';
  $handler->display->display_options['fields']['field_tip_comis']['table'] = 'field_data_field_tip_comis';
  $handler->display->display_options['fields']['field_tip_comis']['field'] = 'field_tip_comis';
  $handler->display->display_options['fields']['field_tip_comis']['label'] = '';
  $handler->display->display_options['fields']['field_tip_comis']['element_label_colon'] = FALSE;
  /* Поле: Переменные: Для КСД (editable) */
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['id'] = 'field_ksdgrn_comis_editable';
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['table'] = 'field_data_field_ksdgrn_comis';
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['field'] = 'field_ksdgrn_comis_editable';
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['label'] = '';
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ksdgrn_comis_editable']['suppress_description'] = 1;
  /* Поле: Переменные: Для Магазина (editable) */
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['id'] = 'field_shopgrn_comis_editable';
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['table'] = 'field_data_field_shopgrn_comis';
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['field'] = 'field_shopgrn_comis_editable';
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['label'] = '';
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_shopgrn_comis_editable']['suppress_description'] = 1;
  /* Критерий фильтра: Переменные: variablesm type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_variablesm';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fines_commission' => 'fines_commission',
  );
  /* Критерий фильтра: Переменные: Тип (field_tip_comis) */
  $handler->display->display_options['filters']['field_tip_comis_value']['id'] = 'field_tip_comis_value';
  $handler->display->display_options['filters']['field_tip_comis_value']['table'] = 'field_data_field_tip_comis';
  $handler->display->display_options['filters']['field_tip_comis_value']['field'] = 'field_tip_comis_value';
  $handler->display->display_options['filters']['field_tip_comis_value']['value'] = array(
    'Комиссии' => 'Комиссии',
  );
  $handler->display->display_options['filters']['field_tip_comis_value']['expose']['operator_id'] = 'field_tip_comis_value_op';
  $handler->display->display_options['filters']['field_tip_comis_value']['expose']['label'] = 'Тип (field_tip_comis)';
  $handler->display->display_options['filters']['field_tip_comis_value']['expose']['operator'] = 'field_tip_comis_value_op';
  $handler->display->display_options['filters']['field_tip_comis_value']['expose']['identifier'] = 'field_tip_comis_value';

  /* Display: Штрафы и комиссии */
  $handler = $view->new_display('page', 'Штрафы и комиссии', 'page');
  $handler->display->display_options['path'] = 'fines_and_commission';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Штрафы и комиссии';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-menu-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['fines_and_commission'] = array(
    t('Master'),
    t('Штрафы и комиссии'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('<a href="admin/structure/entity-type/variablesm/fines_commission/add">Создать новый штраф или комиссию</a>'),
    t('Тип (field_tip_comis)'),
  );
  $export['fines_and_commission'] = $view;

  return $export;
}
