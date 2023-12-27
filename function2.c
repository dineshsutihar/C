//with arguements and no return value
#include<stdio.h>
#define pi 3.14
main()
{
    int r;
    area(r);
}
area(r)
int r;
{
    float a;
    a=pi*r*r;
    printf("\n area =  %f",a);
}