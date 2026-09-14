#include <stdio.h>

int main(void)
{
    int n = 4; // number of rows in the upper half (including middle row)

    // Upper half including middle row
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}