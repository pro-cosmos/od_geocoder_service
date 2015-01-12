<?php

class odMongoDB {

  protected static $_instance;
  public static $conn;
  public static $db;
  public static $coll;

  private function __construct() {
    if (is_null(self::$conn)) {
      gb_common_module('config');
      $options = gb_common_config('mongodb_settings')->options->getValue();

      self::$conn = new MongoClient(
              gb_common_config('mongodb_settings')->uri->asString('mongodb://localhost:27017/od'),
              $options);

      self::$db = self::$conn->selectDB($options['db']);

    }
  }

  static public function init($collection) {
    if (is_null(self::$_instance)) {
      self::$_instance = new self();
    }
    // select current collection
    self::$coll = self::$db->selectCollection($collection);

    return self::$_instance;
  }


  /**
   * @inheritdoc
   *
   * @param array $data Данные
   * @return void
   */
  public function insert($data) {
    self::prepareData($data);
    //safety insert
    try {
      self::$coll->insert($data);
    }
    catch (Exception $e) {
      watchdog_exception(__FILE__, $e);
    }
  }

  /**
   *  Update obj
   */
  public function update($id, $data) {
    self::prepareData($data);
    self::$coll->update(array("$id" => $data[$id]), $data);
  }

  /**
   * @inheritdoc
   */
  public function select($find = array(), $limit = 0) {
    $find = empty($find)? array(): $find;

    if ($limit == 1)
      return self::$coll->findOne($find);
    else
      $cursor = self::$coll->find($find);

    if ($limit > 0) {
      $cursor->limit($limit);
    }
    return $cursor;
  }


    /**
   * @inheritdoc
   */
  public function findOne($find) {
    return self::$coll->findOne($find);
  }


  public function delete($filter = array(), $limit = 0, $options = array()) {
    if ($limit == 1)
      $options['justOne'] = TRUE;

    self::$coll->remove($filter, $options);
    //array('fsync' => TRUE, 'justOne' => TRUE)
  }


  static private function prepareData(&$data) {
    foreach ($data as $k => $v) {
      if (strpos($k, 'date_') === 0) {
        $data[$k] = new MongoDate($v);
      }
    }
  }

}