#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], temp[20];
    printf("enter the string \n");
    gets(str);
    printf("string is %s", str);
    strcpy(temp, str);

    if (strcmp(str, strrev(temp)) == 0)
    {
        printf("\nstring is palondrone");
    }
    else
    {
        printf("\nstring is not a palomdrone");
    }
    return 0;
}