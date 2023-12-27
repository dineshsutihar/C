#include<stdio.h>
int main()
{
    int n,f=1;
    printf("enter the number you want:");
    scanf("%d",&n);
    while (n>=1)
    {
        f=f*n;
        n--;
        
    }
    printf("\n The factorial of the given number is: %d",f);
    
}
