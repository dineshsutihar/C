#include<stdio.h>
main()
{
    int a,b=1;
    printf("enter the number you want:");
    scanf("%d",&a);
    while (a>=1)
    {
        b=b*a;
        a--;
    }
    printf("\n The factorial of the given number is: %d",b);
    
}
