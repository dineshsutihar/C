#include<stdio.h>

// In this program i am going to develop a program to calculate factioal using Recursion.

// idea to complete any recursion 
// 1. Base case : here we have to define the base case to stop the recursion.
// 2. Recursive case : here we have to define the recursive case to call the function again and again.

// here we have to calculate the factorial of the number using recursion.


int fact(int num){
    if (num<=1)
    {
        return 1;
    } else {
        return (num * fact(num-1));
    }
}



void main(){
    int num;
    printf("Input enter the number to calculate the factiorial: ");
    scanf("%d",&num);
    printf("Output is : %d",fact(num));
}