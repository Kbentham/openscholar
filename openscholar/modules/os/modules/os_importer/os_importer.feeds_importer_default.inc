<?php
/**
 * @file
 * os_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function os_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'os_documents';
  $feeds_importer->config = array(
    'name' => 'OS Documents',
    'description' => 'Import documents from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'ics csv',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'OsImporterNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Files',
            'target' => 'file',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Terms',
            'target' => 'og_vocab',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'content_type' => 'book',
        'file_field' => 'field_upload',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['os_documents'] = $feeds_importer;

  return $export;
}
