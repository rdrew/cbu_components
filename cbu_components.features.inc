<?php
/**
 * @file
 * cbu_components.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cbu_components_node_info() {
  $items = array(
    'cbu_landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function cbu_components_paragraphs_info() {
  $items = array(
    'cbu_slideshow_image' => array(
      'name' => 'Slideshow Image',
      'bundle' => 'cbu_slideshow_image',
      'locked' => '1',
    ),
  );
  return $items;
}
