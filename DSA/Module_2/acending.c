// wap to accept 1d form user and sort the element in ascending use malloc and free function.
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
    for (i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p[i] > p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("\nAscending order ");
    for (i = 0; i < size; i++)
    {
        printf("%d", p[i]);
    }

    free(p);
    return 0;
}