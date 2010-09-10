<?php
// $Id$
$odd = FALSE;
?>
<table class="donor-rally-team-stats">
  <thead>
    <tr class="even">
      <th>
      </th>
      <th>
        <?php print t('Current'); ?>
      </th>
      <th>
        <?php print t('Goal'); ?>
      </th>
    </tr>
  </thead>
  <tbody>
    <?php foreach ($categories as $type => $info):
      $label = $info['label'];
      $odd = !$odd;
    ?>
    <tr class="<?php print $odd ? 'odd' : 'even'; ?>">
      <th>
        <?php print $label; ?>
      </th>
      <td>
        <?php print ${$type . '_raw_view'}; ?> 
      </td>
      <td>
        <?php print ${$type . '_raw_goal_view'}; ?> 
      </td>
    </tr>
    <?php endforeach; ?>
  </tbody>
</table>
