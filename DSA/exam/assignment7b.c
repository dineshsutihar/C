// wap a program
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, temp;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int)); // dynamically allocating memory for 'n' elements

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // sorting the elements in ascending order
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Sorted elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr); // releasing the memory allocated dynamically

    return 0;
}
