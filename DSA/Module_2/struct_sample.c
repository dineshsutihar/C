#include <stdio.h>
struct customer
{
    int acc, bal;
    char name[20];
};
int main()
{
    struct customer c;
    printf("Enter the Name accout and balance");
    scanf("%s%d%d", &c.name, &c.acc, &c.bal);
    printf("Name of custome is %s, Account no is %d and balance is %d RS.", c.name, c.acc, c.bal);
}
