// WAP accept 2 string from the user & compare both the string by using strcmp
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], sti[20];
    printf("Enter 1st element ");
    gets(str);
    printf("enter 2nd element ");
    gets(sti);
    printf("\n Your 1st element is %s and 2nd element is %s", str, sti);
    if (strcmp(str, sti) == 0)
    {
        printf("\nequal ");
    }
    else
    {
        printf("\nNot equal");
    }
    return 0;
}