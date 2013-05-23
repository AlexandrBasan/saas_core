<?php
/**
 * @file
 * saas_company_core.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function saas_company_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'company|company|form';
  $ds_layout->entity_type = 'company';
  $ds_layout->bundle = 'company';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'group_osndan',
        2 => 'field_tip_company',
        4 => 'field_countcity',
        9 => 'field_address_predst',
        10 => 'field_address_sklad',
        14 => 'field_address_office',
        16 => 'field_poshta_address',
        18 => 'field_contpepl',
        20 => 'field_pnone',
        21 => 'field_phone_sms',
        23 => 'field_osn_naprav',
        25 => 'field_ofice_hours',
        27 => 'field_quant_pewkur',
        30 => 'field_quant_motokur',
        31 => 'field_quant_avtokur',
        32 => 'field_sred_tov',
        33 => 'field_quant_kurst',
        34 => 'field_krupn_tov',
        35 => 'field_quant_kurkt',
        36 => 'field_opisanie',
      ),
      'right' => array(
        1 => 'group_urdan',
        3 => 'field_employees',
        5 => 'field_name_urpepl',
        7 => 'field_fio_director',
        11 => 'field_fio_buhgalter',
        13 => 'field_ur_address',
        15 => 'field_number_registry',
        17 => 'field_kodegrpou',
        19 => 'field_number_platnds',
        22 => 'field_chet_bank',
        24 => 'field_name_bank',
        26 => 'field_mfo_bank',
        28 => 'group_emp',
        29 => 'field_com_company',
      ),
      'ds_hidden' => array(
        6 => 'field_notifications_client',
        8 => 'field_number',
      ),
      'hidden' => array(
        12 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_osndan' => 'left',
      'group_urdan' => 'right',
      'field_tip_company' => 'left',
      'field_employees' => 'right',
      'field_countcity' => 'left',
      'field_name_urpepl' => 'right',
      'field_notifications_client' => 'ds_hidden',
      'field_fio_director' => 'right',
      'field_number' => 'ds_hidden',
      'field_address_predst' => 'left',
      'field_address_sklad' => 'left',
      'field_fio_buhgalter' => 'right',
      '_add_existing_field' => 'hidden',
      'field_ur_address' => 'right',
      'field_address_office' => 'left',
      'field_number_registry' => 'right',
      'field_poshta_address' => 'left',
      'field_kodegrpou' => 'right',
      'field_contpepl' => 'left',
      'field_number_platnds' => 'right',
      'field_pnone' => 'left',
      'field_phone_sms' => 'left',
      'field_chet_bank' => 'right',
      'field_osn_naprav' => 'left',
      'field_name_bank' => 'right',
      'field_ofice_hours' => 'left',
      'field_mfo_bank' => 'right',
      'field_quant_pewkur' => 'left',
      'group_emp' => 'right',
      'field_com_company' => 'right',
      'field_quant_motokur' => 'left',
      'field_quant_avtokur' => 'left',
      'field_sred_tov' => 'left',
      'field_quant_kurst' => 'left',
      'field_krupn_tov' => 'left',
      'field_quant_kurkt' => 'left',
      'field_opisanie' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['company|company|form'] = $ds_layout;

  return $export;
}
