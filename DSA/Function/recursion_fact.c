// Wap a program to find factorial using recorsion
#include <stdio.h>
int factorial(int);
int main()
{
    int no;
    printf("Enter the value");
    scanf("%d", &no);
    int ans = factorial(no);
    printf("fact is %d", ans);
    return 0;
}
int factorial(int n)
{
    static int f = 1;
    if (n == 1)
    {
        return f;
    }
    else
    {
        f = f * n;
        n--;
        factorial(n); // Here function is calling itself so it is a recursive function.
    }
}