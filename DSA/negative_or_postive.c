// wap to check the no is negative or positive 


#include<stdio.h>
int main()
{
    int x;
    printf("enter the no.:");
    scanf("%d",&x);
    if (x==0)
    {
        printf("No. is zero");   
    }
    else if (x<0)
    {
        printf("No. is negative");
    }
    else
    {
        printf("no. is positive");
    }
    
}