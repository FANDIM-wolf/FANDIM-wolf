<?php 

include_once("core.php");

$dbh = new PDO('mysql:host=localhost;dbname=club_redrihno',"Mikhail", "elkin");

$json_array = array();
foreach($dbh->query('SELECT * from clients') as $row) {
		//echo $row;
        $json_array[] = $row;
    }

echo json_encode($json_array);