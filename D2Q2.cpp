// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 2

#include <stdio.h>

int main()
{
    int number[100000];
    int number2[100000];
    int input;
    int idx;
    int temp;
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
    if (input != 0)
    {
        printf("How many time you want to rotate the array to the left?\n");
        printf(" >> ");
        scanf("%d", &idx);
        getchar();
        idx = idx % input;
        printf("\n");
        for (int i = 1; i <= idx; i++)
        {
            temp = number[1];
            for (int j = 1; j < input; j++)
            {
                number[j] = number[j + 1];
            }
            number[input] = temp;
        }
        printf("Array before shifted to the left :");
        for (int i = 1; i <= input; i++)
        {
            printf(" %d", number2[i]);
        }
        printf("\n\n");
        printf("Array after shifted to the left :");
        for (int i = 1; i <= input; i++)
        {
            printf(" %d", number[i]);
        }
        printf("\n\n");
    }

    return 0;
}