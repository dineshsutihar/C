#include<stdio.h>
void main()
{
    int a[5],i;
    printf("\n Enter tha array element \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array Element : \n");
    for ( i = 0; i < 5; i++)
    {
        printf("\n a[%d]= %d",i,a[i]);
    }
    
}