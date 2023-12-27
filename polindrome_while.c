// Find the given number is polindrome or not.
#include<stdio.h>
int main()
{
    int n,b,rem,rev=0;
    printf("\n enter a number : ");
    scanf("%d",&n);
    b=n;
    while (n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("\n reverse number = %d",rev);
    if (b==rev)
        printf("\n given number is polindron");
    else
        printf("\n it is not ");
}
