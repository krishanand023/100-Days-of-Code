#include <stdio.h>

int main()
{
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2)
        return 0;

    int matrix[100][100];

    // Read the matrix elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d%c", matrix[i][j], (j == cols - 1) ? '\n' : ' ');
        }
    }

    return 0;
}