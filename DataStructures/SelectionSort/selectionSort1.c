#include <stdio.h>

void selection_sort(int arr[], int n);
void printfArray(int arr[], int n);

int main()
{
    int arr[100], n;
    printf("Enter the number of N : ");
    scanf("%d", &n);

    printf("Enter the number %d of Array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sorted Array : ");
    printfArray(arr, n);

    return 0;
}

void selection_sort(int arr[], int n)
{
    int i, j, index_min, temp;
    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index_min])
            {
                index_min = j;
            }

            if (index_min != i)
            {
                temp = arr[i];
                arr[i] = arr[index_min];
                arr[index_min] = temp;
            }
        }
    }
}

void printfArray(int arr[], int n)
{
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}