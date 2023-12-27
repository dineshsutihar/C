// wap to swap the element in functon using pointer.

#include <stdio.h>
// swaping of number using call by value
void swap(int, int);
int main()
{
    int x, y;
    printf("enter 2 values ");
    scanf("%d%d", &x, &y);
    swap(x, y);
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("after swapping %d %d ", a, b);
}

//----------------------------------------------------------------------------
// swapint of 2 numbers using call by refrence

void swap(int *, int *);
int main()
{
    int x, y;
    printf("enter 2 vlues ");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    return 0;
}
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("after swapping %d %d", *p1, *p2);
}