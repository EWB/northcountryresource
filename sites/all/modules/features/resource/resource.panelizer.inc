<?php

/**
 * @file
 * resource.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function resource_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'resource';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:resource:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6e384734-3c18-48fb-80af-0d0420cc24f8';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:resource:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41d3d2b8-7175-417a-8884-f4cfd3f624a0';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_focus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Focus',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41d3d2b8-7175-417a-8884-f4cfd3f624a0';
  $display->content['new-41d3d2b8-7175-417a-8884-f4cfd3f624a0'] = $pane;
  $display->panels['contentmain'][0] = 'new-41d3d2b8-7175-417a-8884-f4cfd3f624a0';
  $pane = new stdClass();
  $pane->pid = 'new-914b7082-a647-4e7c-b64f-71c349b1db28';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_keywords';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '914b7082-a647-4e7c-b64f-71c349b1db28';
  $display->content['new-914b7082-a647-4e7c-b64f-71c349b1db28'] = $pane;
  $display->panels['contentmain'][1] = 'new-914b7082-a647-4e7c-b64f-71c349b1db28';
  $pane = new stdClass();
  $pane->pid = 'new-280d1dea-4c55-4841-ad2c-7a7709d6d025';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '280d1dea-4c55-4841-ad2c-7a7709d6d025';
  $display->content['new-280d1dea-4c55-4841-ad2c-7a7709d6d025'] = $pane;
  $display->panels['contentmain'][2] = 'new-280d1dea-4c55-4841-ad2c-7a7709d6d025';
  $pane = new stdClass();
  $pane->pid = 'new-81b1be7c-e8af-450f-906c-6d77e821cbc7';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_primary_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '81b1be7c-e8af-450f-906c-6d77e821cbc7';
  $display->content['new-81b1be7c-e8af-450f-906c-6d77e821cbc7'] = $pane;
  $display->panels['contentmain'][3] = 'new-81b1be7c-e8af-450f-906c-6d77e821cbc7';
  $pane = new stdClass();
  $pane->pid = 'new-f8af1432-1ac1-4c0b-be31-a397c0fd3894';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f8af1432-1ac1-4c0b-be31-a397c0fd3894';
  $display->content['new-f8af1432-1ac1-4c0b-be31-a397c0fd3894'] = $pane;
  $display->panels['contentmain'][4] = 'new-f8af1432-1ac1-4c0b-be31-a397c0fd3894';
  $pane = new stdClass();
  $pane->pid = 'new-c9a14bd7-4afb-44a4-9efd-8566a4f3173a';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c9a14bd7-4afb-44a4-9efd-8566a4f3173a';
  $display->content['new-c9a14bd7-4afb-44a4-9efd-8566a4f3173a'] = $pane;
  $display->panels['contentmain'][5] = 'new-c9a14bd7-4afb-44a4-9efd-8566a4f3173a';
  $pane = new stdClass();
  $pane->pid = 'new-bac3587e-0c76-4638-a6ec-ef45db3568e4';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phone_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'bac3587e-0c76-4638-a6ec-ef45db3568e4';
  $display->content['new-bac3587e-0c76-4638-a6ec-ef45db3568e4'] = $pane;
  $display->panels['contentmain'][6] = 'new-bac3587e-0c76-4638-a6ec-ef45db3568e4';
  $pane = new stdClass();
  $pane->pid = 'new-036178d3-dc4e-4ade-89aa-c116e675bb7c';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_primary_contact';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '036178d3-dc4e-4ade-89aa-c116e675bb7c';
  $display->content['new-036178d3-dc4e-4ade-89aa-c116e675bb7c'] = $pane;
  $display->panels['contentmain'][7] = 'new-036178d3-dc4e-4ade-89aa-c116e675bb7c';
  $pane = new stdClass();
  $pane->pid = 'new-d8aae7f3-b97e-4236-b5dd-5bdac5c01420';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        0 => 'address',
      ),
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'address-block',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'd8aae7f3-b97e-4236-b5dd-5bdac5c01420';
  $display->content['new-d8aae7f3-b97e-4236-b5dd-5bdac5c01420'] = $pane;
  $display->panels['contentmain'][8] = 'new-d8aae7f3-b97e-4236-b5dd-5bdac5c01420';
  $pane = new stdClass();
  $pane->pid = 'new-f1c1b608-6841-43c4-88f9-8e91e1a27bb2';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_url',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'f1c1b608-6841-43c4-88f9-8e91e1a27bb2';
  $display->content['new-f1c1b608-6841-43c4-88f9-8e91e1a27bb2'] = $pane;
  $display->panels['contentmain'][9] = 'new-f1c1b608-6841-43c4-88f9-8e91e1a27bb2';
  $pane = new stdClass();
  $pane->pid = 'new-7f3f84e5-ce26-4318-beb2-3bfd6751b5cd';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'flippy-flippy_pager-node_type-resource';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f3f84e5-ce26-4318-beb2-3bfd6751b5cd';
  $display->content['new-7f3f84e5-ce26-4318-beb2-3bfd6751b5cd'] = $pane;
  $display->panels['sidebar'][0] = 'new-7f3f84e5-ce26-4318-beb2-3bfd6751b5cd';
  $pane = new stdClass();
  $pane->pid = 'new-27a927c7-5c38-46c0-91f6-2bbbaa659116';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
      'colorbox_node_style' => 'large',
      'colorbox_node_style_first' => '',
      'colorbox_image_style' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '27a927c7-5c38-46c0-91f6-2bbbaa659116';
  $display->content['new-27a927c7-5c38-46c0-91f6-2bbbaa659116'] = $pane;
  $display->panels['sidebar'][1] = 'new-27a927c7-5c38-46c0-91f6-2bbbaa659116';
  $pane = new stdClass();
  $pane->pid = 'new-ea2bb51b-f9e8-46f3-8751-58f601d10f89';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_geolocation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'geofield_leaflet',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'data' => 'full',
      'leaflet_map' => 'OSM Mapnik',
      'height' => '400',
      'popup' => array(
        'show' => 0,
        'text' => '',
      ),
      'zoom' => array(
        'initialZoom' => '8',
        'minZoom' => '3',
        'maxZoom' => '-1',
        'scrollWheelZoom' => 0,
      ),
      'icon' => array(
        'iconType' => 'marker',
        'iconUrl' => '',
        'shadowUrl' => '',
        'html' => '',
        'iconImageStyle' => '',
        'htmlClass' => '',
        'iconSize' => array(
          'x' => '',
          'y' => '',
        ),
        'iconAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'shadowAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'popupAnchor' => array(
          'x' => '',
          'y' => '',
        ),
      ),
      'vector_display' => array(
        'stroke_override' => 0,
        'stroke' => 1,
        'color' => '',
        'weight' => '',
        'opacity' => '',
        'dashArray' => '',
        'fill' => 1,
        'fillColor' => '',
        'fillOpacity' => '',
        'clickable' => 1,
      ),
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ea2bb51b-f9e8-46f3-8751-58f601d10f89';
  $display->content['new-ea2bb51b-f9e8-46f3-8751-58f601d10f89'] = $pane;
  $display->panels['sidebar'][2] = 'new-ea2bb51b-f9e8-46f3-8751-58f601d10f89';
  $pane = new stdClass();
  $pane->pid = 'new-ea3705df-db63-4002-97d7-327a5fa11534';
  $pane->panel = 'sidebar';
  $pane->type = 'rate_widget';
  $pane->subtype = 'rate_widget';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'build_mode' => '1',
    'widget_name' => '1',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Friendlness',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ea3705df-db63-4002-97d7-327a5fa11534';
  $display->content['new-ea3705df-db63-4002-97d7-327a5fa11534'] = $pane;
  $display->panels['sidebar'][3] = 'new-ea3705df-db63-4002-97d7-327a5fa11534';
  $pane = new stdClass();
  $pane->pid = 'new-b788c9d0-80aa-4d75-be23-9ec42848b364';
  $pane->panel = 'sidebar';
  $pane->type = 'rate_widget';
  $pane->subtype = 'rate_widget';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'build_mode' => '1',
    'widget_name' => '2',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Would Recommend',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b788c9d0-80aa-4d75-be23-9ec42848b364';
  $display->content['new-b788c9d0-80aa-4d75-be23-9ec42848b364'] = $pane;
  $display->panels['sidebar'][4] = 'new-b788c9d0-80aa-4d75-be23-9ec42848b364';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-280d1dea-4c55-4841-ad2c-7a7709d6d025';
  $panelizer->display = $display;
  $export['node:resource:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'resource';
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->name = 'node:resource:default:teaser';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a2a968ac-660d-45f9-a686-762061493db4';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:resource:default:teaser';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-87f7b942-e6e4-448a-8163-e65dc7e2f50f';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '87f7b942-e6e4-448a-8163-e65dc7e2f50f';
  $display->content['new-87f7b942-e6e4-448a-8163-e65dc7e2f50f'] = $pane;
  $display->panels['contentmain'][0] = 'new-87f7b942-e6e4-448a-8163-e65dc7e2f50f';
  $pane = new stdClass();
  $pane->pid = 'new-add17eee-7b89-4a80-977a-41cc75fe7b55';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_primary_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'add17eee-7b89-4a80-977a-41cc75fe7b55';
  $display->content['new-add17eee-7b89-4a80-977a-41cc75fe7b55'] = $pane;
  $display->panels['contentmain'][1] = 'new-add17eee-7b89-4a80-977a-41cc75fe7b55';
  $pane = new stdClass();
  $pane->pid = 'new-66ffe7b0-14d0-4bb7-8f51-484825ed8735';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phone_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '66ffe7b0-14d0-4bb7-8f51-484825ed8735';
  $display->content['new-66ffe7b0-14d0-4bb7-8f51-484825ed8735'] = $pane;
  $display->panels['contentmain'][2] = 'new-66ffe7b0-14d0-4bb7-8f51-484825ed8735';
  $pane = new stdClass();
  $pane->pid = 'new-a6a3e40e-00ed-4b26-a9aa-9b7a5f253b9f';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_images';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a6a3e40e-00ed-4b26-a9aa-9b7a5f253b9f';
  $display->content['new-a6a3e40e-00ed-4b26-a9aa-9b7a5f253b9f'] = $pane;
  $display->panels['contentmain'][3] = 'new-a6a3e40e-00ed-4b26-a9aa-9b7a5f253b9f';
  $pane = new stdClass();
  $pane->pid = 'new-db544aa1-e1c4-427d-8325-47ae04aa5619';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'db544aa1-e1c4-427d-8325-47ae04aa5619';
  $display->content['new-db544aa1-e1c4-427d-8325-47ae04aa5619'] = $pane;
  $display->panels['contentmain'][4] = 'new-db544aa1-e1c4-427d-8325-47ae04aa5619';
  $pane = new stdClass();
  $pane->pid = 'new-eb91b243-20bb-45a4-980f-d6a6a58a029a';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_primary_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'eb91b243-20bb-45a4-980f-d6a6a58a029a';
  $display->content['new-eb91b243-20bb-45a4-980f-d6a6a58a029a'] = $pane;
  $display->panels['contentmain'][5] = 'new-eb91b243-20bb-45a4-980f-d6a6a58a029a';
  $pane = new stdClass();
  $pane->pid = 'new-24debb2d-33e8-41f8-9827-640e0d2b1c1d';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => 600,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '24debb2d-33e8-41f8-9827-640e0d2b1c1d';
  $display->content['new-24debb2d-33e8-41f8-9827-640e0d2b1c1d'] = $pane;
  $display->panels['contentmain'][6] = 'new-24debb2d-33e8-41f8-9827-640e0d2b1c1d';
  $pane = new stdClass();
  $pane->pid = 'new-c9b359be-9325-41eb-b9e3-fc610d384177';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'teaser',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c9b359be-9325-41eb-b9e3-fc610d384177';
  $display->content['new-c9b359be-9325-41eb-b9e3-fc610d384177'] = $pane;
  $display->panels['contentmain'][7] = 'new-c9b359be-9325-41eb-b9e3-fc610d384177';
  $pane = new stdClass();
  $pane->pid = 'new-16843f62-f747-4178-8af5-03fdddbc6d50';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_focus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '16843f62-f747-4178-8af5-03fdddbc6d50';
  $display->content['new-16843f62-f747-4178-8af5-03fdddbc6d50'] = $pane;
  $display->panels['sidebar'][0] = 'new-16843f62-f747-4178-8af5-03fdddbc6d50';
  $pane = new stdClass();
  $pane->pid = 'new-f9725212-d4e7-46dd-814d-f78a0fcf63f1';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_keywords';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9725212-d4e7-46dd-814d-f78a0fcf63f1';
  $display->content['new-f9725212-d4e7-46dd-814d-f78a0fcf63f1'] = $pane;
  $display->panels['sidebar'][1] = 'new-f9725212-d4e7-46dd-814d-f78a0fcf63f1';
  $pane = new stdClass();
  $pane->pid = 'new-f13e9c08-2727-46b6-93cc-ca3efd680856';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f13e9c08-2727-46b6-93cc-ca3efd680856';
  $display->content['new-f13e9c08-2727-46b6-93cc-ca3efd680856'] = $pane;
  $display->panels['sidebar'][2] = 'new-f13e9c08-2727-46b6-93cc-ca3efd680856';
  $pane = new stdClass();
  $pane->pid = 'new-a8b6c180-5ae1-40c5-ba37-65ab73dfac09';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_geolocation';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a8b6c180-5ae1-40c5-ba37-65ab73dfac09';
  $display->content['new-a8b6c180-5ae1-40c5-ba37-65ab73dfac09'] = $pane;
  $display->panels['sidebar'][3] = 'new-a8b6c180-5ae1-40c5-ba37-65ab73dfac09';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87f7b942-e6e4-448a-8163-e65dc7e2f50f';
  $panelizer->display = $display;
  $export['node:resource:default:teaser'] = $panelizer;

  return $export;
}
