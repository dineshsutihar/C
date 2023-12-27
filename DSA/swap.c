//wap to take input 2 no from user and then swap it.
#include<stdio.h>
int main()
{
 int x,y,z;
 printf("Enter the number");
 scanf("%d%d",&x,&y);
 z=x;
 x=y;
 y=z;
 printf("Adter swapping %d %d", x,y);
}



