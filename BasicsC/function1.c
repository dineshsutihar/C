//No arguements and no return value
#include<stdio.h>
#define pi 3.14
int main()
{
    area();
    peri();
}
int area()
{
int r;
float a;
printf("\n Enter Radius :");
scanf("%d",&r);
a=pi*r*r;
printf("\n Area of a circle = %f ",a);

}
int peri()
{
    int r;
    float p;
    p=2*pi*r;
    printf("\n perimeter is = %f", p);

}