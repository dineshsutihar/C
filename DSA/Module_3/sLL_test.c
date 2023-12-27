// Program for linksist
#include <stdio.h>
#include <stdlib.h>
typedef struct node nod;
struct students
{
    char name[20];
    int rollno;
    float percentage;
};

struct node
{
    struct students s;
    struct node *link;
};
nod *start = NULL;
void create()
{
    int roll;
    printf("\n Enter data roll");
    scanf("%d", &roll);
    nod *temp;
    temp = (nod *)malloc(sizeof(nod));
    temp->s.rollno = roll;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        nod *q = start;
        while (q->link != NULL)
        {
            q = q->link;
        }
        q = q->link = temp;
    }
}
void display()
{
    if (start == NULL)
    {
        printf("\n #Linked list is empty");
    }
    else
    {
        nod *q = start;
        printf("\n#rollno is \n");
        while (q != NULL)
        {
            printf("%d ", q->s.rollno);
            q = q->link;
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n 1: Create \n 2: Display \n 3: Exit\n ");
        printf("Enter Your Choise : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf(" \n \t Invalid Choice. \n ");
            break;
        }
    }
    return 0;
}
