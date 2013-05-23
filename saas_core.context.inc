<?php
/**
 * @file
 * saas_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function saas_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin_css';
  $context->description = '';
  $context->tag = 'admin css';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Administrator' => 'Administrator',
      ),
    ),
  );
  $context->reactions = array(
    'css_injector' => array(
      5 => '5',
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('admin css');
  $export['admin_css'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anonim_login';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'css_injector' => array(
      9 => '9',
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      8 => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['anonim_login'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_admin';
  $context->description = '';
  $context->tag = 'Меню';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Administrator' => 'Administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-admin' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-admin',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Меню');
  $export['menu_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_ksd';
  $context->description = '';
  $context->tag = 'Меню';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'КСД' => 'КСД',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-ksdmenu' => array(
          'module' => 'menu',
          'delta' => 'menu-ksdmenu',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Меню');
  $export['menu_ksd'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_shop';
  $context->description = '';
  $context->tag = 'Меню';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Магазин' => 'Магазин',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-shopmenu' => array(
          'module' => 'menu',
          'delta' => 'menu-shopmenu',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Меню');
  $export['menu_shop'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'noadmin_css';
  $context->description = '';
  $context->tag = 'css';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'КСД' => 'КСД',
        'Магазин' => 'Магазин',
      ),
    ),
  );
  $context->reactions = array(
    'css_injector' => array(
      6 => '6',
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('css');
  $export['noadmin_css'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'style_pagezkaddedit';
  $context->description = '';
  $context->tag = 'Стили';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'documents/appdelivery/add' => 'documents/appdelivery/add',
        'documents/appdelivery/*/edit' => 'documents/appdelivery/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'css_injector' => array(
      4 => '4',
      1 => 0,
      2 => 0,
      3 => 0,
      5 => 0,
      6 => 0,
      8 => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Стили');
  $export['style_pagezkaddedit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'style_table';
  $context->description = '';
  $context->tag = 'Стили';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'contin:page' => 'contin:page',
        'contin:page_1' => 'contin:page_1',
        'contin:page_2' => 'contin:page_2',
        'contin:page_3' => 'contin:page_3',
        'contin:page_4' => 'contin:page_4',
        'contin:page_5' => 'contin:page_5',
        'curent_zd_admin' => 'curent_zd_admin',
        'curent_zd_admin:page' => 'curent_zd_admin:page',
        'curent_zd_admin:page_1' => 'curent_zd_admin:page_1',
        'curent_zd_admin:page_2' => 'curent_zd_admin:page_2',
        'curent_zd_admin:page_3' => 'curent_zd_admin:page_3',
        'curent_zd_admin:page_4' => 'curent_zd_admin:page_4',
        'curent_zd_admin:page_5' => 'curent_zd_admin:page_5',
        'current_zdshop' => 'current_zdshop',
        'current_zdshop:page' => 'current_zdshop:page',
        'current_zdshop:page_1' => 'current_zdshop:page_1',
        'current_zdshop:page_3' => 'current_zdshop:page_3',
        'current_zdshop:page_4' => 'current_zdshop:page_4',
        'current_zdshop:page_5' => 'current_zdshop:page_5',
        'fines_and_commission' => 'fines_and_commission',
        'fines_and_commission:page' => 'fines_and_commission:page',
        'statistics:page_1' => 'statistics:page_1',
        'statistics:page_2' => 'statistics:page_2',
        'statistics:page_3' => 'statistics:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'css_injector' => array(
      2 => '2',
      1 => 0,
      3 => 0,
      4 => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Стили');
  $export['style_table'] = $context;

  return $export;
}
