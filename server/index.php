<?php 
// GLOBAL : work with session

echo "Server Local ";
echo $_SERVER['REMOTE_ADDR'];
$name = "miki";
session_start();
$_SESSION[$name] = 'Mikhail';
$_SESSION['arr']= [1,'2','test'];

print_r($_SESSION);

unset($_SESSION['name']);

print_r($_SESSION);

?>


