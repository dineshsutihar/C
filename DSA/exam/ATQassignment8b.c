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
    int data, size;
    printf(" \nLinked List : To create and display Singly Linked List : \n");
    printf("\n---------------------------------------------------\n");
    printf("\nInput the number of nodes: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\nInput data for node %d : ", i + 1);
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
        printf("\nData entered in the list :\n");
        while (q != NULL)
        {
            printf("Data = %d \n", q->info);
            q = q->next;
        }
    }
}
int main()
{

    create();
    display();
    return 0;
}
