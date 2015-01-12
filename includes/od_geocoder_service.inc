<?php

/**
 * Generate download file url hash
 */
function _odgs_get_file_hash($fid) {
  return md5($fid);
}

/**
 * Get array of adresses from source file
 */
function _odgs_get_file_addresses($fid, $column = 1, $delim = 0) {
  $file = file_load($fid);
  $file_path = drupal_realpath($file->uri);

  switch ($file->filemime) {
    case 'text/csv':
      $delims = array(';',',');
      return _odgs_csv2array($file_path, $delims[$delim], $column);
  }

  return false;
}

/**
 * Convert csv file to array of addresess
 */
function _odgs_csv2array($file_path, $delimiter = ';', $column = 1) {
  if (!file_exists($file_path))
    return;

  //force encodie to utf
  $ODDetectEncoding = od_detect_encoding_get_detector();
  $file_charset = $ODDetectEncoding->guessFileEncoding($file_path);
  $is_encode = $file_charset != $ODDetectEncoding::ENC_UTF8;


  $res = '';
  $size = filesize($file_path) + 1;
  $file = fopen($file_path, 'r');

  $res = array();
  $column = $column-1;
  while ($line = @fgets($file, $size)){

  if ($is_encode){
      $line = $ODDetectEncoding->convertString($line, $ODDetectEncoding::ENC_UTF8, $file_charset);
  }
  $row = explode($delimiter,$line);

  if (isset($row[$column])) {
      $res[] = $row[$column];
    }
  }

  fclose($file);
  return $res;
}


