#include <stdio.h>
main()
{
    int n,a,b,c;
    printf("enter the number");
    scanf("%d",&n);
    a=n%10;         //123%10=3
    n=n/10;
    b=n%10;         
    n=n/10;
    c=n%10;         
    n=n/10;
    printf("%d-%d-%d",a,b,c);
    }