<?php
header("Access-Control-Allow-Headers: *");
$data = json_decode(file_get_contents('php://input'), true);
print_r($data);
$name = null;
$name = $_POST['username'];
echo $name;

