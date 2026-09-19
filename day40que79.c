#include <stdio.h>

int main(void)
{
    int m, n;
    if (scanf("%d %d", &m, &n) != 2)
    {
        return 0;
    }

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int total_diagonals = m + n - 1;
    int first = 1;

    for (int s = 0; s < total_diagonals; s++)
    {
        if (s % 2 == 0)
        {
            // Traverse upwards: row starts from min(s, m - 1) down to col < n
            int r = (s < m) ? s : m - 1;
            int c = s - r;
            while (r >= 0 && c < n)
            {
                if (!first)
                    printf(" ");
                printf("%d", matrix[r][c]);
                first = 0;
                r--;
                c++;
            }
        }
        else
        {
            // Traverse downwards: col starts from min(s, n - 1) down to row < m
            int c = (s < n) ? s : n - 1;
            int r = s - c;
            while (c >= 0 && r < m)
            {
                if (!first)
                    printf(" ");
                printf("%d", matrix[r][c]);
                first = 0;
                r++;
                c--;
            }
        }
    }
    printf("\n");

    return 0;
}