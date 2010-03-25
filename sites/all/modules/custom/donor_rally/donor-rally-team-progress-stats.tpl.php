<table class="competitive-drive-team-stats">
  <thead>
    <tr>
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
    <tr class="odd">
      <th>
        <?php print t('Cash ($)'); ?>
      </th>
      <td>
        <?php print $cash_raw_view; ?> 
      </td>
      <td>
        <?php print $cash_raw_goal_view; ?> 
      </td>
    </tr>
    <tr class="even">
      <th>
        <?php print t('Food (lbs)'); ?>
      </th>
      <td>
        <?php print $food_raw_view; ?> 
      </td>
      <td>
        <?php print $food_raw_goal_view; ?> 
      </td>
    </tr>
    <tr class="odd">
      <th>
        <?php print t('Volunteer shifts'); ?>
      </th>
      <td>
        <?php print $volunteer_raw_view; ?> 
      </td>
      <td>
        <?php print $volunteer_raw_goal_view; ?> 
      </td>
    </tr>
    <tr class="even last">
      <th>
        <?php print t('Total points'); ?>
      </th>
      <td>
        <?php print $total_view; ?> 
      </td>
      <td>
        <?php print $total_goal_view; ?> 
      </td>
    </tr>
  </tbody>
</table>
