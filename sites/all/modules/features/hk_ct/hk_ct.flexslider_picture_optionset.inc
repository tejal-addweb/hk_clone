<?php
/**
 * @file
 * hk_ct.flexslider_picture_optionset.inc
 */

/**
 * Implements hook_default_flexslider_picture_optionset().
 */
function hk_ct_default_flexslider_picture_optionset() {
  $export = array();

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'morelikethis';
  $flexslider_picture_optionset->imagestyle_type = 'image_style';
  $flexslider_picture_optionset->mapping = '';
  $flexslider_picture_optionset->fallback = '';
  $export['morelikethis'] = $flexslider_picture_optionset;

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'thumbslider';
  $flexslider_picture_optionset->imagestyle_type = 'image_style';
  $flexslider_picture_optionset->mapping = 'colorbox_mapping';
  $flexslider_picture_optionset->fallback = '';
  $export['thumbslider'] = $flexslider_picture_optionset;

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'wohnungsansicht';
  $flexslider_picture_optionset->imagestyle_type = 'picture_mapping';
  $flexslider_picture_optionset->mapping = 'flexfull_mapping';
  $flexslider_picture_optionset->fallback = '';
  $export['wohnungsansicht'] = $flexslider_picture_optionset;

  return $export;
}
