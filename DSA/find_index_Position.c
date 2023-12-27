// wap to accept 1d array from the user and search the particular element in array, if the element is present diaplay the index postiton
#include <stdio.h>
int main()
{
    int i, size, arr[10], element;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter th elements \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("elements of array are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("enter tha element to be searched: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("element found at postion %d ", i);
            return 0;
        }
        printf("element not found");
        return 0;
    }
}