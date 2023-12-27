#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
void insert()
{
    int data;
    printf("Enter the data: ");
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
        q->link = temp;
    }
}
void display()
{
    struct node *temp = start;
    if (start == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->info);
            temp = temp->link;
        }
    }
}
int delete()
{
    struct node *temp = start;
    start = start->link;
    temp->link = NULL;
    struct node *q = start;
    while (q->link != NULL)
    {
        q = q->link;
    }
    q->link = temp;
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1: Insert \n2: Display\n3: Delete \n4: Exit\n");
        printf("Enter Your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
