// Program for linksist
#include <stdio.h>
#include <stdlib.h>
typedef struct node nod;

struct node
{
    int info;
    struct node *link;
};
nod *start = NULL;
void create()
{
    int data;
    printf("\n Enter data");
    scanf("%d", &data);
    nod *temp;
    temp = (nod *)malloc(sizeof(nod));
    temp->info = data;
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
        int sum = 0;
        printf("\n#List is \n");
        while (q != NULL)
        {
            if ((q->info) % 2 != 0)
            {
                sum += q->info;
            }
            q = q->link;
        }
        printf("\n#Sum of Odd Elements is %d \n", sum);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n 1: Create \n 2: Display Sum Of Odd \n 3: Exit\n ");
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
