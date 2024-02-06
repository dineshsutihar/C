#include<stdio.h>
main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    //logic have a some kind of issue
    if (a%2==1 || a==2 && a!=1)
    {
        printf("prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
}