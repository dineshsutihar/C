//acending order program
/*
a[0]    2   1
a[1]    3   2
a[2]    5   4
......
...

 */
#include<stdio.h>
main()
{
    int a[20], i, n,j,temp;
    printf("How many element yout want to be sorted; ");
    scanf("%d",&n);
    printf("\n Enter the %d element: \n", n );
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
           for (  j = i+1; j < n; j++)
           {
            if (a[i]>a[j]) //fpr decending order if (a[i]<a[j])
            {  
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
           }
            
    }
    printf("\n acending order \n");
    for (  i = 0; i < n; i++)
    {
        printf("\n a[%d] = %d",i,a[i]);
    }
    

}