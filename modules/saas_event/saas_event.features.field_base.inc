<?php
/**
 * @file
 * saas_event.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function saas_event_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_comstdost'
  $field_bases['field_comstdost'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_comstdost',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_status_oplatiksd'
  $field_bases['field_status_oplatiksd'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_oplatiksd',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Не оплачено' => 'Не оплачено',
        'Уже получена магазином' => 'Уже получена магазином',
        'Доставляется' => 'Доставляется',
        'Доставка оплаты перенесена' => 'Доставка оплаты перенесена',
        'Неудачная попытка вручения - доставка перенесена' => 'Неудачная попытка вручения - доставка перенесена',
        'Будет отправлена в магазин по Безналу' => 'Будет отправлена в магазин по Безналу',
        'Отправлена в магазин по Безналу' => 'Отправлена в магазин по Безналу',
        'Получена курьером от заказчика' => 'Получена курьером от заказчика',
        'Не получена от заказчика' => 'Не получена от заказчика',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_status_oplatishop'
  $field_bases['field_status_oplatishop'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_oplatishop',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Не оплачено' => 'Не оплачено',
        'Уже получена магазином' => 'Уже получена магазином',
        'Получена от КСД по Безналу' => 'Получена от КСД по Безналу',
        'Получена от КСД наличными' => 'Получена от КСД наличными',
        'Не получена магазином' => 'Не получена магазином',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
