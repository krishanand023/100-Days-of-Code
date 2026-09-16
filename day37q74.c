#include <stdio.h>

int main()
{
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2)
        return 0;

    int matrix[100][100];

    // Read original matrix of size rows x cols
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print transposed matrix of size cols x rows
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%d%c", matrix[i][j], (i == rows - 1) ? '\n' : ' ');
        }
    }

    return 0;
}