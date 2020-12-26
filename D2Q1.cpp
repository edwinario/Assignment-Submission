// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 1

#include <stdio.h>

int main()
{
    int number[100000];
    int number2[100000];
    int found = 0;
    int input;
    int idx;
    int spot;
    printf("How much number there will be?\n");
    printf(" >> ");
    scanf("%d", &input);
    getchar();
    printf("\n");
    for (int i = 1; i <= input; i++)
    {
        printf("Number at array %d : ", i);
        scanf("%d", &number[i]);
        number2[i] = number[i];
        getchar();
    }
    printf("\n");

    printf("Which number do you want to delete?\n");
    printf(" >> ");
    scanf("%d", &idx);
    getchar();
    printf("\n");

    for (int i = 1; i <= input; i++)
    {
        if (number[i] == idx)
        {
            found = 1;
            spot = i;
            break;
        }
    }

    if (found)
    {
        for (int i = spot; i < input; i++)
        {
            number[i] = number[i + 1];
        }
        printf("Before delete the choosen number :");
        for (int i = 1; i <= input; i++)
        {
            printf(" %d", number2[i]);
        }
        printf("\n\n");
        printf("After delete the choosen number :");
        for (int i = 1; i < input; i++)
        {
            printf(" %d", number[i]);
        }
        printf("\n\n");
    }
    else
    {
        printf("Elemen not found\n");
        printf("Current Array : ");
        for (int i = 1; i <= input; i++)
        {
            printf(" %d", number[i]);
        }
        printf("\n\n");
    }

    return 0;
}