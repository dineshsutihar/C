#include<stdio.h>
int main()
{
    int i;
    for ( i = 1; i <= 10; i++)
    {   
        if(i==6)
        break;
        i=i+1;
        printf("%d",i);
    }
    return 0;
} 