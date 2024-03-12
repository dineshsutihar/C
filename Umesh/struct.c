#include <stdio.h>
#include <conio.h>

struct stud
{
    int roll;
    char nam[10];
    float per;
};
void main()
{
    struct stud info;
    // clrscr();
    printf("Enter the Roll:");
    scanf("%d", &info.roll);
    printf("Enter the Name:");
    scanf("%s", &info.nam);
    printf("Enter the percentage:");
    scanf("%f", &info.per);
    printf("Roll\tName\tPercentage\n");
    printf("%d\t%s\t%f\t", info.roll, info.nam, info.per);
    getch();
}
