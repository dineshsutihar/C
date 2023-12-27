// wap to calculate the factorial of number using funcition.
#include <stdio.h>
int factrioal(int);
int main()
{
    int no;
    printf("enter the number :");
    scanf("%d", &no);
    int ans = factrioal(no);
    printf("Fact is %d", ans);
    return 0;
}
int factrioal(int n)
{
    int f = 1, i;
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
