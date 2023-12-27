// program to find the maximum no form the list of numbers.
#include<stdio.h>
 main()
{
  int a[10],i,max;
  printf("\n Enter 10 element :\n ");
  for ( i = 0; i < 10; i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for ( i = 0; i < 10; i++)
  {
    if (max<a[i]) //if we want to find the minimum the use here greater than symbol.
    {
        max=a[i];
    }
    printf("\n Maximum number =%d ",max);
  }
  
}
