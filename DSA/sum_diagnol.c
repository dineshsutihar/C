// wap to accept 2d matrix from the user and calculate the sum of diagnol elements
/*#include <stdio.h>
int main()
{
    int arr[3], i, j;
    printf("Enter the element of matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n 2d array \n");
    for (size_t i = 0; i < count; i++)
    {
        /* code */
#include <stdio.h>

int main()
{
    // Declare variables
    int rows, cols;
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d%d", &rows, &cols);
    int a[rows][cols];
    int i, j;

    // Accept matrix elements from the user
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of major diagonal elements
    int sum = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }

    // Print sum
    printf("Sum of major diagonal elements: %d\n", sum);

    return 0;
}
