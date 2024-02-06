#include <stdio.h>
int main() {
    int n = 100;
    
    int sum = 0;
    for (int i = 0; i <= 2*n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("Sum of first %d even numbers: %d\n", n, sum);

    return 0;
}