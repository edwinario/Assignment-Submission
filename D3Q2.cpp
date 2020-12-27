// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 2

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

Node *delete_beg(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

void push(struct Node **head_re, int new_data)
{
    struct Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_re);
    (*head_re) = new_node;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 3);
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);

    printf("First Deletion:\n");
    printf("Linked List before delete the beginning:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n");
    head = delete_beg(head);
    printf("Linked List after delete the beginning:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n\n");

    printf("Second Deletion: \n");
    printf("Linked List before delete the beginning:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n");
    head = delete_beg(head);
    printf("Linked List after delete the beginning:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n\n");

    return 0;
}