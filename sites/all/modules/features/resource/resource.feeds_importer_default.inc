<?php

/**
 * @file
 * resource.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function resource_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'resource_content';
  $feeds_importer->config = array(
    'name' => 'Resource Content',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'nid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Address - Administrative area',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Address - Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Address - Locality',
            'target' => 'field_address:locality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Address - Postal code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Address - Premise',
            'target' => 'field_address:premise',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Address - Sub Premise',
            'target' => 'field_address:sub_premise',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Address - Thoroughfare',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Focus',
            'target' => 'field_focus',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'Keywords',
            'target' => 'field_keywords',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'Links',
            'target' => 'field_links:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Primary Contact Name',
            'target' => 'field_primary_contact',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Primary Services',
            'target' => 'field_primary_services',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Phone Number',
            'target' => 'field_telephone_number_text',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'resource',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['resource_content'] = $feeds_importer;

  return $export;
}
