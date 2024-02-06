// We are writing the program to calculate the power of any number using recursion.


// Basic ides : 
// 1. Base case : here we have to define the base case to stop the recursion.
// 2. Recursive case : here we have to define the recursive case to call the function again and again.

//  we know the a^b = a * a^(b-1) 
//  we can write the above equation in the form of recursion.

#include<stdio.h>

int power(int a, int b){
    if(b==0){
        return 1;
    } else {
        return (a * power(a,b-1));
    }

}

void main(){
    int a,b;
    printf("Input enter the number to calculate the power: ");
    scanf("%d",&a);
    printf("Input enter the power: ");
    scanf("%d",&b);
    printf("Output is : %d",power(a,b));
    
}