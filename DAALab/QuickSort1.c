#include <stdio.h>

int partition(int arr[], int l, int r)
{

    int i, j;
    int pivot = arr[l];
    i = l + 1;
    j = r;
    while (i < j)
    {
        while (arr[i] < pivot && i <= r)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    // arr[l] = arr[j];
    // arr[j] = pivot;
    return j;
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(a, l, r);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, r);
    }
}

void main()
{
    int a[20], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // int a[] = {10, 7, 8, 9, 1, 5, 4, 3, 5, 2, 4, 5, 3, 3, 2, 4};
    // int n = 16;

    printf("The array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("\nThe sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}