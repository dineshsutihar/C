#include <stdio.h>
#include <conio.h>
void main()
{
    int day;
    // clrscr();
    printf("Enter the day code:");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Have a Good Day");
    }
    getch();
}