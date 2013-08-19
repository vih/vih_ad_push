<?php
/**
 * @file
 * vih_ad_push.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_ad_push_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_ad_push_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_ad_push_node_info() {
  $items = array(
    'vih_ad_push' => array(
      'name' => t('Ad Push'),
      'base' => 'node_content',
      'description' => t('Use <em>Ad push</em> for something that needs to be pushed for the frontpage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
