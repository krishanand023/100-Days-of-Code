#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    if (n <= 0)
    {
        return 0;
    }

    int first = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (!first)
            {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}