#include<stdio.h>
main()
{
    int n,b,rem,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    b=n;
    do
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;

    } while (n!=10);
    printf(" \n reverse is %d",rev);
    if (b==rev)     
    {
       printf("\n given number is paliondrome");
    }
     else
    {
        printf("\n it is not a paliondrome");
    }
}
