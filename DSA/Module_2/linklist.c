// Program for linksist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
void create()
{
    int data;
    printf("\n Enter data");
    scanf("%d", &data);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        struct node *q = start;
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
        struct node *q = start;
        printf("\n#List is \n");
        while (q != NULL)
        {
            printf("%d ", q->info);
            q = q->link;
        }
    }
}
void sum()
{
    if (start == NULL)
    {
        printf("\n#Linked list is empty");
    }
    else
    {
        struct node *q = start;
        int sum = 0;
        while (q != NULL)
        {
            sum = sum + q->info;
            q = q->link;
        }
        printf("\n#Sum is %d", sum);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n 1: Create \n 2: Display \n 3: Sum \n 4: Exit\n ");
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
            sum();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf(" \n \t Invalid Choice. \n ");
            break;
        }
    }
    return 0;
}
