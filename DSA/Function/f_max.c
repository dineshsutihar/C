// wap to accept 10 array from the user ans find the maximum element using function;
#include <stdio.h>
void max(int[], int);
int main()
{
    int arr[10], i, size;
    printf("enter size ");
    scanf("%d", &size);
    printf("enter the array element ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max(arr, size);
    return 0;
}
void max(int a[], int size)
{
    int m = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
        printf("max is %d", m);
    }
}