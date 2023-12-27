#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the values: \n");
    scanf("%d %d", &x,&y);
    if (x==y)                                               //if - else if - else is called ladder if else.
    {
        printf("Both value are equal");
    }
    else if (x>y)
    {
        printf("%d is maximum",x);
    }
    else
    {
        printf("%d is maximum",y);
    }
    
}