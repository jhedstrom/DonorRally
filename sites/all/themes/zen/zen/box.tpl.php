<?php
// $Id: box.tpl.php 511 2008-12-01 19:51:25Z jhedstrom $

/**
 * @file box.tpl.php
 *
 * Theme implementation to display a box.
 *
 * Available variables:
 * - $title: Box title.
 * - $content: Box content.
 *
 * @see template_preprocess()
 */
?>
<div class="box"><div class="box-inner">

  <?php if ($title): ?>
    <h2 class="title"><?php print $title; ?></h2>
  <?php endif; ?>

  <div class="content">
    <?php print $content; ?>
  </div>

</div></div> <!-- /box-inner, /box -->
