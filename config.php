<?php
$conn = new mysqli ("localhost", "root", "","sensorinf");
if($conn -> connect_errno){
    echo("error". $conn -> connect_errno);
}
?>