#include<stdio.h>
int main()
{
    int a[5]={10,30,50,60,70};
    int i, sum=0;
    for ( i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    printf("\n sum= %d",sum);
}
