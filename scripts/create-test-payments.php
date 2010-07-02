#!/usr/bin/php
<?php

chdir('../../../../..');
require_once './includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$payment = array(
  'gateway' => 'paypal',
  'uid' => 0,
  'nid' => 1,
  'module' => NULL,
  'currency' => 'USD',
);

for ($i = 0; $i < 50; $i++) {
  $payment['timestamp'] =  time() - mt_rand(0, 225000);
  $payment['payer_email'] = user_password() . '@opensourcery.com';
  $payment['amount'] = mt_rand(50, 25000);
  drupal_write_record('simple_payment', $payment);
}
