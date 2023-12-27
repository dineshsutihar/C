#include <stdio.h>
int main()
{
    int i, f = 0, size, arr[10], element;
    printf("Enter the size of array");
    scanf("%d", &size);
    printf("Enter th elements \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("elements of array are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element whose frequency you want \n");
    scanf("%d", &element);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            f = f + 1;
        }
    }
    printf("frequency of %d is %d ", element, f);
    return 0;
}