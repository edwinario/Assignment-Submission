// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 1

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int idx = 0;

Node *getNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert_any(Node **current, int basho, int data)
{
    if (basho < 0 || basho > idx + 1)
    {
        printf("Invalid Position\n");
    }
    else
    {
        while (basho--)
        {
            if (basho == 0)
            {
                Node *temp = getNode(data);
                temp->next = *current;
                *current = temp;
            }
            else
            {
                current = &(*current)->next;
            } 
        }
        idx++;
    }
}

void print(struct Node* head) { 
    while (head != NULL) { 
        printf(" %d",head->data); 
        head = head->next; 
    } 
    printf("\n");
} 

int main()
{
    Node *head = NULL;
    head = getNode(1);
    head->next = getNode(5);
    head->next->next = getNode(9);
    head->next->next->next = getNode(11);
    head->next->next->next->next = getNode(14);
    idx = 5;
    printf("Linked list before insertion: ");
    print(head);
    printf("\n\n");
    int totalInsert, i, data, basho;
    printf("How many times do you want to insert?\n");
    printf(">> ");
    scanf("%d", &totalInsert);
    getchar();
    printf("\n");
    for (i = 0; i < totalInsert; i++)
    {
        printf("Enter the number value you want to input : ");
        scanf("%d", &data);
        getchar();
        printf("Where is the position you want to insert the number? (Start from index 0)\n");
        printf(">> ");
        scanf("%d", &basho);
        getchar();
        insert_any(&head, basho + 1, data);
        printf("Linked list after insertion of %d at position %d: ", data, basho);
        print(head);
        printf("\n\n\n");
    }
    return 0;
}