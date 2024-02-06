
// in this program we will complete the fibonachi serires using recurison funciotn 
//  as we know the termination function for the fibonachi series is 0 
// 

#include <stdio.h>

void printFibonacci(int n){
    static int n1 = 0, n2 = 1, n3;

    if(n > 0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        printFibonacci(n - 1);
    }
}

int main(){
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1); // printing first two elements

    printFibonacci(n - 2); // n-2 because 2 numbers are already printed

    return 0;
}