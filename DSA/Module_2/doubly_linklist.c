//

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
    printf("\n-----Enter the data-----\n-----Data:");
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
        printf("\n-----List is Empty-----");
    }
    else
    {
        printf("\n-----List is-----\n");
        struct node *q = start;
        while (q != NULL)
        {
            printf("%d ", q->info);
            q = q->next;
        }
    }
}
void count()
{
    if (start == NULL)
    {
        printf("\n-----List is Empty-----");
    }
    else
    {
        int odd = 0, even = 0;
        printf("\n List is \n");
        struct node *q = start;
        while (q != NULL)
        {
            if (q->info % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            q = q->next;
        }
        printf("\n\tEven elements are %d", even);
        printf("\n\tOdd elements are %d", odd);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n 1: Create \n 2: Display \n 3: Count Odd or Even \n 4: Exit\n ");
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
            count();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf(" \n \t Invalid Choice. \n ");
            break;
        }
    }
}
