#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max];
int top = -1;
void push()
{
    int data;
    if (top == max - 1)
    {
        printf("Stadck is overflow");
    }
    else
    {
        printf("Enter data :");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}
void display()
{
    if (top == -1)
    {
        printf("stack is Empty");
    }
    else
    {
        printf("\nStack\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("\n Element Deleted is %d ", stack[top]);
        top--;
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
}