#include <stdio.h>

void swap(int *a, int *b); // Function prototype

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y); // Call the swap function

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
