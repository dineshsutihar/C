// wap to accept the 1d array form the user and print the array element in reverse order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, size, sum = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    p = (int *)calloc(size, sizeof(int));
    printf("\nEnter array element");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\n Element are \n");
    for (i = 0; i < size; i++)
    {
        printf("%d", p[i]);
    }
    printf("\nAfter reverse \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", p[i]);
    }

    free(p);
    return 0;
}