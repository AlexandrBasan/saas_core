<?php
/**
 * @file
 * saas_company_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function saas_company_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emp|company|company|form';
  $field_group->group_name = 'group_emp';
  $field_group->entity_type = 'company';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_urdan';
  $field_group->data = array(
    'label' => 'Сотрудники',
    'weight' => '12',
    'children' => array(
      0 => 'field_employees',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Сотрудники',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_emp|company|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_osndan|company|company|form';
  $field_group->group_name = 'group_osndan';
  $field_group->entity_type = 'company';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Основные данные',
    'weight' => '0',
    'children' => array(
      0 => 'field_countcity',
      1 => 'field_poshta_address',
      2 => 'field_contpepl',
      3 => 'field_pnone',
      4 => 'field_phone_sms',
      5 => 'field_osn_naprav',
      6 => 'field_ofice_hours',
      7 => 'field_quant_pewkur',
      8 => 'field_quant_motokur',
      9 => 'field_quant_avtokur',
      10 => 'field_sred_tov',
      11 => 'field_quant_kurst',
      12 => 'field_krupn_tov',
      13 => 'field_quant_kurkt',
      14 => 'field_opisanie',
      15 => 'field_tip_company',
      16 => 'field_address_sklad',
      17 => 'field_address_office',
      18 => 'field_address_predst',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Основные данные',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_osndan|company|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_urdan|company|company|form';
  $field_group->group_name = 'group_urdan';
  $field_group->entity_type = 'company';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Юридические данные',
    'weight' => '1',
    'children' => array(
      0 => 'field_name_urpepl',
      1 => 'field_fio_director',
      2 => 'field_fio_buhgalter',
      3 => 'field_ur_address',
      4 => 'field_number_registry',
      5 => 'field_kodegrpou',
      6 => 'field_number_platnds',
      7 => 'field_chet_bank',
      8 => 'field_name_bank',
      9 => 'field_mfo_bank',
      10 => 'field_com_company',
      11 => 'group_emp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Юридические данные',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_urdan|company|company|form'] = $field_group;

  return $export;
}
