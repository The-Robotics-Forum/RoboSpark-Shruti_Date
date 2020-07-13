<?php
$con = mysqli_connect('localhost','root',"",'StudentDB');
if(!$con)
{
    echo "Connection Error".mysqli_connect_error();
}
else{
    echo "";
}