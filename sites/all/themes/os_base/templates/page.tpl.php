<?php // $Id: page.tpl.php 897 2009-12-31 20:46:29Z jhedstrom $ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>">
<head>
	<title><?php print $head_title ?></title>
	<meta http-equiv="content-language" content="<?php print $language->language ?>" />
	<?php print $meta; ?>
  <?php print $head; ?>
  <?php print $styles; ?>
  <!--[if lte IE 7]>
    <link rel="stylesheet" href="<?php print $path; ?>blueprint/blueprint/ie.css" type="text/css" media="screen, projection">
  	<link href="<?php print $path; ?>css/ie.css" rel="stylesheet"  type="text/css"  media="screen, projection" />
  <![endif]-->  
  <!--[if lte IE 6]>
  	<link href="<?php print $path; ?>css/ie6.css" rel="stylesheet"  type="text/css"  media="screen, projection" />
  <![endif]-->  
</head>

<body class="<?php print $body_classes; ?>">

<div class="container">
  <div id="header">
    <a title="San Francisco Food Bank" href="http://sffoodbank.org" target="_blank"><span class="logo-sffb">San Francisco Food Bank</span></a>
    <a title="Food from the Bar" href="http://foodfromthebar.com" target="_blank"><span class="logo-fftb">Food from the Bar</span></a>
    <a title="Bar Association of San Francisco" href="http://sfbar.org" target="_blank"><span class="logo-basf">Bar Association of San Francisco</span></a>
    <h1 id="logo">
      <a title="<?php print $site_name; ?><?php if ($site_slogan != '') print ' &ndash; '. $site_slogan; ?>" href="<?php print url(); ?>"><?php print $site_name; ?><?php if ($site_slogan != '') print ' &ndash; '. $site_slogan; ?></a>
    </h1>
    <?php print $header; ?>
  </div>
  <?php if (isset($primary_links) && !empty($primary_links)) : ?>
    <div id="primary-nav">
      <?php print theme('links', $primary_links, array('id' => 'nav', 'class' => 'links')) ?>
    </div>
  <?php endif; ?>
  <?php if (isset($secondary_links) && !empty($secondary_links)) : ?>
    <?php print theme('links', $secondary_links, array('id' => 'subnav', 'class' => 'links')) ?>
  <?php endif; ?>

  <?php
    /* On team landing pages, print the team name above all the content. */
    if ($section_title == 'team_page') {
      print "<div class='team-name'><h2>$title</h2></div>";
    }
  ?>

  <?php if ($left): ?>
    <div class="<?php print $left_classes; ?>"><?php print $left; ?></div>
  <?php endif ?>
  
  <div class="<?php print $center_classes; ?>">
    <div class="col-inner">
    <?php
      if ($breadcrumb != '') {
        print $breadcrumb;
      }

      if ($tabs != '') {
        print '<div class="tabs">'. $tabs .'</div>';
      }

      if ($messages != '') {
        print '<div id="messages">'. $messages .'</div>';
      }
      
      if ($title != '' && $section_title != 'team_page') {
        print '<h2>'. $title .'</h2>';
      }      

      print $help; // Drupal already wraps this one in a class      
    ?>

    <?php if ($content_top): ?>
    <div id="content-top">
      <?php print $content_top; ?>
    </div>
    <?php endif; ?>

    <div id="content-area">
      <?php print $content; ?>
    </div>

    <?php if ($content_bottom): ?>
    <div id="content-bottom">
      <?php print $content_bottom; ?>
    </div>
    <?php endif; ?>

    <?php
      print $feed_icons;
    ?>

    <?php if ($footer_message | $footer): ?>
      <div id="footer" class="clear">
        <?php if ($footer): ?>
          <?php print $footer; ?>
        <?php endif; ?>
        <?php if ($footer_message): ?>
          <div id="footer-message"><?php print $footer_message; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    </div><?php /* .col-inner */ ?>
  </div>

  <?php if ($right): ?>
    <div class="<?php print $right_classes; ?>"><?php print $right; ?></div>
  <?php endif ?>

  <?php if ($absolute_footer): ?>
    <div id="absolute-footer" class="clear">
      <?php print $absolute_footer; ?>
    </div>
  <?php endif; ?>

  <?php print $scripts ?>
  <?php print $closure; ?>

</div>

</body>
</html>
