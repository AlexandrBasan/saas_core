<?php
/**
 * @file
 * saas_core.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function saas_core_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'documents|appdelivery|default';
  $ds_fieldsetting->entity_type = 'documents';
  $ds_fieldsetting->bundle = 'appdelivery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'vigruzka_dannih' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_more_zd' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-label-inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'doplist',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_id_zd' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label-inline',
        ),
      ),
    ),
    'field_formvigrdan' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['documents|appdelivery|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function saas_core_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'vigruzka_dannih';
  $ds_field->label = 'vigruzka dannih';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'documents' => 'documents',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|formvigzd-block',
    'block_render' => '2',
  );
  $export['vigruzka_dannih'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function saas_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'documents|appdelivery|default';
  $ds_layout->entity_type = 'documents';
  $ds_layout->bundle = 'appdelivery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_id_zd',
        1 => 'field_topseller_zd',
        2 => 'group_button',
        3 => 'field_products_zd',
        4 => 'field_edit_zakaz',
        6 => 'field_return_zakaz',
      ),
      'left' => array(
        5 => 'field_clear_parcels_zd',
        7 => 'field_total_weight_zd',
        8 => 'field_cost_delivery_zd',
        9 => 'field_cost_deliverydos_zd',
        10 => 'field_serv_ksd',
        11 => 'field_more_zd',
        12 => 'field_maxtime_zd',
        13 => 'field_zeltime_zd',
      ),
      'right' => array(
        14 => 'field_field_ksd_zd',
        15 => 'field_contpeplotg_zd',
        16 => 'field_fio_pol_pos_zd',
        17 => 'field_phone_pol_zd',
        18 => 'field_address_dos_zd',
        19 => 'group_primechaniya',
        22 => 'field_prim_shop',
        25 => 'field_prim_ksd',
        32 => 'group_shop',
        33 => 'group_ksd',
      ),
      'footer' => array(
        20 => 'field_avtostatus',
        21 => 'field_status_dost',
        23 => 'field_status_oplati',
        24 => 'field_summa_raschet_zd',
        26 => 'field_formvigrdan',
        27 => 'field_qr_code',
        28 => 'field_vzyat_zakaz',
        29 => 'vigruzka_dannih',
        30 => 'field_direction',
        31 => 'field_locadressdost',
      ),
    ),
    'fields' => array(
      'field_id_zd' => 'header',
      'field_topseller_zd' => 'header',
      'group_button' => 'header',
      'field_products_zd' => 'header',
      'field_edit_zakaz' => 'header',
      'field_clear_parcels_zd' => 'left',
      'field_return_zakaz' => 'header',
      'field_total_weight_zd' => 'left',
      'field_cost_delivery_zd' => 'left',
      'field_cost_deliverydos_zd' => 'left',
      'field_serv_ksd' => 'left',
      'field_more_zd' => 'left',
      'field_maxtime_zd' => 'left',
      'field_zeltime_zd' => 'left',
      'field_field_ksd_zd' => 'right',
      'field_contpeplotg_zd' => 'right',
      'field_fio_pol_pos_zd' => 'right',
      'field_phone_pol_zd' => 'right',
      'field_address_dos_zd' => 'right',
      'group_primechaniya' => 'right',
      'field_avtostatus' => 'footer',
      'field_status_dost' => 'footer',
      'field_prim_shop' => 'right',
      'field_status_oplati' => 'footer',
      'field_summa_raschet_zd' => 'footer',
      'field_prim_ksd' => 'right',
      'field_formvigrdan' => 'footer',
      'field_qr_code' => 'footer',
      'field_vzyat_zakaz' => 'footer',
      'vigruzka_dannih' => 'footer',
      'field_direction' => 'footer',
      'field_locadressdost' => 'footer',
      'group_shop' => 'right',
      'group_ksd' => 'right',
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
    'hide_sidebars' => 0,
  );
  $export['documents|appdelivery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'documents|appdelivery|form';
  $ds_layout->entity_type = 'documents';
  $ds_layout->bundle = 'appdelivery';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_id_zd',
        1 => 'field_topseller_zd',
        2 => 'field_products_zd',
      ),
      'left' => array(
        3 => 'field_clear_parcels_zd',
        4 => 'field_total_weight_zd',
        5 => 'field_cost_delivery_zd',
        6 => 'field_cost_deliverydos_zd',
        7 => 'field_serv_ksd',
        8 => 'field_more_zd',
        9 => 'field_zeltime_zd',
      ),
      'right' => array(
        10 => 'field_address_locproduct',
        11 => 'field_contpeplotg_zd',
        12 => 'field_address_dos_zd',
        13 => 'field_fio_pol_pos_zd',
        14 => 'field_phone_pol_zd',
        15 => 'field_prim_shop',
      ),
      'footer' => array(
        16 => 'field_summa_raschet_zd',
        17 => 'field_direction',
        18 => 'field_locadressdost',
      ),
      'ds_hidden' => array(
        19 => 'field_return_zakaz',
        20 => 'field_edit_zakaz',
        21 => 'field_vzyat_zakaz',
        22 => 'field_maxtime_zd',
        23 => 'field_qr_code',
        24 => 'field_prim_ksd',
        25 => 'field_status_dost',
        26 => 'field_status_oplati',
        27 => 'field_avtostatus',
        28 => 'field_time_completed_zd',
        29 => 'field_zausl_serv_zd',
        30 => 'field_field_ksd_zd',
      ),
      'hidden' => array(
        31 => 'field_formvigrdan',
        32 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_id_zd' => 'header',
      'field_topseller_zd' => 'header',
      'field_products_zd' => 'header',
      'field_clear_parcels_zd' => 'left',
      'field_total_weight_zd' => 'left',
      'field_cost_delivery_zd' => 'left',
      'field_cost_deliverydos_zd' => 'left',
      'field_serv_ksd' => 'left',
      'field_more_zd' => 'left',
      'field_zeltime_zd' => 'left',
      'field_address_locproduct' => 'right',
      'field_contpeplotg_zd' => 'right',
      'field_address_dos_zd' => 'right',
      'field_fio_pol_pos_zd' => 'right',
      'field_phone_pol_zd' => 'right',
      'field_prim_shop' => 'right',
      'field_summa_raschet_zd' => 'footer',
      'field_direction' => 'footer',
      'field_locadressdost' => 'footer',
      'field_return_zakaz' => 'ds_hidden',
      'field_edit_zakaz' => 'ds_hidden',
      'field_vzyat_zakaz' => 'ds_hidden',
      'field_maxtime_zd' => 'ds_hidden',
      'field_qr_code' => 'ds_hidden',
      'field_prim_ksd' => 'ds_hidden',
      'field_status_dost' => 'ds_hidden',
      'field_status_oplati' => 'ds_hidden',
      'field_avtostatus' => 'ds_hidden',
      'field_time_completed_zd' => 'ds_hidden',
      'field_zausl_serv_zd' => 'ds_hidden',
      'field_field_ksd_zd' => 'ds_hidden',
      'field_formvigrdan' => 'hidden',
      '_add_existing_field' => 'hidden',
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
  $export['documents|appdelivery|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'product|product|form';
  $ds_layout->entity_type = 'product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_price_product',
        1 => 'field_quantity_product',
        2 => 'field_weight_product',
        3 => 'field_tip_product',
      ),
      'right' => array(
        4 => 'field_file_product',
        5 => 'field_opis_prod',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_price_product' => 'left',
      'field_quantity_product' => 'left',
      'field_weight_product' => 'left',
      'field_tip_product' => 'left',
      'field_file_product' => 'right',
      'field_opis_prod' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['product|product|form'] = $ds_layout;

  return $export;
}
