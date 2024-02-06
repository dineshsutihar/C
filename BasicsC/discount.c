#include<stdio.h>
int main()
{
    float amt,netamt;
    int dic;
    printf("Enter the amount :");
    scanf("%f",&amt);
    if (amt<500)
    {
        printf("NO discount\n");
        printf("Net Disconut=%.2f",amt);
    }
    else
    {
        if ((amt>=500) && (amt<1500))
        {
            dic=5;
        }
        else if ((amt>=1500) && (amt<2500))
        {
            dic=10;
        }
        else if ((amt>=2500) && (amt<4500))
        {
            dic=15;
        }
        else if ((amt>=4500) && (amt<6500))
        {
            dic=20;
        }
        else
        {
            dic=30;
        }
        
        
    }
    
}
