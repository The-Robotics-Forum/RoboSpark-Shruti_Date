<?php
include("db.php");

if(isset ($_POST['submit']))
{
    $studentID = $_POST['stud_id'];

    $query = "SELECT * FROM `studentdb` WHERE `stud_id` = $studentID";
    
    $run = mysqli_query($con,$query);

    $row = mysqli_num_rows($run);
    
    if($row==1){
        $user_info = mysqli_fetch_assoc($run);
        echo "<br>";

        echo "<b>StudentID:</b>".$user_info['stud_id'];
        echo "<br>";
        echo "<b>Name:</b>".$user_info['stud_name'];
        echo "<br>";
        echo "<b>Branch:</b>".$user_info['branch'];
        echo "<br>";
        echo "<b>CGPA:</b>".$user_info['CGPA'];
        echo "<br>";
    }
    else{
        echo "<br>";
        echo "Enter Valid StudentID";
    }

}
?>