// wap to accept string from the user and replace all alphabate a, A by *

// Program starts here
#include <stdio.h>
#include <string.h>

// decelearation of main function
int main()
{
    char str[20];
    printf("\n enter the string ");
    gets(str);

    printf("\n string is %s \n ", str);

    // loop starts here
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            str[i] = '*';
        }
    }
    printf("\n %s", str);
    return 0;
}