// wap to accept 1d array from the user and display the elements use callo function.
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
    printf("\nElement are \n");
    for (i = 0; i < size; i++)
    {
        printf("%d", p[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum += p[i];
    }
    printf("\n sum is %d", sum);
    free(p);
    return 0;
}