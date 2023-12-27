#include<stdio.h>
main()
{
    int n,count=1;
    printf("enter any four digit number \n");
    scanf("%d",&n);             // 1234/10 =123
    n=n/10;                     // 123!=0
    if(n!=0)                   // count =1+1 =2
    {
    count=count+1;              // 123/10 =12
    }
    n=n/10;                     //12!=0
   
    if(n!=0)                   // count =2+1 =3
    {
    count=count+1;              // 12/10 =1
    }
    n=n/10;                     // 1!=0
    
    if(n!=0)
    {
    count =count+1;
    }
    printf("%d",count);            // answer should be 4
    

    
}