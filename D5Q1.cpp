// Edwin Ario Abdiwijaya
// edwin.abdiwijaya@binus.ac.id
// Answer for question number 1

#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i, j, idx;
    for(i = 1; i < n; i++)
    {
        idx = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > idx)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = idx;
    }

}

int main()
{
    int i, n;
    printf("How many numbers you want to?\n");
    printf(">> ");
    scanf("%d", &n);
    getchar();
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Number at index %d : ", i);
        scanf("%d", &arr[i]);
        getchar();
    }
    printf("\n");
    printf("Before insertion sort :");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
    insertion_sort(arr, n);;
    printf("After insertion sort :");
    for(i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}