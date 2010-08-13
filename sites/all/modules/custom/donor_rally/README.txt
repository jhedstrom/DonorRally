// $Id$

Introduction
============
The Competitive Drive module allows teams/groups to "compete" in a food drive.
Each team has donation goals for the competition (cash ($), food (pounds), and
volunteer shifts). Online donations for each team are made through a DIA
(Democracy In Action) donation page; this module fetches the total online
donation values for each competing team by querying DIA's Salsa API to
retrieve the results from a Salsa Report created specifically for this
purpose.

Salsa report
============
The Salsa report should look like this.

Type: Aggregate report.
Reporting on objects: donation,supporter

Columns:
           Field          Label          Function     Group By?
           -------------  -------------  -----------  ---------
  Group By Tracking Code  tracking_code  No Function  checked
           Amount         amount         No Function

Conditions:
  Field          Operator or Function  Value
  -------------  --------------------  ---------
  Tracking Code  Contains              FFTB2010-

The value FFTB2010- should match COMPETITIVE_DRIVE_TRACKING_CODE_PREFIX.


How it works
============
Team Coordinator (TC): A Drupal user who owns a Team-type node. TCs
register for an account using Content Profile on the registration form.
This creates a Team node, unpublished, already associated with the TC.

Team: A CCK content type with these fields:
+ size: Number of people on the team
+ logo: Logo (picture) for the team
+ cash: Cached data of online donations from Salsa
+ food: Unused
+ volunteer: Unused
+ offline_cash: Cash donated (offline)
+ offline_food: Food donated
+ offline_volunteer: Volunteer shifts 
+ total_points: Total *points* for this team (recalculated with every
  online donations refresh from Salsa)
+ points_per_capita: Points for this team divided by 'size'. Also re-
  calculated upon Salsa refresh
+ Various other fields that are mostly/completely for administrator use
  (that is, not used in code), such as campaign coordinator and firm
  information. (A firm is mostly synonymous with team as far as we're
  concerned; but the idea is that a bunch of (e.g.) law firms participate
  in the competition, each as one competition team.

total_points and points_per_capita exist primarily as SELECT targets for
Views (the Leaderboard views); the total_points field is also used when
producing the team's statistics and thermometer on a Team Page.

Team Pages
----------
These are node pages with two embedded Block Views:
  * Team Logo: The team's logo, imagecache'd to the right size
  * Team Blog: Content from Team Blog Post as well as Admin Blog Post nodes

And some blocks provided by competitive_drive.module:
  * Thermometer (visually shows team's progress toward its goal)
  * Statistics table (shows team's progress numerically)
  * Buttons, which serve as to emphasize important links
    - Donate Now: Links to DIA donation page, using the team's Tracking Code
    - Leaderboard: Links to the app's leaderboard page
    - Team Dashboard: Only present for the team's leader. Links to /user.


Contexts
--------
Contexts are used (with a custom 'not team page and not leaderboard' context
condition) to set up different page layouts and blocks for the site's sections.
