// wap to accept the string from the user and print the alternate characters from the string using function.
#include <stdio.h>
#include <string.h>
void alt(char[]);
int main()
{
    char str[20];
    printf("enter the string :");
    gets(str);
    alt(str);
    return 0;
}
void alt(char s[])
{
    for (int i = 0; i < strlen(s); i = i + 2)
    {
        printf("%c", s[i]);
    }
}