// WAP to accept the details of employee and display them using structure.

#include <stdio.h>

struct employee
{
    int e_id;
    char name[50];
    char dgntion[20];
    char depart[20];
    int salary;
};
int main()
{
    struct employee e;

    printf("-----------------------------------------------------");

    printf("\nEnter Employee-Id: ");
    scanf("%d", &e.e_id);

    printf("\nEnter Name  \t : ");
    scanf("%s", e.name);

    printf("\nEnter Designation: ");
    scanf("%s", &e.dgntion);

    printf("\nEnter Department : ");
    scanf("%s", &e.depart);

    printf("\nEnter Salary \t : ");
    scanf("%d", &e.salary);

    printf("\n-----------------------------------------------------");

    // Output are here
    printf("\nEmployee Details :");

    printf("\n-----------------------------------------------------");

    printf("\nEmployee-Id : %d ", e.e_id);
    printf("\nName \t    : %s", e.name);
    printf("\nDesignation : %s", e.dgntion);
    printf("\nDepartment  : %s ", e.depart);
    printf("\nSalary \t    : %d ", e.salary);

    printf("\n-----------------------------------------------------");
}
