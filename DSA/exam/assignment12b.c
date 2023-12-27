#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int sumOdd(struct Node *head)
{
    int sum = 0;
    while (head != NULL)
    {
        if ((head->data) % 2 != 0)
        {
            sum += head->data;
        }
        head = head->next;
    }
    return sum;
}

int main()
{
    struct Node *head = NULL;
    int n, i, x;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        push(&head, x);
    }

    int sum = sumOdd(head);
    printf("Sum of odd elements: %d\n", sum);

    return 0;
}
