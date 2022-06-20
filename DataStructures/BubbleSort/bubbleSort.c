#include <stdio.h>

void bubble_sort(int arr[], int n);

int main()
{
    int arr[100], n;
    printf("Enter the number of N : ");
    scanf("%d", &n);

    printf("Enter the number of %d Array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    bubble_sort(arr, n);
    return 0;
}

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        // for (j = 0; j < n - 1; j++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}