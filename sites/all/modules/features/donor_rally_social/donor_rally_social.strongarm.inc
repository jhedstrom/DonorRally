<?php

/**
 * Implementation of hook_strongarm().
 */
function donor_rally_social_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_ad_footer';
  $strongarm->value = ' ';

  $export['forward_ad_footer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_admin_blog_post';
  $strongarm->value = FALSE;

  $export['forward_display_admin_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_comments';
  $strongarm->value = 0;

  $export['forward_display_comments'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_nodes';
  $strongarm->value = 0;

  $export['forward_display_nodes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_nonnode';
  $strongarm->value = 0;

  $export['forward_display_nonnode'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_page';
  $strongarm->value = FALSE;

  $export['forward_display_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_team';
  $strongarm->value = TRUE;

  $export['forward_display_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_team_blog_post';
  $strongarm->value = FALSE;

  $export['forward_display_team_blog_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_teasers';
  $strongarm->value = 0;

  $export['forward_display_teasers'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_dynamic_block';
  $strongarm->value = 'none';

  $export['forward_dynamic_block'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_filter_html';
  $strongarm->value = 0;

  $export['forward_filter_html'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_filter_tags';
  $strongarm->value = 'p,br,em,strong,cite,code,ul,ol,li,dl,dt,dd';

  $export['forward_filter_tags'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_flood_control';
  $strongarm->value = '25';

  $export['forward_flood_control'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_flood_error';
  $strongarm->value = 'You can\'t send more than !number messages per hour. Please try again later.';

  $export['forward_flood_error'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_footer';
  $strongarm->value = ' ';

  $export['forward_footer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_form_type';
  $strongarm->value = 'link';

  $export['forward_form_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_full_body';
  $strongarm->value = 0;

  $export['forward_full_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_header_image';
  $strongarm->value = '';

  $export['forward_header_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_instructions';
  $strongarm->value = '<p>Thank you for your interest in spreading the word about !site.</p><p>NOTE: We only request your email address so that the person you are recommending the page to knows that you wanted them to see it, and that it is not junk mail. We do not capture any email address.</p>';

  $export['forward_instructions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_link_style';
  $strongarm->value = '0';

  $export['forward_link_style'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_link_title';
  $strongarm->value = 'Email this !type';

  $export['forward_link_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_link_type';
  $strongarm->value = 0;

  $export['forward_link_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_message';
  $strongarm->value = '1';

  $export['forward_message'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_types';
  $strongarm->value = array();

  $export['service_links_category_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_domain_redirect';
  $strongarm->value = '';

  $export['service_links_domain_redirect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_in_links';
  $strongarm->value = '2';

  $export['service_links_in_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_in_node';
  $strongarm->value = '0';

  $export['service_links_in_node'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_new_window';
  $strongarm->value = '1';

  $export['service_links_new_window'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_node_types';
  $strongarm->value = array(
    'team' => 'team',
    'admin_blog_post' => 0,
    'page' => 0,
    'team_blog_post' => 0,
  );

  $export['service_links_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_short_links_type';
  $strongarm->value = '2';

  $export['service_links_short_links_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_short_links_use';
  $strongarm->value = '2';

  $export['service_links_short_links_use'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_show';
  $strongarm->value = array(
    'forward' => 1,
    'delicious' => 0,
    'digg' => 0,
    'stumbleupon' => 0,
    'twitter' => 1,
    'pingthis' => 0,
    'propeller' => 0,
    'reddit' => 0,
    'slashdot' => 0,
    'magnoliacom' => 0,
    'newsvine' => 0,
    'furl' => 0,
    'facebook' => 1,
    'myspace' => 0,
    'google' => 0,
    'yahoo' => 0,
    'buzz' => 0,
    'linkedin' => 0,
    'technorati' => 0,
    'icerocket' => 0,
    'misterwong' => 0,
  );

  $export['service_links_show'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_style';
  $strongarm->value = '1';

  $export['service_links_style'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight';
  $strongarm->value = array(
    'forward' => '-95',
    'delicious' => '-99',
    'digg' => '-98',
    'stumbleupon' => '-82',
    'twitter' => '-96',
    'pingthis' => '-86',
    'propeller' => '-85',
    'reddit' => '-84',
    'slashdot' => '-83',
    'magnoliacom' => '-90',
    'newsvine' => '-87',
    'furl' => '-94',
    'facebook' => '-97',
    'myspace' => '-88',
    'google' => '-93',
    'yahoo' => '-80',
    'buzz' => '-100',
    'linkedin' => '-91',
    'technorati' => '-81',
    'icerocket' => '-92',
    'misterwong' => '-89',
  );

  $export['service_links_weight'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_generate_token';
  $strongarm->value = 1;

  $export['shorten_generate_token'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_invisible_services';
  $strongarm->value = array(
    'cli.gs' => 0,
    'hex.io' => 0,
    'idek.net' => 0,
    'is.gd' => 0,
    'lin.cr' => 0,
    'Metamark' => 0,
    'PeekURL' => 0,
    'PiURL' => 0,
    'qr.cx' => 0,
    'redir.ec' => 0,
    'retwt.me' => 0,
    'ri.ms' => 0,
    'short.ie' => 0,
    'th8.us' => 0,
    'This site' => 0,
    'TinyURL' => 0,
    'tr.im' => 0,
    'urlb.at' => 0,
    'urlCover' => 0,
    'urlShort' => 0,
  );

  $export['shorten_invisible_services'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_method';
  $strongarm->value = 'curl';

  $export['shorten_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_service';
  $strongarm->value = 'This site';

  $export['shorten_service'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_service_backup';
  $strongarm->value = 'is.gd';

  $export['shorten_service_backup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_use_alias';
  $strongarm->value = 1;

  $export['shorten_use_alias'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_www';
  $strongarm->value = 0;

  $export['shorten_www'] = $strongarm;
  return $export;
}
