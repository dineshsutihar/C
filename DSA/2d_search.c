#include <stdio.h>
int main()
{
    int arr[3][3], i, j, element;
    printf("\nEnter 2d array element \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n 2d array \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf(" \n ");
    }
    printf("Enter the element to be searched ");
    scanf("%d", &element);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (element == arr[i][j])
            {
                printf("\nElement found at row %d and column %d", i, j);
                return 0;
            }
        }
    }
    printf("\nelement not found");
    return 0;
}