#include <stdio.h>

void selection_sort(int arr[], int n);

int main()
{
    int arr[100], n, i;
    printf("Enter the number of n : ");
    scanf("%d", &n);

    printf("Enter the number %d of array : ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);
    return 0;
}

void selection_sort(int arr[], int n)
{
    int index_min, temp, i;
    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (int j = i + 1; j < n; j++)
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

    printf("Sorted by array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}