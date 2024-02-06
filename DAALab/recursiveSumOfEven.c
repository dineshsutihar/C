// in this program i am going to write a program to calculate the sum of first n even numbers using recursion.

// basically the concept is the sum of first n even numbers is n*(n+1) and the sum of first n odd numbers is n*n.
// so we will write the code uisng n*(n+1) which can be written as 

#include <stdio.h>

int sumOfEven(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (2 * n + sumOfEven(n - 1));
    }
}

int main()
{
    int n = 100;
    printf("Sum of first %d even numbers: %d\n", n, sumOfEven(n));
    return 0;
}