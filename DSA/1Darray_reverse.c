//wap to print data in reverse order from 1D array
#include<stdio.h>
int main()
{
    int arr[10], size, i;
    printf("enter tha size of an array");
    scanf("%d",&size);
    printf("Enter element of an array");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("elements of 1D array after reverse : \n");
        for ( i = size-1; i >= 0; i--)
        {
            printf("%d  ",arr[i]);
        }
     
    return 0;
} 