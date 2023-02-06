--TEST--
test1() Basic test
--EXTENSIONS--
moon
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension moon is loaded and working!
NULL
