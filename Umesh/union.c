// #include <stdio.h>
// #include <conio.h> 
// #include <string.h> 

// union student
// {
//     char name[20];
//     char subject[20];
//     float percentage;
// }
// record;

// void main()
// {
//     strcpy(record.name, "Mani");
//     strcpy(record.subject, "Maths");
//     record.percentage = 86.50;

//     printf(" Name 	: %s \n", record.name);
//     printf(" Subject 	: %s \n", record.subject);
//     printf(" Percentage : %f \n",record.percentage);
//     getch();
// }


#include <stdio.h>
#include <conio.h> 
#include <string.h> 

struct student
{
    char name[20];
    char subject[20];
    float percentage;
}
record;

void main()
{
    strcpy(record.name, "Mani");
    strcpy(record.subject, "Maths");
    record.percentage = 86.50;

    printf(" Name 	: %s \n", record.name);
    printf(" Subject 	: %s \n", record.subject);
    printf(" Percentage : %f \n",record.percentage);
    getch();
}
