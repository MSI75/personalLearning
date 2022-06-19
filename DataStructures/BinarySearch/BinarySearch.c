#include <stdio.h>

int binary_search(int arr[], int n, int x);

int main()
{
    int n, x, arr[100];
    printf("Enter the number of n : ");
    scanf("%d", &n);

    printf("Enter the number of x : ");
    scanf("%d", &x);

    printf("Enter the number of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = binary_search(arr, n, x);
    if (result == -1)
    {
        printf("value is not available : ");
    }
    else
    {
        printf("value is available : %d", result);
    }
    return 0;
}

int binary_search(int arr[], int n, int x)
{
    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            return mid + 1;
        }
        else
        {
            return mid - 1;
        }
    }
    return -1;
}