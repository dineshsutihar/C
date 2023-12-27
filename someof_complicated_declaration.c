#include<stdio.h>
void(*f[10])(int, int); //here we can decleare data or int value and also datatype and that can be uses in later program.
void func1(int a, int b)
{
    printf("func1 =%d, %d\n", a,b);
}
void func2(int p, int q)
{
printf("func2 =%d, %d\n", p,q);

}
void func3(int x, int y)
{
printf("func3 =%d, %d\n ", x,y);

}
int main()
{
    f[0] = func1;
    f[1] = func2;
    f[2] = func3;
    (*f[0])(1,2);
    (*f[1])(3,5);
    (*f[2])(6,2);
return 0;
}