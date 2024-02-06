#include<stdio.h>

// In this program i am going to develop a program to calculate multiplication using Recursion.

// idea to complete any recursion
// 1. Base case : here we have to define the base case to stop the recursion.
// 2. Recursive case : here we have to define the recursive case to call the function again and again.

// here we have to calculate the multiplication of the number using recursion.
//  we can write the a*b = a + a + a +......a(b times) 
//  which can be again written as a + a(b-1) = a+a+a(b-2) 

int multiply(int a, int b){
    if (b==1)
    {
        return a;
    } else {
        return(a + multiply(a,b-1));
    }
    
}

void main(){

    int a,b;
    printf("Enter the value of a and b to be multiplied : ");
    scanf("%d%d",&a,&b);

    // output
    printf("Output is : %d", multiply(a,b));
}