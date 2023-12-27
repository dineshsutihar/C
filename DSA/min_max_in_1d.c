#include <stdio.h>

int main()
{
    // Declare variables
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    int i;

    // Accept array elements from the user
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Find maximum and minimum elements
    int max = a[0];
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    // Print maximum and minimum elements
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
