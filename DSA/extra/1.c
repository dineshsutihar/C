/*#include <stdio.h>
void func(void)
{
    printf("Hello");
}
void main()
{
    func();
    func(2);
}*/
#include <stdio.h>
struct sample
{
    int a = 0;
    char b = 'A';
    float c = 10.5;
};
int main()
{
    struct sample s;
    printf("%d, %c, %f", s.a, s.b, s.c);
    return 0;
}