#include <stdio.h>
// #include <stdlib.h>

#define max 10

int stack[max], top = -1;

void push(int num)
{
    if (top == max - 1)
    {
        printf("Error: Stack Overflow\n");
    }
    else
    {
        stack[++top] = num;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Error: Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

void display(int num)
{
    while (num > 0)
    {
        push(num % 2);
        num /= 2;
    }

    printf("Binary value: ");
    while (top >= 0)
    {
        printf("%d", pop());
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    display(num);
    return 0;
}