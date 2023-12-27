// Program to implement the function before the main funcion and pre and post increment

#include <stdio.h>
int fun(int k)
{
    return ++k; /// this will work
    return k++; /// post increment will not work
}
int main()
{
    int k = 100;
    k = fun(k);
    printf("%d", k);
    return 0;
}