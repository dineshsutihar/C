// arguements and return value
#include<stdio.h>
#define pi 3.14
main()
{
    int r;
    float area();
    float a;
    printf("\n enter the radius =");
    scanf("%d",&r);
    a=area(r);  //actual argument 
    printf("\n area = %f ",a);

}
float area(r)
int r;
{
    return(pi*r*r);
}