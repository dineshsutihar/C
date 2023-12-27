#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char str[29];
    printf(" Enter the string ");
    gets(str);
    printf(" \n String is %s \n", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("\n Number of sting is %d", count);
    return 0;
}