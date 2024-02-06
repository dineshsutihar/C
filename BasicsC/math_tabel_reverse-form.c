/* mathematical table same like this
5 * 10 =50
.......
......
5 * 3 =15
5 * 2 =10
5 * 1 =5
*/
#include<stdio.h>
main()
{
    int a,b=10;
    printf("\n which table you want to print :");
    scanf("%d",&a);
    while (b>=1)
    {
        printf("\n %d * %d= %d",a,b,a*b);
        b--;
    }
    
}