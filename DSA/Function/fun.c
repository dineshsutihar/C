// wap to accept 1d array from the user pass the array to a function, the function should return the sum of elements of 1d array elemeents.
#include <stdio.h>
int sum(int[], int);
int main()
{
    int arr[10], i, size;
    printf("enter the size: ");
    scanf("%d", &size);
    printf("enter the element ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = sum(arr, size);
    printf("\n sum of array %d", ans);
    return 0;
}
int sum(int a[], int size)
{
    int s = 0, i;
    for (i = 0; i < size; i++)
    {
        s = s + a[i];
    }
    return s;
}