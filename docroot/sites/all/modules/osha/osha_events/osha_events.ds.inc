<?php
/**
 * @file
 * osha_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function osha_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'event_location' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|events|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function osha_events_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'event_location';
  $ds_field->label = 'event_location';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'events|*';
  $ds_field->properties = array();
  $export['event_location'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function osha_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title_field',
        1 => 'share_widget',
        2 => 'event_location',
        3 => 'field_start_date',
        4 => 'body',
        5 => 'field_organizer',
        6 => 'field_website_of_event',
        7 => 'field_gallery',
        8 => 'field_speaker',
        9 => 'field_schedule',
      ),
      'footer' => array(
        10 => 'field_contact_name',
        11 => 'field_contact_email',
        12 => 'field_contact_phone',
        13 => 'field_related_documents',
      ),
    ),
    'fields' => array(
      'title_field' => 'header',
      'share_widget' => 'header',
      'event_location' => 'header',
      'field_start_date' => 'header',
      'body' => 'header',
      'field_organizer' => 'header',
      'field_website_of_event' => 'header',
      'field_gallery' => 'header',
      'field_speaker' => 'header',
      'field_schedule' => 'header',
      'field_contact_name' => 'footer',
      'field_contact_email' => 'footer',
      'field_contact_phone' => 'footer',
      'field_related_documents' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'center' => 'div',
      'left2' => 'div',
      'right2' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|events|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
        1 => 'field_organizer',
        2 => 'field_start_date',
      ),
      'right' => array(
        3 => 'field_location',
        4 => 'field_city',
        5 => 'field_country_code',
      ),
      'center' => array(
        6 => 'body',
        7 => 'field_related_documents',
        8 => 'field_schedule',
        9 => 'field_speaker',
        10 => 'field_partner_id',
        11 => 'field_activity',
        12 => 'metatags',
        13 => 'path',
        14 => 'redirect',
        15 => 'workbench_access',
      ),
      'left2' => array(
        16 => 'field_contact_name',
        17 => 'field_contact_phone',
      ),
      'right2' => array(
        18 => 'field_contact_email',
      ),
      'footer' => array(
        19 => 'field_website_of_event',
        20 => 'field_gallery',
        21 => 'field_tags',
        22 => 'field_for_the_web',
        23 => 'field_adonis',
        24 => 'field_unit_ref',
        25 => 'field_agency_role',
        26 => 'field_agency_initial_contact',
        27 => 'field_agency_rep_confirmed',
        28 => 'field_satisfaction_rate',
        29 => 'field_event_in_amp',
        30 => 'field_agency_contact_reply',
        31 => 'field_number_of_attendees',
        32 => 'field_color',
        33 => 'field_modified_on',
        39 => 'field_show_in_ncw',
        40 => 'field_show_eu_flag',
      ),
      'hidden' => array(
        34 => 'field_modified_by',
        35 => 'group_contact',
        36 => 'xmlsitemap',
        37 => 'field_wf_notification',
        38 => 'field_migration_source',
        41 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'field_organizer' => 'left',
      'field_start_date' => 'left',
      'field_location' => 'right',
      'field_city' => 'right',
      'field_country_code' => 'right',
      'body' => 'center',
      'field_related_documents' => 'center',
      'field_schedule' => 'center',
      'field_speaker' => 'center',
      'field_partner_id' => 'center',
      'field_activity' => 'center',
      'metatags' => 'center',
      'path' => 'center',
      'redirect' => 'center',
      'workbench_access' => 'center',
      'field_contact_name' => 'left2',
      'field_contact_phone' => 'left2',
      'field_contact_email' => 'right2',
      'field_website_of_event' => 'footer',
      'field_gallery' => 'footer',
      'field_tags' => 'footer',
      'field_for_the_web' => 'footer',
      'field_adonis' => 'footer',
      'field_unit_ref' => 'footer',
      'field_agency_role' => 'footer',
      'field_agency_initial_contact' => 'footer',
      'field_agency_rep_confirmed' => 'footer',
      'field_satisfaction_rate' => 'footer',
      'field_event_in_amp' => 'footer',
      'field_agency_contact_reply' => 'footer',
      'field_number_of_attendees' => 'footer',
      'field_color' => 'footer',
      'field_modified_on' => 'footer',
      'field_modified_by' => 'hidden',
      'group_contact' => 'hidden',
      'xmlsitemap' => 'hidden',
      'field_wf_notification' => 'hidden',
      'field_migration_source' => 'hidden',
      'field_show_in_ncw' => 'footer',
      'field_show_eu_flag' => 'footer',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'container' => 'container',
      ),
      'left' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'right' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'center' => array(
        'col-md-12' => 'col-md-12',
      ),
      'left2' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'right2' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'footer' => array(
        'col-md-12' => 'col-md-12',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'center' => 'div',
      'left2' => 'div',
      'right2' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|events|form'] = $ds_layout;

  return $export;
}
