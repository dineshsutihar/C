#include<stdio.h>

void main(){

// these below line will run only one times (t1)
    int arr[] ={1,6,4,7,45,5,34,5,23};
    int n=9;
    int i = 0;

    int key=3;

// Linear Search algorithm
    while (i<n && arr[i]!=key)  //it will run n+1 times  t2(n+1)
    {
        i++; //it will run n times t3(n)
    }


// below all the line will execute only one times 
    if (i<n) //t3(1)
    {
        printf("Number found at %d position.",i);
    }else{
        printf("Number Not found");
    }
    
    
}