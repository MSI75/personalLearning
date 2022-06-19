#include <stdio.h>

int main()
{
    int n, count;
    scanf("%d", &n);

    count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                count = count + 1; // timeComplexity O(n^3)
            }
        }
    }

    printf("n = %d count = %d", n, count);
    return 0;
}