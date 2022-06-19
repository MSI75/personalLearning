#include <stdio.h>

int main()
{
    int n, arr[100];

    for (int i = 0; i < 101; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 101; i += 2)
    {
        arr[i] = 1;
    }

    scanf("%d", &n);

    if (arr[n])
    {
        printf("Event number : %d", n);
    }
    else
    {
        printf("Odd number : %d", n);
    }
    return 0; // timeComplexity O(n) spaceComplexity O(n^2)
}