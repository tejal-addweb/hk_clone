<?php
/**
 * @file
 * hk_crm.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function hk_crm_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'crm_contact_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'CRM Contact Page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'unclaimed_leads_table_view',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Activities',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'unclaimed_leads_table_view',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Favourites',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('CRM Contact Page');
  t('Favourites');

  $export['crm_contact_page'] = $quicktabs;

  return $export;
}