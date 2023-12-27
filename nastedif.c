// student report
#include<stdio.h>
main()
{
    int m,p,c,tot;
    float avg;
    printf("\n enter the 3 subject marks");
    scanf("%d%d%d",&m,&p,&c);
    tot=m+p+c;
    avg=tot/3;
    printf("\n total marks is %d",tot);
    printf("\n averge is %.2f", avg);

    if (m>=35 && p>= 35 && c>=35 )
    {
        if (avg>=75)
        {
            printf("\n Distiction");
        }
        else if (avg>=60)
        {
            printf("\n first division");
        }
        else if (avg>=35)
        {
           printf("\n the third class");
        }       
        
    }
    else 
    {
       printf("\n fail");
    }
    
}