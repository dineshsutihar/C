/* mathematical table same like this
5 * 1 =5
5 * 2 =10
5 * 3 =15
.......
......
5 * 10 =50
*/


#include<stdio.h>
int main()
{
    int a,b=1;
    printf("\n which table you want to print :");
    scanf("%d",&a);
    while (b<=10)
    {
        printf("\n %d * %d =%d",a,b,a*b);
        b++;
    }
}