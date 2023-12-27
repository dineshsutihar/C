// this program to get deep knowledge about the struct variable.

#include <stdio.h>
#include <string.h>

struct employee
{
    int c_id;
    char name[10];
    int rank;
    int salary;
};
struct employee one, second, third, fourth, fifth;
int main()
{
    printf("Enter the name of Employee \n");
    scanf("%s", &one.name);
    printf("Enter the Customer Id of employee\n");
    scanf("%d", &one.c_id);
    printf("Enter the Rank and Salary of the employee\n");
    scanf("%d%d", &one.rank, &one.salary);
    printf("----------------------------------------------------\n");
    printf("Name of Employee is %s , His Customer id is %d.\nHe scored the rank %d and his salary is %d RS.", one.name, one.c_id, one.rank, one.salary);
    printf("\n----------------------------------------------------");
    return 0;
}
