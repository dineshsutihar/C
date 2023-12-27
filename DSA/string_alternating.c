// wap to accept string from user and print the alternating character from the string.
#include <stdio.h>
#include <string.h>
// #include <ctype.h>
int main()
{
    int i;
    char str[29];
    printf(" Enter the string ");
    gets(str);
    printf(" \n String is %s \n", str);
    strlwr(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            printf("%c", str[i]);
        else if (i % 2 == 0)
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}