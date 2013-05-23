<?php
/**
 * @file
 * saas_event.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function saas_event_flag_default_flags() {
  $flags = array();
  // Exported flag: "Статус доставки".
  $flags['statdost'] = array(
    'entity_type' => 'documents',
    'title' => 'Статус доставки',
    'global' => 0,
    'types' => array(
      0 => 'appdelivery',
    ),
    'flag_short' => 'Изменить',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_on_entity' => TRUE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'form_flagging_help' => '',
    'form_flagging_button' => '',
    'form_flagging_delete_button' => '',
    'form_unflagging_help' => '',
    'form_unflagging_button' => '',
    'form_unflag_link_leads_to_edit' => 0,
    'form_interaction' => 'flagging_dialog',
    'show_in_links' => array(
      'teaser' => TRUE,
      'entityreference_view_widget' => TRUE,
      'token' => TRUE,
    ),
    'show_as_field' => FALSE,
    'api_version' => 3,
    'module' => 'saas_event',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Статус оплаты КСД".
  $flags['statusoplksd'] = array(
    'entity_type' => 'documents',
    'title' => 'Статус оплаты КСД',
    'global' => 0,
    'types' => array(
      0 => 'appdelivery',
    ),
    'flag_short' => 'Изменить',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_on_entity' => TRUE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'form_flagging_help' => '',
    'form_flagging_button' => '',
    'form_flagging_delete_button' => '',
    'form_unflagging_help' => '',
    'form_unflagging_button' => '',
    'form_unflag_link_leads_to_edit' => 0,
    'form_interaction' => 'flagging_dialog',
    'show_in_links' => array(
      'teaser' => TRUE,
      'entityreference_view_widget' => TRUE,
      'token' => TRUE,
    ),
    'show_as_field' => FALSE,
    'api_version' => 3,
    'module' => 'saas_event',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Статус оплаты Магазин".
  $flags['statusoplshop'] = array(
    'entity_type' => 'documents',
    'title' => 'Статус оплаты Магазин',
    'global' => 0,
    'types' => array(
      0 => 'appdelivery',
    ),
    'flag_short' => 'Изменить',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_on_entity' => TRUE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'form_flagging_help' => '',
    'form_flagging_button' => '',
    'form_flagging_delete_button' => '',
    'form_unflagging_help' => '',
    'form_unflagging_button' => '',
    'form_unflag_link_leads_to_edit' => 0,
    'form_interaction' => 'flagging_dialog',
    'show_in_links' => array(
      'teaser' => 'teaser',
      'entityreference_view_widget' => 'entityreference_view_widget',
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'api_version' => 3,
    'module' => 'saas_event',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Взятые заказы".
  $flags['vzyatie_zakazi'] = array(
    'entity_type' => 'documents',
    'title' => 'Взятые заказы',
    'global' => 1,
    'types' => array(
      0 => 'appdelivery',
    ),
    'flag_short' => 'Взять заказ',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Вернуть заказ в систему',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_on_entity' => TRUE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'form_flagging_help' => 'Вы уверены?',
    'form_flagging_button' => '',
    'form_flagging_delete_button' => '',
    'form_unflagging_help' => '',
    'form_unflagging_button' => '',
    'form_unflag_link_leads_to_edit' => 0,
    'form_interaction' => 'flagging_dialog',
    'show_in_links' => array(
      'teaser' => 'teaser',
      'entityreference_view_widget' => 'entityreference_view_widget',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'api_version' => 3,
    'module' => 'saas_event',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_default_rules_link().
 */
function saas_event_default_rules_link() {
  $items = array();
  $items['akt_vip_rob'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "\\u0410\\u043a\\u0442 \\u0432\\u044b\\u043f. \\u0440\\u0430\\u0431\\u043e\\u0442",
      "link_type" : "token",
      "bundles" : { "appdelivery" : "appdelivery" },
      "entity_link" : 1
    },
    "name" : "akt_vip_rob",
    "label" : "\\u0410\\u043a\\u0442 \\u0432\\u044b\\u043f\\u043e\\u043b\\u043d\\u0435\\u043d\\u043d\\u044b\\u0445 \\u0440\\u0430\\u0431\\u043e\\u0442",
    "path" : "akt_vip_rob",
    "entity_type" : "documents"
  }');
  $items['check_static'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "\\u0421\\u0447\\u0435\\u0442",
      "link_type" : "token",
      "bundles" : { "appdelivery" : "appdelivery" },
      "entity_link" : 1
    },
    "name" : "check_static",
    "label" : "\\u0421\\u0447\\u0435\\u0442 \\u0441\\u0442\\u0430\\u0442\\u0438\\u0441\\u0442\\u0438\\u043a\\u0438",
    "path" : "check_statistic",
    "entity_type" : "documents"
  }');
  $items['ved_dlya_sverky'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "\\u0412\\u0435\\u0434\\u043e\\u043c\\u043e\\u0441\\u0442\\u044c \\u0434\\u043b\\u044f \\u0441\\u0432\\u0435\\u0440\\u043a\\u0438",
      "link_type" : "token",
      "bundles" : { "appdelivery" : "appdelivery" },
      "entity_link" : 1
    },
    "name" : "ved_dlya_sverky",
    "label" : "\\u0412\\u0435\\u0434\\u043e\\u043c\\u043e\\u0441\\u0442\\u044c \\u0434\\u043b\\u044f \\u0441\\u0432\\u0435\\u0440\\u043a\\u0438",
    "path" : "ved_dlya_sverky",
    "entity_type" : "documents"
  }');
  return $items;
}
