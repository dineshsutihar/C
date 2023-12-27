#include <stdio.h>
int main()
{
    char c[20] = "Hello";
    printf("%s\n", c);
    printf("%s\n", c + 1);
    printf("%s\n", c + 2);
    printf("----------------------------------\n");
    char *s = "World";
    printf("%s\n", s);
    printf("%s\n", s + 1);
    printf("%s\n", s + 2);
}