#include <stdio.h>

int linear_search(int arr[], int n, int x);

int main()
{
    int n, x, arr[100];
    printf("Enter the number of n : ");
    scanf("%d", &n);

    printf("Enter the number of x : ");
    scanf("%d", &x);

    printf("Enter the number of array : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = linear_search(arr, n, x);
    if (result == -1)
    {
        printf("It is not value available !");
    }
    else
    {
        printf("The value is available : %d ", result);
    }
    return 0;
}

int linear_search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return arr[i];
        }
    }
    return -1;
}