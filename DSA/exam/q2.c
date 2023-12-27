#include <stdio.h>
int main()
{
    printf("%d", rec(4));
    return 0;
}
int rec(int N)
{
    if (N == 0)

        return 1;

    else

        return 7 + rec(N - 2);
}