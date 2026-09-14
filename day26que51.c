#include <stdio.h>

int main(void)
{
    int rows = 5;

    for (int i = rows; i >= 1; i--)
    {
        // Print leading spaces
        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }
        // Print numbers from i to rows
        for (int j = i; j <= rows; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}