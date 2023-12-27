//Wap to accept and display 1-D array

#include<stdio.h>
int main()
{
    int arr[10], size, i;
    printf("enter tha size of an array");
    scanf("%d",&size);
    printf("enter element of an array");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("elements of 1D array \n");
        for ( i = 0; i < size; i++)
        {
            printf("%d - ",arr[i]);
        }
     
    return 0;
}