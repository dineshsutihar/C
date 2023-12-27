// Find the armstrong number using while loop.
#include<stdio.h>
main()
{
    int n,rem,b,sum=0;
    printf("Enter the number to check it is armstromg number or not = ");
    scanf("%d",&n);
    b=n;
    while (n!=0)
    {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
    }
    printf("\n sum of the given number is : %d",sum);

    if (b==sum)
    
       printf("\n Given number is Armstrong number");
    else
       printf("\n It is not a armstrong number");
    
}