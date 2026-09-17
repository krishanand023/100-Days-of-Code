#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int r, c;
    if (scanf("%d %d", &r, &c) != 2)
        return 0;

    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (r != c)
    {
        printf("False\n");
        return 0;
    }

    bool is_symmetric = true;

    // Check if matrix[i][j] == matrix[j][i]
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric)
            break;
    }

    if (is_symmetric)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}