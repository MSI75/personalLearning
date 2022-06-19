#include <stdio.h>

int main()
{
    int n, result;
    scanf("%d", &n);
    result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result + i; // timeComplexity O(n)
    }
    printf("%d", result);
    return 0;
}