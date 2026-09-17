#include <stdio.h>

int main(void)
{
    int r1, c1, r2, c2;

    // Read dimensions of the first matrix
    if (scanf("%d %d", &r1, &c1) != 2)
        return 0;

    int a[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Read dimensions of the second matrix
    if (scanf("%d %d", &r2, &c2) != 2)
        return 0;

    int b[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix addition requires matching dimensions
    if (r1 != r2 || c1 != c2)
    {
        printf("Matrices cannot be added.\n");
        return 0;
    }

    // Compute sum and print directly
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d", a[i][j] + b[i][j]);
            if (j < c1 - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}