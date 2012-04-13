<?php
/**
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "os_basetheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "os_basetheme".
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
function os_basetheme_preprocess_html(&$vars) {
  global $theme_key;

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function os_basetheme_process_html(&$vars) {
}
// */


/**
 * Preprocess variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function os_basetheme_preprocess_page(&$vars) {
}
function os_basetheme_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function os_basetheme_preprocess_node(&$vars) {
}
function os_basetheme_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function os_basetheme_preprocess_comment(&$vars) {
}
function os_basetheme_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function os_basetheme_preprocess_block(&$vars) {
}
function os_basetheme_process_block(&$vars) {
}
// */