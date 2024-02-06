#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("enter a b c d \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > b && a > d)
    {
        printf("\n a is biggest");
    }
    else if (b > c && b > d)
    {
        printf("\n b is the biggest");
    }
    else if (c > d)
    {
        printf("\n c  is the biggest ");
    }
    else
    {
        printf("\n d is the biggest one");
    }
}