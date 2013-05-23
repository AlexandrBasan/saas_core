<?php
/**
 * @file
 * saas_notifications_core.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function saas_notifications_core_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|notifications-page-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'notifications-page-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_mail_vozzayvsis' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_vozzayvsis' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_zayotm' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_zayotm' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_prvisp' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_zay_prvisp' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_obnzay' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_obnzay' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_info_zay' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_info_zay' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_new_zay' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_new_zay' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostper_shop' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostper_shop' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_dosvsh' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_dosvsh' => array(
      'weight' => '28',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdost_shop' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdost_shop' => array(
      'weight' => '26',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostvrper_shop' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostvrper_shop' => array(
      'weight' => '31',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplpolsh' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplpolsh' => array(
      'weight' => '29',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplbeznsh' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplbeznsh' => array(
      'weight' => '32',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_opltelsh' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_opltelsh' => array(
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplotpbezsh' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplotpbezsh' => array(
      'weight' => '34',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_opotrtelsh' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_neoplpolsh' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_neoplpolsh' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplpolbash' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplpolbash' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_opotrtelsh' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_1' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_2' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_3' => array(
      'weight' => '27',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|notifications-page-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|notifications-page_1-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'notifications-page_1-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_mail_vozzayvsis' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_vozzayvsis' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_zayotm' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_zayotm' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_prvisp' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_zay_prvisp' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_obnzay' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_obnzay' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_info_zay' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_info_zay' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_new_zay' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_new_zay' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostper_shop' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostper_shop' => array(
      'weight' => '31',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_dosvsh' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_dosvsh' => array(
      'weight' => '29',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdost_shop' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdost_shop' => array(
      'weight' => '27',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostvrper_shop' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostvrper_shop' => array(
      'weight' => '26',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplpolsh' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplpolsh' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplbeznsh' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplbeznsh' => array(
      'weight' => '32',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_opltelsh' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_opltelsh' => array(
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplotpbezsh' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplotpbezsh' => array(
      'weight' => '34',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_opotrtelsh' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_neoplpolsh' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_neoplpolsh' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mail_oplpolbash' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_oplpolbash' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_opotrtelsh' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing' => array(
      'weight' => '28',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_1' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_2' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_3' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|notifications-page_1-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|notifications-page_2-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'notifications-page_2-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field__e_mail_returnsdshop' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_returnsdshop' => array(
      'weight' => '31',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_tovzabrskladshop' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_tovzabrskladshop' => array(
      'weight' => '32',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_postshop' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_post_shop' => array(
      'weight' => '28',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_postsdshop' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_postsdshop' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_eror_zdshop' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_eror_zdshop' => array(
      'weight' => '29',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_dostper_shop' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_dostper_shop' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_dostn_shop' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_dostn_shop' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_dost_shop' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_dost_shop' => array(
      'weight' => '34',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_neprz_vshop' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_neprz_vshop' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_nevr_vozvrshop' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_nevr_vozvrshop' => array(
      'weight' => '39',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_nevr_tryt' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_nevr_tryt' => array(
      'weight' => '40',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_abort_shop' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_abort_shop' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_zdnzsklad_shop' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_zdnzsklad_shop' => array(
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opnepol_shop' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opnepol_shop' => array(
      'weight' => '46',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_nevadr' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_nevadr' => array(
      'weight' => '41',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_polkurzak_shop' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_polkurzak_shop' => array(
      'weight' => '44',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_tryt_shop' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_tryt_shop' => array(
      'weight' => '42',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_pol_mag' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_pol_mag' => array(
      'weight' => '45',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_budopbez_shop' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_budopbez_shop' => array(
      'weight' => '50',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_budoptel_shop' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_budoptel_shop' => array(
      'weight' => '51',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostper_shop' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostper_shop' => array(
      'weight' => '47',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostvshop' => array(
      'weight' => '48',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostvrper_shop' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostvrper_shop' => array(
      'weight' => '49',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_opbez_shop' => array(
      'weight' => '26',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_opbez_shop' => array(
      'weight' => '52',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_optel_shop' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_optel_shop' => array(
      'weight' => '53',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_opdostvshop' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing' => array(
      'weight' => '43',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_1' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_2' => array(
      'weight' => '27',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_3' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|notifications-page_2-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|notifications-page_3-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'notifications-page_3-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field__e_mail_returnsdshop' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_returnsdshop' => array(
      'weight' => '31',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_tovzabrskladshop' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_tovzabrskladshop' => array(
      'weight' => '32',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_postshop' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_post_shop' => array(
      'weight' => '28',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_postsdshop' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_postsdshop' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_eror_zdshop' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_eror_zdshop' => array(
      'weight' => '29',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_dostper_shop' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_dostper_shop' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_dostn_shop' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_dostn_shop' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_dost_shop' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_dost_shop' => array(
      'weight' => '34',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_neprz_vshop' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_neprz_vshop' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_nevr_vozvrshop' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_nevr_vozvrshop' => array(
      'weight' => '39',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_nevr_tryt' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_nevr_tryt' => array(
      'weight' => '40',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_abort_shop' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_abort_shop' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_zdnzsklad_shop' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_zdnzsklad_shop' => array(
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opnepol_shop' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opnepol_shop' => array(
      'weight' => '46',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_nevadr' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_nevadr' => array(
      'weight' => '41',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_polkurzak_shop' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_polkurzak_shop' => array(
      'weight' => '44',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_tryt_shop' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_tryt_shop' => array(
      'weight' => '42',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_pol_mag' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_pol_mag' => array(
      'weight' => '45',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_budopbez_shop' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_budopbez_shop' => array(
      'weight' => '50',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_budoptel_shop' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_budoptel_shop' => array(
      'weight' => '51',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostper_shop' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostper_shop' => array(
      'weight' => '47',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostvshop' => array(
      'weight' => '48',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__e_mail_opdostvrper_shop' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field__sms_opdostvrper_shop' => array(
      'weight' => '49',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_opbez_shop' => array(
      'weight' => '26',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_opbez_shop' => array(
      'weight' => '52',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_optel_shop' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sms_optel_shop' => array(
      'weight' => '53',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_e_mail_opdostvshop' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing' => array(
      'weight' => '43',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_1' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_2' => array(
      'weight' => '27',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_3' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|notifications-page_3-fields|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function saas_notifications_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|notifications-page-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'notifications-page-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'nothing_1',
        1 => 'field_mail_info_zay',
        2 => 'field_mail_new_zay',
        3 => 'field_mail_prvisp',
        4 => 'field_mail_zayotm',
        5 => 'field_mail_vozzayvsis',
        6 => 'field_mail_obnzay',
        7 => 'field__e_mail_opdost_shop',
        8 => 'nothing_2',
        9 => 'field_mail_dosvsh',
        10 => 'field_mail_oplpolsh',
        11 => 'field__e_mail_opdostper_shop',
        12 => 'field__e_mail_opdostvrper_shop',
        13 => 'field_mail_oplbeznsh',
        14 => 'field_mail_opltelsh',
        15 => 'field_mail_oplotpbezsh',
        16 => 'field_mail_opotrtelsh',
        17 => 'field_mail_oplpolbash',
        18 => 'field_mail_neoplpolsh',
      ),
      'right' => array(
        19 => 'nothing',
        20 => 'field_info_zay',
        21 => 'field_sms_new_zay',
        22 => 'field_sms_zay_prvisp',
        23 => 'field_sms_zayotm',
        24 => 'field_sms_vozzayvsis',
        25 => 'field_sms_obnzay',
        26 => 'field__sms_opdost_shop',
        27 => 'nothing_3',
        28 => 'field_sms_dosvsh',
        29 => 'field_sms_oplpolsh',
        30 => 'field__sms_opdostper_shop',
        31 => 'field__sms_opdostvrper_shop',
        32 => 'field_sms_oplbeznsh',
        33 => 'field_sms_opltelsh',
        34 => 'field_sms_oplotpbezsh',
        35 => 'field_sms_opotrtelsh',
        36 => 'field_sms_oplpolbash',
        37 => 'field_sms_neoplpolsh',
      ),
    ),
    'fields' => array(
      'nothing_1' => 'left',
      'field_mail_info_zay' => 'left',
      'field_mail_new_zay' => 'left',
      'field_mail_prvisp' => 'left',
      'field_mail_zayotm' => 'left',
      'field_mail_vozzayvsis' => 'left',
      'field_mail_obnzay' => 'left',
      'field__e_mail_opdost_shop' => 'left',
      'nothing_2' => 'left',
      'field_mail_dosvsh' => 'left',
      'field_mail_oplpolsh' => 'left',
      'field__e_mail_opdostper_shop' => 'left',
      'field__e_mail_opdostvrper_shop' => 'left',
      'field_mail_oplbeznsh' => 'left',
      'field_mail_opltelsh' => 'left',
      'field_mail_oplotpbezsh' => 'left',
      'field_mail_opotrtelsh' => 'left',
      'field_mail_oplpolbash' => 'left',
      'field_mail_neoplpolsh' => 'left',
      'nothing' => 'right',
      'field_info_zay' => 'right',
      'field_sms_new_zay' => 'right',
      'field_sms_zay_prvisp' => 'right',
      'field_sms_zayotm' => 'right',
      'field_sms_vozzayvsis' => 'right',
      'field_sms_obnzay' => 'right',
      'field__sms_opdost_shop' => 'right',
      'nothing_3' => 'right',
      'field_sms_dosvsh' => 'right',
      'field_sms_oplpolsh' => 'right',
      'field__sms_opdostper_shop' => 'right',
      'field__sms_opdostvrper_shop' => 'right',
      'field_sms_oplbeznsh' => 'right',
      'field_sms_opltelsh' => 'right',
      'field_sms_oplotpbezsh' => 'right',
      'field_sms_opotrtelsh' => 'right',
      'field_sms_oplpolbash' => 'right',
      'field_sms_neoplpolsh' => 'right',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|notifications-page-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|notifications-page_1-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'notifications-page_1-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'nothing_3',
        1 => 'field_mail_info_zay',
        2 => 'field_mail_new_zay',
        3 => 'field_mail_prvisp',
        4 => 'field_mail_zayotm',
        5 => 'field_mail_vozzayvsis',
        6 => 'field_mail_obnzay',
        7 => 'field__e_mail_opdostvrper_shop',
        8 => 'field__e_mail_opdost_shop',
        9 => 'nothing_1',
        10 => 'field_mail_dosvsh',
        11 => 'field_mail_oplpolsh',
        12 => 'field__e_mail_opdostper_shop',
        13 => 'field_mail_oplbeznsh',
        14 => 'field_mail_opltelsh',
        15 => 'field_mail_oplotpbezsh',
        16 => 'field_mail_opotrtelsh',
        17 => 'field_mail_oplpolbash',
        18 => 'field_mail_neoplpolsh',
      ),
      'right' => array(
        19 => 'nothing_2',
        20 => 'field_info_zay',
        21 => 'field_sms_new_zay',
        22 => 'field_sms_zay_prvisp',
        23 => 'field_sms_zayotm',
        24 => 'field_sms_vozzayvsis',
        25 => 'field_sms_obnzay',
        26 => 'field__sms_opdostvrper_shop',
        27 => 'field__sms_opdost_shop',
        28 => 'nothing',
        29 => 'field_sms_dosvsh',
        30 => 'field_sms_oplpolsh',
        31 => 'field__sms_opdostper_shop',
        32 => 'field_sms_oplbeznsh',
        33 => 'field_sms_opltelsh',
        34 => 'field_sms_oplotpbezsh',
        35 => 'field_sms_opotrtelsh',
        36 => 'field_sms_oplpolbash',
        37 => 'field_sms_neoplpolsh',
      ),
    ),
    'fields' => array(
      'nothing_3' => 'left',
      'field_mail_info_zay' => 'left',
      'field_mail_new_zay' => 'left',
      'field_mail_prvisp' => 'left',
      'field_mail_zayotm' => 'left',
      'field_mail_vozzayvsis' => 'left',
      'field_mail_obnzay' => 'left',
      'field__e_mail_opdostvrper_shop' => 'left',
      'field__e_mail_opdost_shop' => 'left',
      'nothing_1' => 'left',
      'field_mail_dosvsh' => 'left',
      'field_mail_oplpolsh' => 'left',
      'field__e_mail_opdostper_shop' => 'left',
      'field_mail_oplbeznsh' => 'left',
      'field_mail_opltelsh' => 'left',
      'field_mail_oplotpbezsh' => 'left',
      'field_mail_opotrtelsh' => 'left',
      'field_mail_oplpolbash' => 'left',
      'field_mail_neoplpolsh' => 'left',
      'nothing_2' => 'right',
      'field_info_zay' => 'right',
      'field_sms_new_zay' => 'right',
      'field_sms_zay_prvisp' => 'right',
      'field_sms_zayotm' => 'right',
      'field_sms_vozzayvsis' => 'right',
      'field_sms_obnzay' => 'right',
      'field__sms_opdostvrper_shop' => 'right',
      'field__sms_opdost_shop' => 'right',
      'nothing' => 'right',
      'field_sms_dosvsh' => 'right',
      'field_sms_oplpolsh' => 'right',
      'field__sms_opdostper_shop' => 'right',
      'field_sms_oplbeznsh' => 'right',
      'field_sms_opltelsh' => 'right',
      'field_sms_oplotpbezsh' => 'right',
      'field_sms_opotrtelsh' => 'right',
      'field_sms_oplpolbash' => 'right',
      'field_sms_neoplpolsh' => 'right',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|notifications-page_1-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|notifications-page_2-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'notifications-page_2-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'nothing_3',
        1 => 'field__e_mail_postshop',
        2 => 'field__e_mail_eror_zdshop',
        3 => 'field__e_mail_postsdshop',
        4 => 'field__e_mail_returnsdshop',
        5 => 'field__e_mail_tovzabrskladshop',
        6 => 'field__e_mail_zdnzsklad_shop',
        7 => 'field__e_mail_dost_shop',
        8 => 'field__e_mail_dostn_shop',
        9 => 'field__e_mail_neprz_vshop',
        10 => 'field__e_mail_abort_shop',
        11 => 'field__e_mail_dostper_shop',
        12 => 'field__e_mail_nevr_vozvrshop',
        13 => 'field__e_mail_nevr_tryt',
        14 => 'field__e_mail_nevadr',
        15 => 'field__e_mail_tryt_shop',
        16 => 'nothing_1',
        17 => 'field__e_mail_polkurzak_shop',
        18 => 'field__e_mail_pol_mag',
        19 => 'field__e_mail_opnepol_shop',
        20 => 'field__e_mail_opdostper_shop',
        21 => 'field_e_mail_opdostvshop',
        22 => 'field__e_mail_opdostvrper_shop',
        23 => 'field__e_mail_budopbez_shop',
        24 => 'field_e_mail_budoptel_shop',
        25 => 'field_e_mail_optel_shop',
        26 => 'field_e_mail_opbez_shop',
      ),
      'right' => array(
        27 => 'nothing_2',
        28 => 'field__sms_post_shop',
        29 => 'field__sms_eror_zdshop',
        30 => 'field__sms_postsdshop',
        31 => 'field__sms_returnsdshop',
        32 => 'field_sms_tovzabrskladshop',
        33 => 'field__sms_zdnzsklad_shop',
        34 => 'field__sms_dost_shop',
        35 => 'field__sms_dostn_shop',
        36 => 'field__sms_neprz_vshop',
        37 => 'field__sms_abort_shop',
        38 => 'field__sms_dostper_shop',
        39 => 'field__sms_nevr_vozvrshop',
        40 => 'field__sms_nevr_tryt',
        41 => 'field__sms_nevadr',
        42 => 'field_sms_tryt_shop',
        43 => 'nothing',
        44 => 'field_polkurzak_shop',
        45 => 'field__sms_pol_mag',
        46 => 'field__sms_opnepol_shop',
        47 => 'field__sms_opdostper_shop',
        48 => 'field__sms_opdostvshop',
        49 => 'field__sms_opdostvrper_shop',
        50 => 'field__sms_budopbez_shop',
        51 => 'field_sms_budoptel_shop',
        52 => 'field_sms_opbez_shop',
        53 => 'field_sms_optel_shop',
      ),
    ),
    'fields' => array(
      'nothing_3' => 'left',
      'field__e_mail_postshop' => 'left',
      'field__e_mail_eror_zdshop' => 'left',
      'field__e_mail_postsdshop' => 'left',
      'field__e_mail_returnsdshop' => 'left',
      'field__e_mail_tovzabrskladshop' => 'left',
      'field__e_mail_zdnzsklad_shop' => 'left',
      'field__e_mail_dost_shop' => 'left',
      'field__e_mail_dostn_shop' => 'left',
      'field__e_mail_neprz_vshop' => 'left',
      'field__e_mail_abort_shop' => 'left',
      'field__e_mail_dostper_shop' => 'left',
      'field__e_mail_nevr_vozvrshop' => 'left',
      'field__e_mail_nevr_tryt' => 'left',
      'field__e_mail_nevadr' => 'left',
      'field__e_mail_tryt_shop' => 'left',
      'nothing_1' => 'left',
      'field__e_mail_polkurzak_shop' => 'left',
      'field__e_mail_pol_mag' => 'left',
      'field__e_mail_opnepol_shop' => 'left',
      'field__e_mail_opdostper_shop' => 'left',
      'field_e_mail_opdostvshop' => 'left',
      'field__e_mail_opdostvrper_shop' => 'left',
      'field__e_mail_budopbez_shop' => 'left',
      'field_e_mail_budoptel_shop' => 'left',
      'field_e_mail_optel_shop' => 'left',
      'field_e_mail_opbez_shop' => 'left',
      'nothing_2' => 'right',
      'field__sms_post_shop' => 'right',
      'field__sms_eror_zdshop' => 'right',
      'field__sms_postsdshop' => 'right',
      'field__sms_returnsdshop' => 'right',
      'field_sms_tovzabrskladshop' => 'right',
      'field__sms_zdnzsklad_shop' => 'right',
      'field__sms_dost_shop' => 'right',
      'field__sms_dostn_shop' => 'right',
      'field__sms_neprz_vshop' => 'right',
      'field__sms_abort_shop' => 'right',
      'field__sms_dostper_shop' => 'right',
      'field__sms_nevr_vozvrshop' => 'right',
      'field__sms_nevr_tryt' => 'right',
      'field__sms_nevadr' => 'right',
      'field_sms_tryt_shop' => 'right',
      'nothing' => 'right',
      'field_polkurzak_shop' => 'right',
      'field__sms_pol_mag' => 'right',
      'field__sms_opnepol_shop' => 'right',
      'field__sms_opdostper_shop' => 'right',
      'field__sms_opdostvshop' => 'right',
      'field__sms_opdostvrper_shop' => 'right',
      'field__sms_budopbez_shop' => 'right',
      'field_sms_budoptel_shop' => 'right',
      'field_sms_opbez_shop' => 'right',
      'field_sms_optel_shop' => 'right',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|notifications-page_2-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|notifications-page_3-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'notifications-page_3-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'nothing_3',
        1 => 'field__e_mail_postshop',
        2 => 'field__e_mail_eror_zdshop',
        3 => 'field__e_mail_postsdshop',
        4 => 'field__e_mail_returnsdshop',
        5 => 'field__e_mail_tovzabrskladshop',
        6 => 'field__e_mail_zdnzsklad_shop',
        7 => 'field__e_mail_dost_shop',
        8 => 'field__e_mail_dostn_shop',
        9 => 'field__e_mail_neprz_vshop',
        10 => 'field__e_mail_abort_shop',
        11 => 'field__e_mail_dostper_shop',
        12 => 'field__e_mail_nevr_vozvrshop',
        13 => 'field__e_mail_nevr_tryt',
        14 => 'field__e_mail_nevadr',
        15 => 'field__e_mail_tryt_shop',
        16 => 'nothing_1',
        17 => 'field__e_mail_polkurzak_shop',
        18 => 'field__e_mail_pol_mag',
        19 => 'field__e_mail_opnepol_shop',
        20 => 'field__e_mail_opdostper_shop',
        21 => 'field_e_mail_opdostvshop',
        22 => 'field__e_mail_opdostvrper_shop',
        23 => 'field__e_mail_budopbez_shop',
        24 => 'field_e_mail_budoptel_shop',
        25 => 'field_e_mail_optel_shop',
        26 => 'field_e_mail_opbez_shop',
      ),
      'right' => array(
        27 => 'nothing_2',
        28 => 'field__sms_post_shop',
        29 => 'field__sms_eror_zdshop',
        30 => 'field__sms_postsdshop',
        31 => 'field__sms_returnsdshop',
        32 => 'field_sms_tovzabrskladshop',
        33 => 'field__sms_zdnzsklad_shop',
        34 => 'field__sms_dost_shop',
        35 => 'field__sms_dostn_shop',
        36 => 'field__sms_neprz_vshop',
        37 => 'field__sms_abort_shop',
        38 => 'field__sms_dostper_shop',
        39 => 'field__sms_nevr_vozvrshop',
        40 => 'field__sms_nevr_tryt',
        41 => 'field__sms_nevadr',
        42 => 'field_sms_tryt_shop',
        43 => 'nothing',
        44 => 'field_polkurzak_shop',
        45 => 'field__sms_pol_mag',
        46 => 'field__sms_opnepol_shop',
        47 => 'field__sms_opdostper_shop',
        48 => 'field__sms_opdostvshop',
        49 => 'field__sms_opdostvrper_shop',
        50 => 'field__sms_budopbez_shop',
        51 => 'field_sms_budoptel_shop',
        52 => 'field_sms_opbez_shop',
        53 => 'field_sms_optel_shop',
      ),
    ),
    'fields' => array(
      'nothing_3' => 'left',
      'field__e_mail_postshop' => 'left',
      'field__e_mail_eror_zdshop' => 'left',
      'field__e_mail_postsdshop' => 'left',
      'field__e_mail_returnsdshop' => 'left',
      'field__e_mail_tovzabrskladshop' => 'left',
      'field__e_mail_zdnzsklad_shop' => 'left',
      'field__e_mail_dost_shop' => 'left',
      'field__e_mail_dostn_shop' => 'left',
      'field__e_mail_neprz_vshop' => 'left',
      'field__e_mail_abort_shop' => 'left',
      'field__e_mail_dostper_shop' => 'left',
      'field__e_mail_nevr_vozvrshop' => 'left',
      'field__e_mail_nevr_tryt' => 'left',
      'field__e_mail_nevadr' => 'left',
      'field__e_mail_tryt_shop' => 'left',
      'nothing_1' => 'left',
      'field__e_mail_polkurzak_shop' => 'left',
      'field__e_mail_pol_mag' => 'left',
      'field__e_mail_opnepol_shop' => 'left',
      'field__e_mail_opdostper_shop' => 'left',
      'field_e_mail_opdostvshop' => 'left',
      'field__e_mail_opdostvrper_shop' => 'left',
      'field__e_mail_budopbez_shop' => 'left',
      'field_e_mail_budoptel_shop' => 'left',
      'field_e_mail_optel_shop' => 'left',
      'field_e_mail_opbez_shop' => 'left',
      'nothing_2' => 'right',
      'field__sms_post_shop' => 'right',
      'field__sms_eror_zdshop' => 'right',
      'field__sms_postsdshop' => 'right',
      'field__sms_returnsdshop' => 'right',
      'field_sms_tovzabrskladshop' => 'right',
      'field__sms_zdnzsklad_shop' => 'right',
      'field__sms_dost_shop' => 'right',
      'field__sms_dostn_shop' => 'right',
      'field__sms_neprz_vshop' => 'right',
      'field__sms_abort_shop' => 'right',
      'field__sms_dostper_shop' => 'right',
      'field__sms_nevr_vozvrshop' => 'right',
      'field__sms_nevr_tryt' => 'right',
      'field__sms_nevadr' => 'right',
      'field_sms_tryt_shop' => 'right',
      'nothing' => 'right',
      'field_polkurzak_shop' => 'right',
      'field__sms_pol_mag' => 'right',
      'field__sms_opnepol_shop' => 'right',
      'field__sms_opdostper_shop' => 'right',
      'field__sms_opdostvshop' => 'right',
      'field__sms_opdostvrper_shop' => 'right',
      'field__sms_budopbez_shop' => 'right',
      'field_sms_budoptel_shop' => 'right',
      'field_sms_opbez_shop' => 'right',
      'field_sms_optel_shop' => 'right',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|notifications-page_3-fields|default'] = $ds_layout;

  return $export;
}
