// wap to accept the string from the user and print the string in the reverse orderusing function.
#include <stdio.h>
#include <string.h>
void reverse(char[]);
int main()
{
    char str[20];
    printf("enter the string ");
    scanf("%s", str);
    reverse(str);
    return 0;
}
void reverse(char s[])
{
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}