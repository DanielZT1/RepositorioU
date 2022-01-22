<?php
$user = "root";
$pass = "";
$host = "localhost";
$connection = mysqli_connect($host, $user, $pass);
$datab = "actividad7";
$db = mysqli_select_db($connection,$datab);
if (!$db) {
 echo "Error: ";
}