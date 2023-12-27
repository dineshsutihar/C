#include <stdio.h>
struct employee
{
    int eid, sal;
    char name[20];
};
int main()
{
    struct employee e;
    printf(" enter eid, name and salar\n");
    scanf("%d%s%d", &e.eid, &e.name, &e.sal);
    printf("\n details of employee \n");
    printf(" \n eid is %d", e.eid);
    printf(" \n name is %s", e.name);
    printf(" \n salary is %d", e.sal);
    return 0;
}
