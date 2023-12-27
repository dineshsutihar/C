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
    int size;
    printf(" \nLinked List : To create and display Singly Linked List : \n");
    printf("\n---------------------------------------------------\n");
    printf("\nInput the number of nodes: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        int data;
        printf("\nInput data for node %d : ", i + 1);
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
            q = q->link;
        }
    }
}
int main()
{

    create();
    display();
    return 0;
}
