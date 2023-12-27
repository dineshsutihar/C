/*#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 11; i++);
    {
        printf("%d", i);
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>
int main()
{
    /*int i, a[] = {10, 20, 30};
    for (i = 0; i < 3; i++)
    {
        printf("%d", *a);
        // a++; // error
        printf("%d", *(a + i));
    }*/

    int n;
    char str[100] = "Dinesh";
    int len = strlen(str);
    char *p = &str[len - 1];
    while (p >= str)
    {
        printf("%c", *p);
        p--;
    }
    return 0;
}