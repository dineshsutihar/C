// print sum of 1/1+2/3+3/5+4/7+5/9+6/11+7/13+8/15+9/17+10/19
#include<stdio.h>
main()
{
    int i=1,j=1;
    float sum=0;
    while (i<=10)

    {
        sum =sum+(float)i/j;   // i/j are converted into float, is called typecasting
        i++;
        j=j+2;      //
    }
    printf("\n sum of series is %.2f",sum);
}