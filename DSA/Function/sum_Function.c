#include <stdio.h>

void sum(int arr[], int size); // Function prototype

int main()
{
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum(arr, size); // Call the sum function

    return 0;
}

void sum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // Add the element to the sum
    }

    printf("The sum of the array elements is: %d\n", sum);
}
