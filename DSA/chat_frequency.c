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

    // Accept element to find frequency of
    int x;
    printf("Enter element to find frequency of: ");
    scanf("%d", &x);

    // Calculate frequency of x
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }

    // Print frequency of x
    printf("Frequency of %d: %d\n", x, count);

    return 0;
}
