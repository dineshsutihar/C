#include<stdio.h>
main()
{
    int a,b,c,tot;
    float avg;
     
    printf("enter the marks of the students:");
    scanf("%d%d%d", &a,  &b, &c);

    tot=a+b+c;
    avg=tot/3;

    printf("\n The total marks is: %d",tot);
    printf("\n The average marks is: %.2f",avg);

    if (a>=35 && b>=35 && c>=35)
    {
       if (avg>=75)
        printf("\n First class:");
        else if (avg>= 50)
        printf("\n second class");
        else if (avg>=35)
        printf("\n Third class:");
    }
    else 
    printf("\n fail");
}