// wap to accept 1d array from the user and sort the array in ascending order.

#include <stdio.h>
int main()
{
    int i, size, j, arr[10];
    printf("enter the size");
    scanf("%d", &size);
    printf("enter the element \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("elements before sort are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // main sorting nested loop starts from here
    for (i = 0; i < size; i++)
    {
        for (j = i++; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n after sort :\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}