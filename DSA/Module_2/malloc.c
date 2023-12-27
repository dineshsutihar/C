// program using malloc DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, size;
    printf("Enter size: ");
    scanf("%d", &size);
    p = (int *)malloc(sizeof(int) * size);
    printf("\n Enter array element");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\n Element are \n");
    for (i = 0; i < size; i++)
    {
        printf("%d", p[i]);
    }
    return 0;
}
