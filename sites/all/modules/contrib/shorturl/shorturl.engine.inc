<?php
//$Id: shorturl.engine.inc,v 1.1.2.1 2009/08/08 06:52:50 inadarei Exp $
/**
* @File shorturl.engine.inc
*   the URL shortening "engine" with all the math trickery
*/

/**
* Calculate factorial of a number
*/
function shorturl_nfact($n)
{
  if ($n == 0)
  {
    return 1;
  }
  else
  {
    return $n * nfact($n - 1);
  }
}

/**
* Convert $var from (10) base notation to $base base notation.
*/
function shorturl_base_encode($var, $base)	{	// return string, accept two integers
    if ($var < $base)	{ // see if it's time to return
        return $var;
    }
    else	{
        return shorturl_base_encode(floor($var/$base), $base) .  "-" . ($var % $base);	// continue
    }
}


function shorturl_decode_url($url)	{	
    $num = 0;
    $mapping = shorturl_base_decode_mapping();
    $base = sizeof($mapping);
    
    //There's just no chance encoded URL will ever be too long so if 
    //we get something like that - somebody is messing with us trying
    //to eat up CPU cycles on decoding or cause some other kind of overflow. 
    if (strlen($url)>15) return -1;
    
    $seq = str_split ($url);    
    if (!is_array($seq) || !(sizeof($seq)>0)) return -1;
    
    $seq = array_reverse(str_split ($url));
    
    $i = 0;
    foreach ($seq as $c) {
      if (isset($mapping[$c])) {
        $val = (int)$mapping[$c];
        $num += $val * pow($base, $i);    
        $i++;
      }
    }
    
    return $num;
}

/**
* Encode number (index of the URL) into url using alpha-numeric mapping
*/
function shorturl_encode_url ($var) {
  
  $mapping = shorturl_base_encode_mapping();
  $var = shorturl_base_encode($var, sizeof($mapping));
  $arr = split('-', $var);
  
  if (empty($arr)) { return $mapping[0]; }
  if (!is_array($arr)) { $arr = array($arr); }
  
  $new_num = "";
  foreach ($arr as $pos)  {
    $new_num .= $mapping[(int)trim($pos)];
  }
  
  return $new_num;
  
}

function shorturl_base_decode_mapping() {
  return array_flip(shorturl_base_encode_mapping());
}

/**
* The very first 4-char number is 238328
* The very first 3-char number is 3844
*/
function shorturl_base_encode_mapping() {
  return array(
  'q','l','i','3','O','c','x','a','C','1','r','Y',
  'g','4','2','T','b','j','D','W','Z','B','K','k',
  '0','8','9','X','I','5','N','R','n','Q','U','P',
  'E','m','y','V','p','d','v','w','f','G','7','A',
  'o','s','H','6','F','L','M','e','t','z','u','J',  
  'S','h'   
  );
}
