<?php 

function findGreatest($num1, $num2, $num3) { 
    return max($num1, $num2, $num3); 
} 
  
$num1 = readline("Enter the first number: "); 
$num2 = readline("Enter the second number: "); 
$num3 = readline("Enter the third number: "); 

$greatest = findGreatest($num1, $num2, $num3); 

echo "The greatest number is: $greatest"; 

?>