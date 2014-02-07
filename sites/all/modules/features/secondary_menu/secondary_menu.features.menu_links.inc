<?php
/**
 * @file
 * secondary_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function secondary_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-secondary-menu_entertainment:taxonomy/term/1
  $menu_links['menu-secondary-menu_entertainment:taxonomy/term/1'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Entertainment',
    'options' => array(
      'attributes' => array(
        'title' => 'Articles tagged as entertainment are placed here.',
      ),
      'identifier' => 'menu-secondary-menu_entertainment:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_horoscope:taxonomy/term/9
  $menu_links['menu-secondary-menu_horoscope:taxonomy/term/9'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Horoscope',
    'options' => array(
      'attributes' => array(
        'title' => 'News about horoscope are placed here',
      ),
      'identifier' => 'menu-secondary-menu_horoscope:taxonomy/term/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_living:taxonomy/term/4
  $menu_links['menu-secondary-menu_living:taxonomy/term/4'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Living',
    'options' => array(
      'attributes' => array(
        'title' => '"Living" news are placed here :P',
      ),
      'identifier' => 'menu-secondary-menu_living:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_money:taxonomy/term/8
  $menu_links['menu-secondary-menu_money:taxonomy/term/8'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Money',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_money:taxonomy/term/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_politics:taxonomy/term/5
  $menu_links['menu-secondary-menu_politics:taxonomy/term/5'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politics',
    'options' => array(
      'attributes' => array(
        'title' => 'Political news are placed here',
      ),
      'identifier' => 'menu-secondary-menu_politics:taxonomy/term/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_showbiz:taxonomy/term/6
  $menu_links['menu-secondary-menu_showbiz:taxonomy/term/6'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Showbiz',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_showbiz:taxonomy/term/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_sports:taxonomy/term/3
  $menu_links['menu-secondary-menu_sports:taxonomy/term/3'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sports',
    'options' => array(
      'attributes' => array(
        'title' => 'Sports news are placed here',
      ),
      'identifier' => 'menu-secondary-menu_sports:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_tech:taxonomy/term/2
  $menu_links['menu-secondary-menu_tech:taxonomy/term/2'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tech',
    'options' => array(
      'attributes' => array(
        'title' => 'Tech news are placed here',
      ),
      'identifier' => 'menu-secondary-menu_tech:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_travel:taxonomy/term/7
  $menu_links['menu-secondary-menu_travel:taxonomy/term/7'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Travel',
    'options' => array(
      'attributes' => array(
        'title' => 'Travel news are placed here',
      ),
      'identifier' => 'menu-secondary-menu_travel:taxonomy/term/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Entertainment');
  t('Horoscope');
  t('Living');
  t('Money');
  t('Politics');
  t('Showbiz');
  t('Sports');
  t('Tech');
  t('Travel');


  return $menu_links;
}
