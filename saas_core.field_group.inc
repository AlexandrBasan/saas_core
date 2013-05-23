<?php
/**
 * @file
 * saas_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function saas_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_button|documents|appdelivery|default';
  $field_group->group_name = 'group_button';
  $field_group->entity_type = 'documents';
  $field_group->bundle = 'appdelivery';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'button',
    'weight' => '2',
    'children' => array(
      0 => 'field_edit_zakaz',
      1 => 'field_return_zakaz',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'button',
      'instance_settings' => array(
        'classes' => 'knopki',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_button|documents|appdelivery|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dan_tovar|product|product|default';
  $field_group->group_name = 'group_dan_tovar';
  $field_group->entity_type = 'product';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Данные товара',
    'weight' => '0',
    'children' => array(
      0 => 'group_left',
      1 => 'group_right',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Данные товара',
      'instance_settings' => array(
        'classes' => 'group-dan-tovar field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_dan_tovar|product|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ksd|documents|appdelivery|default';
  $field_group->group_name = 'group_ksd';
  $field_group->entity_type = 'documents';
  $field_group->bundle = 'appdelivery';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_primechaniya';
  $field_group->data = array(
    'label' => 'от КСД',
    'weight' => '34',
    'children' => array(
      0 => 'field_prim_ksd',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ksd field-group-htab ',
      ),
    ),
  );
  $export['group_ksd|documents|appdelivery|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|product|product|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'product';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dan_tovar';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'field_quantity_product',
      1 => 'field_weight_product',
      2 => 'field_tip_product',
      3 => 'field_price_product',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'leftpr',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'blind',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|product|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primechaniya|documents|appdelivery|default';
  $field_group->group_name = 'group_primechaniya';
  $field_group->entity_type = 'documents';
  $field_group->bundle = 'appdelivery';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Примечания',
    'weight' => '17',
    'children' => array(
      0 => 'group_shop',
      1 => 'group_ksd',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Примечания',
      'instance_settings' => array(
        'classes' => 'group-primechaniya field-group-htabs ',
      ),
    ),
  );
  $export['group_primechaniya|documents|appdelivery|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|product|product|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'product';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_dan_tovar';
  $field_group->data = array(
    'label' => '',
    'weight' => '10',
    'children' => array(
      0 => 'field_file_product',
      1 => 'field_opis_prod',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'rightpr',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|product|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shop|documents|appdelivery|default';
  $field_group->group_name = 'group_shop';
  $field_group->entity_type = 'documents';
  $field_group->bundle = 'appdelivery';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_primechaniya';
  $field_group->data = array(
    'label' => 'от магазина',
    'weight' => '33',
    'children' => array(
      0 => 'field_prim_shop',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'от магазина',
      'instance_settings' => array(
        'classes' => 'group-shop field-group-htab ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shop|documents|appdelivery|default'] = $field_group;

  return $export;
}
