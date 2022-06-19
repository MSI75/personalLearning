#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Event number : %d", n);
    }
    else
    {
        printf("Odd number : %d", n);
    }
    return 0; // timeComplexity O(1) and spaceComplexity O(1)
}