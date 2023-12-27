
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *top = NULL;
void push()
{
    int data;
    printf("Enter the data");
    scanf("%d", &data);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = top;
    top = temp;
}
void display()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        struct node *q = top;
        while (q != NULL)
        {
            printf("%d", q->info);
            q = q->link;
        }
    }
}
void pop()
{
    if (top == NULL)
    {
        printf("\nStack Underflow");
    }
    else
    {
        struct node *temp = top;
        top = temp->link;
        printf("\nElement deleted is %d", temp->info);
        free(temp);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n 1: Push \n 2: Display \n 3: Pop \n 4: Exit\n ");
        printf("Enter Your Choise : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
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