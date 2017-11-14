<?php
/**
 * @file
 * cbu_components.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cbu_components_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-social-media-links_facebook:https://www.facebook.com/CapeBretonUniversity.
  $menu_links['menu-social-media-links_facebook:https://www.facebook.com/CapeBretonUniversity'] = array(
    'menu_name' => 'menu-social-media-links',
    'link_path' => 'https://www.facebook.com/CapeBretonUniversity',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => 'Facebook',
      ),
      'identifier' => 'menu-social-media-links_facebook:https://www.facebook.com/CapeBretonUniversity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-links_instagram:https://www.instagram.com/cbuniversity/.
  $menu_links['menu-social-media-links_instagram:https://www.instagram.com/cbuniversity/'] = array(
    'menu_name' => 'menu-social-media-links',
    'link_path' => 'https://www.instagram.com/cbuniversity/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(
        'title' => 'Instagram',
      ),
      'identifier' => 'menu-social-media-links_instagram:https://www.instagram.com/cbuniversity/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-links_linkedin:https://www.linkedin.com/organization/874667.
  $menu_links['menu-social-media-links_linkedin:https://www.linkedin.com/organization/874667'] = array(
    'menu_name' => 'menu-social-media-links',
    'link_path' => 'https://www.linkedin.com/organization/874667',
    'router_path' => '',
    'link_title' => 'Linkedin',
    'options' => array(
      'attributes' => array(
        'title' => 'Linkedin',
      ),
      'identifier' => 'menu-social-media-links_linkedin:https://www.linkedin.com/organization/874667',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-links_snapchat:https://www.snapchat.com/add/cbuniversity.
  $menu_links['menu-social-media-links_snapchat:https://www.snapchat.com/add/cbuniversity'] = array(
    'menu_name' => 'menu-social-media-links',
    'link_path' => 'https://www.snapchat.com/add/cbuniversity',
    'router_path' => '',
    'link_title' => 'Snapchat',
    'options' => array(
      'attributes' => array(
        'title' => 'Snapchat',
      ),
      'identifier' => 'menu-social-media-links_snapchat:https://www.snapchat.com/add/cbuniversity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-links_twitter:https://twitter.com/cbuniversity.
  $menu_links['menu-social-media-links_twitter:https://twitter.com/cbuniversity'] = array(
    'menu_name' => 'menu-social-media-links',
    'link_path' => 'https://twitter.com/cbuniversity',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => 'Twitter',
      ),
      'identifier' => 'menu-social-media-links_twitter:https://twitter.com/cbuniversity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-links_youtube:https://www.youtube.com/user/capebretonu.
  $menu_links['menu-social-media-links_youtube:https://www.youtube.com/user/capebretonu'] = array(
    'menu_name' => 'menu-social-media-links',
    'link_path' => 'https://www.youtube.com/user/capebretonu',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'attributes' => array(
        'title' => 'Youtube',
      ),
      'identifier' => 'menu-social-media-links_youtube:https://www.youtube.com/user/capebretonu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Instagram');
  t('Linkedin');
  t('Snapchat');
  t('Twitter');
  t('Youtube');

  return $menu_links;
}
