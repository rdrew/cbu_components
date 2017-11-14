<?php
/**
 * @file
 * cbu_components.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cbu_components_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social-media-links.
  $menus['menu-social-media-links'] = array(
    'menu_name' => 'menu-social-media-links',
    'title' => 'Social Media Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Social Media Links');

  return $menus;
}
