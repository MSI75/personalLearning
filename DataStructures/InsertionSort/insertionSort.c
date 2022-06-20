#include <stdio.h>

void insertion_sort(int arr[], int n);

int main()
{
    int arr[] = {75, 25, 3, 45, 1};
    insertion_sort(arr, 5);
    return 0;
}

void insertion_sort(int arr[], int n)
{
    int i, j, item;

    for (i = 0; i < n; i++)
    {
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = item;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}