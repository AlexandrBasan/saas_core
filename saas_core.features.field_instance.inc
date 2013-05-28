<?php
/**
 * @file
 * saas_core.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function saas_core_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'documents-appdelivery-field_address_dos_zd'
  $field_instances['documents-appdelivery-field_address_dos_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_address_dos_zd',
    'label' => 'Адрес доставки',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_address_locproduct'
  $field_instances['documents-appdelivery-field_address_locproduct'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_address_locproduct',
    'label' => 'Адрес расположения товара',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_avtostatus'
  $field_instances['documents-appdelivery-field_avtostatus'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 'Заказ поступил в систему',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_avtostatus',
    'label' => 'Авто статус',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_clear_parcels_zd'
  $field_instances['documents-appdelivery-field_clear_parcels_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_clear_parcels_zd',
    'label' => 'Габарит посылки',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_contpeplotg_zd'
  $field_instances['documents-appdelivery-field_contpeplotg_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_contpeplotg_zd',
    'label' => 'Контактное лицо, которое будет отгружать товар',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_cost_delivery_zd'
  $field_instances['documents-appdelivery-field_cost_delivery_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 6,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_cost_delivery_zd',
    'label' => 'Стоимость доставки',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' грн.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_cost_deliverydos_zd'
  $field_instances['documents-appdelivery-field_cost_deliverydos_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_cost_deliverydos_zd',
    'label' => 'Стоимость с доставкой',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' грн.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_edit_zakaz'
  $field_instances['documents-appdelivery-field_edit_zakaz'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'button_field',
        'settings' => array(),
        'type' => 'button_field_default',
        'weight' => 3,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_edit_zakaz',
    'label' => 'Редактировать заказ',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'button_field',
      'settings' => array(
        'additional_classes' => '',
        'edit_hidden' => 1,
        'text' => 'Редактировать заказ',
      ),
      'type' => 'button_field_html',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_field_ksd_zd'
  $field_instances['documents-appdelivery-field_field_ksd_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_field_ksd_zd',
    'label' => 'КСД, которая выполняет заказ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_fio_pol_pos_zd'
  $field_instances['documents-appdelivery-field_fio_pol_pos_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_fio_pol_pos_zd',
    'label' => 'Ф.И.О. получателя',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_formvigrdan'
  $field_instances['documents-appdelivery-field_formvigrdan'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 22,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_formvigrdan',
    'label' => 'Формирование и выгрузка данных',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'php_code',
        'value' => '
<div class=\'formation_order\'>
<h2>Формирование и выгрузка данных</h2>
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
</div>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_id_zd'
  $field_instances['documents-appdelivery-field_id_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_id_zd',
    'label' => 'ID заявки',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_maxtime_zd'
  $field_instances['documents-appdelivery-field_maxtime_zd'] = array(
    'bundle' => 'appdelivery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_maxtime_zd',
    'label' => 'Макс. время выполнения заказа',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_more_zd'
  $field_instances['documents-appdelivery-field_more_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_more_zd',
    'label' => 'Дополнительно',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_phone_pol_zd'
  $field_instances['documents-appdelivery-field_phone_pol_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'allow_alpha' => FALSE,
          'as_tel_link' => FALSE,
          'components' => array(
            'extension' => 'extension',
            'numbertype' => 'numbertype',
          ),
          'country_name_position' => 'after',
          'extension_prefix' => ' ext. ',
          'full_hcard' => FALSE,
          'numbertype_position' => 'before',
        ),
        'type' => 'phone_international',
        'weight' => 15,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_phone_pol_zd',
    'label' => 'Телефон получателя',
    'required' => 0,
    'settings' => array(
      'country_options' => array(
        'all_country_codes' => 1,
        'country_codes' => array(
          'country_selection' => array(
            'AC' => 'AC',
            'AD' => 0,
            'AE' => 0,
            'AF' => 0,
            'AG' => 0,
            'AI' => 0,
            'AL' => 0,
            'AM' => 0,
            'AO' => 0,
            'AR' => 0,
            'AS' => 0,
            'AT' => 0,
            'AU' => 0,
            'AW' => 0,
            'AX' => 0,
            'AZ' => 0,
            'BA' => 0,
            'BB' => 0,
            'BD' => 0,
            'BE' => 0,
            'BF' => 0,
            'BG' => 0,
            'BH' => 0,
            'BI' => 0,
            'BJ' => 0,
            'BL' => 0,
            'BM' => 0,
            'BN' => 0,
            'BO' => 0,
            'BQ' => 0,
            'BR' => 0,
            'BS' => 0,
            'BT' => 0,
            'BW' => 0,
            'BY' => 0,
            'BZ' => 0,
            'CA' => 0,
            'CC' => 0,
            'CD' => 0,
            'CF' => 0,
            'CG' => 0,
            'CH' => 0,
            'CI' => 0,
            'CK' => 0,
            'CL' => 0,
            'CM' => 0,
            'CN' => 0,
            'CO' => 0,
            'CR' => 0,
            'CU' => 0,
            'CV' => 0,
            'CW' => 0,
            'CX' => 0,
            'CY' => 0,
            'CZ' => 0,
            'DE' => 0,
            'DJ' => 0,
            'DK' => 0,
            'DM' => 0,
            'DO' => 0,
            'DZ' => 0,
            'EC' => 0,
            'EE' => 0,
            'EG' => 0,
            'EH' => 0,
            'ER' => 0,
            'ES' => 0,
            'ET' => 0,
            'FI' => 0,
            'FJ' => 0,
            'FK' => 0,
            'FM' => 0,
            'FO' => 0,
            'FR' => 0,
            'GA' => 0,
            'GB' => 0,
            'GD' => 0,
            'GE' => 0,
            'GF' => 0,
            'GG' => 0,
            'GH' => 0,
            'GI' => 0,
            'GL' => 0,
            'GM' => 0,
            'GN' => 0,
            'GP' => 0,
            'GQ' => 0,
            'GR' => 0,
            'GT' => 0,
            'GU' => 0,
            'GW' => 0,
            'GY' => 0,
            'HK' => 0,
            'HN' => 0,
            'HR' => 0,
            'HT' => 0,
            'HU' => 0,
            'ID' => 0,
            'IE' => 0,
            'IL' => 0,
            'IM' => 0,
            'IN' => 0,
            'IO' => 0,
            'IQ' => 0,
            'IR' => 0,
            'IS' => 0,
            'IT' => 0,
            'JE' => 0,
            'JM' => 0,
            'JO' => 0,
            'JP' => 0,
            'KE' => 0,
            'KG' => 0,
            'KH' => 0,
            'KI' => 0,
            'KM' => 0,
            'KN' => 0,
            'KP' => 0,
            'KR' => 0,
            'KW' => 0,
            'KY' => 0,
            'KZ' => 0,
            'LA' => 0,
            'LB' => 0,
            'LC' => 0,
            'LI' => 0,
            'LK' => 0,
            'LR' => 0,
            'LS' => 0,
            'LT' => 0,
            'LU' => 0,
            'LV' => 0,
            'LY' => 0,
            'MA' => 0,
            'MC' => 0,
            'MD' => 0,
            'ME' => 0,
            'MF' => 0,
            'MG' => 0,
            'MH' => 0,
            'MK' => 0,
            'ML' => 0,
            'MM' => 0,
            'MN' => 0,
            'MO' => 0,
            'MP' => 0,
            'MQ' => 0,
            'MR' => 0,
            'MS' => 0,
            'MT' => 0,
            'MU' => 0,
            'MV' => 0,
            'MW' => 0,
            'MX' => 0,
            'MY' => 0,
            'MZ' => 0,
            'NA' => 0,
            'NC' => 0,
            'NE' => 0,
            'NF' => 0,
            'NG' => 0,
            'NI' => 0,
            'NL' => 0,
            'NO' => 0,
            'NP' => 0,
            'NR' => 0,
            'NU' => 0,
            'NZ' => 0,
            'OM' => 0,
            'PA' => 0,
            'PE' => 0,
            'PF' => 0,
            'PG' => 0,
            'PH' => 0,
            'PK' => 0,
            'PL' => 0,
            'PM' => 0,
            'PR' => 0,
            'PS' => 0,
            'PT' => 0,
            'PW' => 0,
            'PY' => 0,
            'QA' => 0,
            'RE' => 0,
            'RO' => 0,
            'RS' => 0,
            'RU' => 0,
            'RW' => 0,
            'SA' => 0,
            'SB' => 0,
            'SC' => 0,
            'SD' => 0,
            'SE' => 0,
            'SG' => 0,
            'SH' => 0,
            'SI' => 0,
            'SJ' => 0,
            'SK' => 0,
            'SL' => 0,
            'SM' => 0,
            'SN' => 0,
            'SO' => 0,
            'SR' => 0,
            'SS' => 0,
            'ST' => 0,
            'SV' => 0,
            'SX' => 0,
            'SY' => 0,
            'SZ' => 0,
            'TC' => 0,
            'TD' => 0,
            'TG' => 0,
            'TH' => 0,
            'TJ' => 0,
            'TK' => 0,
            'TL' => 0,
            'TM' => 0,
            'TN' => 0,
            'TO' => 0,
            'TR' => 0,
            'TT' => 0,
            'TV' => 0,
            'TW' => 0,
            'TZ' => 0,
            'UA' => 'UA',
            'UG' => 0,
            'US' => 0,
            'UY' => 0,
            'UZ' => 0,
            'VA' => 0,
            'VC' => 0,
            'VE' => 0,
            'VG' => 0,
            'VI' => 0,
            'VN' => 0,
            'VU' => 0,
            'WF' => 0,
            'WS' => 0,
            'YE' => 0,
            'YT' => 0,
            'ZA' => 0,
            'ZM' => 0,
            'ZW' => 0,
          ),
          'hide_single_cc' => 0,
        ),
        'default_country' => 'UA',
        'enable_country' => 1,
        'enable_default_country' => 1,
      ),
      'enable_extension' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'phone',
      'settings' => array(
        'country_code_position' => 'before',
        'extension_size' => 7,
        'label_position' => 'none',
        'number_size' => 30,
        'numbertype_allowed_values_position' => 'before',
        'use_tel_input' => 1,
      ),
      'type' => 'phone',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_prim_ksd'
  $field_instances['documents-appdelivery-field_prim_ksd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_prim_ksd',
    'label' => 'Примечания от КСД',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_prim_shop'
  $field_instances['documents-appdelivery-field_prim_shop'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 0,
          'click_to_edit_style' => 'button',
          'empty_text' => '',
          'fallback_format' => 'text_default',
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 20,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_prim_shop',
    'label' => 'Примечания от магазина',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_products_zd'
  $field_instances['documents-appdelivery-field_products_zd'] = array(
    'bundle' => 'appdelivery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_products_zd',
    'label' => 'Товар',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 1,
          'match_operator' => 'CONTAINS',
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_qr_code'
  $field_instances['documents-appdelivery-field_qr_code'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 'Zakaz id[documents:id], dostavit do .Sklad[documents:field_adres_rasptov_zd] to [documents:field_address_dos_zd].
Tovar:
[documents:field_products_zd]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'barcode',
        'settings' => array(),
        'type' => 'barcode_default',
        'weight' => 23,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_qr_code',
    'label' => 'QR code',
    'required' => 0,
    'settings' => array(
      'barcode_height' => 100,
      'barcode_image_format' => 'png',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'barcode',
      'settings' => array(),
      'type' => 'barcode_textarea',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_return_zakaz'
  $field_instances['documents-appdelivery-field_return_zakaz'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'button_field',
        'settings' => array(),
        'type' => 'button_field_default',
        'weight' => 4,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_return_zakaz',
    'label' => 'Отмена заказа',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'button_field',
      'settings' => array(
        'additional_classes' => '',
        'edit_hidden' => 1,
        'text' => 'Отмена заказа',
      ),
      'type' => 'button_field_html',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_serv_ksd'
  $field_instances['documents-appdelivery-field_serv_ksd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_serv_ksd',
    'label' => 'За услуги КСД',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' грн.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_status_dost'
  $field_instances['documents-appdelivery-field_status_dost'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 'Не доставлено',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_status_dost',
    'label' => 'Статус доставки',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_status_oplati'
  $field_instances['documents-appdelivery-field_status_oplati'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 'Не оплачено',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_status_oplati',
    'label' => 'Статус оплаты',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_summa_raschet_zd'
  $field_instances['documents-appdelivery-field_summa_raschet_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Полная составляющая цены товара с доставкой.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 21,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_summa_raschet_zd',
    'label' => 'Сумма расчета',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' грн.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_time_completed_zd'
  $field_instances['documents-appdelivery-field_time_completed_zd'] = array(
    'bundle' => 'appdelivery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_time_completed_zd',
    'label' => 'Время выполнения',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_topseller_zd'
  $field_instances['documents-appdelivery-field_topseller_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_topseller_zd',
    'label' => 'Магазин-продавец',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => '',
        'formatter_settings' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 40,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_total_weight_zd'
  $field_instances['documents-appdelivery-field_total_weight_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 5,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_total_weight_zd',
    'label' => 'Общий вес посылки',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' кг.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => '',
        'formatter_settings' => array(),
      ),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_vzyat_zakaz'
  $field_instances['documents-appdelivery-field_vzyat_zakaz'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'button_field',
        'settings' => array(),
        'type' => 'button_field_default',
        'weight' => 24,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'documents',
    'field_name' => 'field_vzyat_zakaz',
    'label' => 'Взять заказ',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'button_field',
      'settings' => array(
        'additional_classes' => '',
        'edit_hidden' => 1,
        'text' => 'Взять заказ',
      ),
      'type' => 'button_field_html',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_zausl_serv_zd'
  $field_instances['documents-appdelivery-field_zausl_serv_zd'] = array(
    'bundle' => 'appdelivery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_zausl_serv_zd',
    'label' => 'За услуги сервиса',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' грн.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'documents-appdelivery-field_zeltime_zd'
  $field_instances['documents-appdelivery-field_zeltime_zd'] = array(
    'bundle' => 'appdelivery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'documents',
    'field_name' => 'field_zeltime_zd',
    'label' => 'Желаемое время получения товара заказчиком',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'location-location-field_countcity'
  $field_instances['location-location-field_countcity'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'location',
    'field_name' => 'field_countcity',
    'label' => 'Страна и город',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'product-product-field_file_product'
  $field_instances['product-product-field_file_product'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 14,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'product',
    'field_name' => 'field_file_product',
    'label' => 'Вложеный файл с описанием товара',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'products/files',
      'file_extensions' => 'txt doc docx png jpg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'product-product-field_opis_prod'
  $field_instances['product-product-field_opis_prod'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'product',
    'field_name' => 'field_opis_prod',
    'label' => 'Описание товара с сайта',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'product-product-field_price_product'
  $field_instances['product-product-field_price_product'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 11,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'product',
    'field_name' => 'field_price_product',
    'label' => 'Цена',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' грн.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'product-product-field_quantity_product'
  $field_instances['product-product-field_quantity_product'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'product',
    'field_name' => 'field_quantity_product',
    'label' => 'Количество',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'product-product-field_tip_product'
  $field_instances['product-product-field_tip_product'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'product',
    'field_name' => 'field_tip_product',
    'label' => 'Тип товара',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'product-product-field_weight_product'
  $field_instances['product-product-field_weight_product'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'product',
    'field_name' => 'field_weight_product',
    'label' => 'Вес',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' кг.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ID заявки');
  t('QR code');
  t('Авто статус');
  t('Адрес доставки');
  t('Адрес расположения товара');
  t('Вес');
  t('Взять заказ');
  t('Вложеный файл с описанием товара');
  t('Время выполнения');
  t('Габарит посылки');
  t('Дополнительно');
  t('Желаемое время получения товара заказчиком');
  t('За услуги КСД');
  t('За услуги сервиса');
  t('КСД, которая выполняет заказ');
  t('Количество');
  t('Контактное лицо, которое будет отгружать товар');
  t('Магазин-продавец');
  t('Макс. время выполнения заказа');
  t('Общий вес посылки');
  t('Описание товара с сайта');
  t('Отмена заказа');
  t('Полная составляющая цены товара с доставкой.');
  t('Примечания от КСД');
  t('Примечания от магазина');
  t('Редактировать заказ');
  t('Статус доставки');
  t('Статус оплаты');
  t('Стоимость доставки');
  t('Стоимость с доставкой');
  t('Страна и город');
  t('Сумма расчета');
  t('Телефон получателя');
  t('Тип товара');
  t('Товар');
  t('Ф.И.О. получателя');
  t('Формирование и выгрузка данных');
  t('Цена');

  return $field_instances;
}
