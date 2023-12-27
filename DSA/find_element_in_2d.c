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

    // Accept element to search for
    int x;
    printf("Enter element to search for: ");
    scanf("%d", &x);

    // Search for x
    int found = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] == x)
            {
                printf("Element found at index position (%d, %d)\n", i, j);
                return 0;
            }
        }
    }

    printf("Element not found\n");

    return 0;
}
