// wap to accept 2d matrix from the user and print the transpose of matrix
#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
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
    printf("\n transpose of 2d array \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}