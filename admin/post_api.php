<?php
header("Access-Control-Allow-Headers: *");
include_once("core.php");




$pdo = new PDO('mysql:host=localhost;dbname=CRUDJSPHP',"Mikhail", "elkin");

$postdata = file_get_contents("php://input");


if(isset($postdata) && !empty($postdata)){
    print_r($postdata);


    $request = json_decode($postdata);
    print_r($request);
    $name_from_req =  $request->name;
    $email_from_req = $request->email;

    $user = [
        'name'=> $name_from_req,
        'email' => $email_from_req
    ];

    echo $name_from_req."+".$email_from_req;
    
    $sql = "INSERT INTO students (name, email) VALUES (:name, :email)";
    $stmt= $pdo->prepare($sql);
    $stmt->execute($user);


}