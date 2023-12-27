#include<stdio.h>
int main()
{
    int i,j,k,l;
    for (i=0; i<=4;i++)
    {
        for(k=65;k<=69-i;k++)
        printf("%c",k);

        for(j=1;j<=i*2-1;j++)
        printf(" ");

        for(l=69-i;l>=65;l--)
        if(l!=69)
        printf("%c",l);
        printf("\n");

    }
}