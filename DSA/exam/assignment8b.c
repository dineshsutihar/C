#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next, *prev;
};
struct node *start = NULL;
void create()
{
    int data;
    printf("\nEnter the data\nData:");
    scanf("%d", &data);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
        start->prev = NULL;
    }
    else
    {
        struct node *q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
        temp->prev = q;
    }
}
void display()
{
    if (start == NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        printf("\nList is\n");
        struct node *q = start;
        while (q != NULL)
        {
            printf("%d ", q->info);
            q = q->next;
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
}
