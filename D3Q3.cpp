// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 3

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

Node* delete_end(struct Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *secol = head;
    while (secol->next->next != NULL)
        secol = secol->next;

    delete (secol->next);
    secol->next = NULL;
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
    push(&head, 6);
    push(&head, 7);
    push(&head, 9);

    printf("First deletion: \n");
    printf("Linked List before delete the last:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n");
    head = delete_end(head);
    printf("Linked List after delete the last:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n\n");
    printf("Second deletion: \n");
    printf("Linked List before delete the last:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    } 
    printf("\n");
    head = delete_end(head);
    printf("Linked List after delete the lasts:");
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        printf(" %d", temp->data);
    }
    printf("\n\n");

    return 0;
}