// Wap to reverse the string using stack;
#include <stdio.h>
#include <string.h>
#define max 20
char str[max];
int top = -1;
void push(char ch)
{
    if (top == max - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        str[top] = ch;
    }
}
char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        char ch = str[top];
        top--;
        return ch;
    }
}
int main()
{
    char s[max];
    printf("Enter string : ");
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        push(s[i]);
    }
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", pop());
    }
    return 0;
}