
#include <stdio.h>
#include <conio.h>
void main()
{
    int rn, tm;
    char name[15];
    FILE *fptr;
    // clrscr();
    fptr = fopen("student.dat", "w");
    printf("Enter the Roll., Name & Test Mark:\n");
    scanf("%d%s%d", &rn, &name, &tm);
    printf("--------------------------------\n");
    fprintf(fptr, "%d\t\t%s\t\t%d\n", rn, name, tm);
    fclose(fptr);
    printf("Reading Data\n");
    fptr = fopen("student.dat", "r");
    fscanf(fptr, "%d%s%d", &rn, &name, &tm);
    printf("Roll 	NameSalary\n");
    printf("--------------------------------\n");
    printf("%d\t\t%s\t%d", rn, name, tm);
    fclose(fptr);
    getch();
}
