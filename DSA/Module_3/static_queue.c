#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max], front = -1, rear = -1;
void insert()
{
    if (rear == max - 1)
    {
        printf("\nQueue is full.");
    }
    else
    {
        int data;
        printf("\nEnter the data:");
        scanf("%d", &data);
        if (front == -1)
        {
            front++;
        }
        rear++;
        queue[rear] = data;
    }
}
void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("\n Queue");
        for (int i = front; i < rear; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}
void Delete()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue is underflow\n ");
    }
    else
    {
        printf("Element deleted is %d", queue[front]);
        front++;
    }
}
int main()
{
    int choice;
    while (1)
    {

        printf("\n1.Insert \n2.Display \n3.Delete \n4.Exit");
        printf("\nEnter your choice : ");
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
            Delete();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("\nInvalid choice");
            break;
        }
    }
}