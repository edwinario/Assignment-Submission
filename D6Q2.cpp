// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data
{
    int age;
    data *next;
} * head, *tail, *current;

int getMin()
{
    current = head;
    int min = current->age;
    if (current == NULL)
    {
        printf("No Data Found");
    }
    else
    {
        while (current != NULL)
        {
            if (current->age < min)
            {
                min = current->age;
            }
            current = current->next;
        }
    }
    return min;
}


void pushHead(int age)
{
    current = (data *)malloc(sizeof(struct data));
    current->age = age;
    current->next = NULL;

    if (head == NULL)
    {
        head = tail = current;
    }
    else
    {
        current->next = head;
        head = current;
    }
}

void popHead()
{
    if (head == NULL)
    {
        printf("No Data Found\n");
    }
    else if (head == tail)
    {
        current = head;
        head = tail = NULL;
        free(current);
    }
    else
    {
        current = head;
        head = head->next;
        current = NULL;
        free(current);
    }
}

void show()
{
    current = head;

    if (current == NULL)
    {
        printf("No Data Found");
    }
    else
    {
        while (current != NULL)
        {
            printf("|%d|\n", current->age);
            current = current->next;
        }
    }
}

int main()
{
    int input, age;
    int min = INT_MAX;
    do
    {
        system("cls");
        printf("Stack Single Linked List\n");
        show();
        printf("1. Push Data\n");
        printf("2. Pop Data\n");
        printf("3. Show Minimum Age in The Stack\n");
        printf("4. Exit\n");
        printf(">> ");
        scanf("%d", &input);
        getchar();

        switch (input)
        {
        case 1:
            do
            {
                printf("Enter Your Age : ");
                scanf("%d", &age);
                getchar();
                if (age < 0)
                {
                    printf("Age can't be negative, Try Again!!!\n\n");
                }
            } while (age < 0);
            pushHead(age);
            break;

        case 2:
            popHead();
            printf("\n\nPress enter to continue...");
            getchar();
            break;

        case 3:
            if (head == NULL)
            {
                printf("There is no Data in the stack!!!");
            }
            else
            {
                min = getMin();
                printf("Minimum Age in the Stack is %d\n", min);
            }
            printf("Press enter to continue...");
            getchar();
            break;
        }
    } while (input != 4);

    return 0;
}