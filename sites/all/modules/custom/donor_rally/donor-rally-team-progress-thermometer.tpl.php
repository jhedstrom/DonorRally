<?php
// $Id$
  /**
   * @file
   * Progress thermometer
   *
   * Variables:
   *   $total_raw_goal_view
   *     Formatted number for total goal.
   *   $total_raw_view
   *     Formatted number for current total.
   */
?>
<div class="donor-rally-thermometer">
  <span class="thermometer-goal" style="top: <?php print $goal_top; ?>px;">Goal: <?php print $total_raw_goal_view; ?></span>
  <span class="thermometer-points" style="top: <?php print $points_top; ?>px;">Current: <?php print $total_raw_view; ?></span>
  <div class="thermometer-graphics">
    <?php if (!$success): ?>
      <span class="thermometer-empty-top" style="top: <?php print $empty_top_top; ?>px;"></span>
      <span class="thermometer-empty-middle" style="top: <?php print $empty_middle_top; ?>px; height: <?php print $empty_height; ?>px;"></span>
      <span class="thermometer-empty-bottom" style="top: <?php print $empty_bottom_top; ?>px;"></span>
    <?php endif; ?>
    <span class="thermometer-filled-top" style="top: <?php print $filled_top_top; ?>px;"></span>
    <span class="thermometer-filled-middle" style="top: <?php print $filled_middle_top; ?>px; height: <?php print $filled_height; ?>px;"></span>
    <span class="thermometer-filled-bottom" style="top: <?php print $filled_bottom_top; ?>px;"></span>
  </div>
</div>
<?php if (isset($edit_link)): ?>
<div><?php print $edit_link; ?></div>
<?php endif; ?>
