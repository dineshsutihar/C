#include <stdio.h>
#include <conio.h>

long reverse(long);

void main()
{
    long n, r;
    scanf("%ld", &n);
    r = reverse(n);
    printf("%ld\n", r);
    getch();
}

long reverse(long n)
{
    static long r = 0;
    if (n == 0)
        return 0;
    r = r * 10;
    r = r + n % 10;
    reverse(n / 10);
    return r;
}
