#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[100][100];
    int row_sums[100];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row and store in row_sums array
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }

    // Print the row sums
    for (int i = 0; i < rows; i++) {
        printf("%d%c", row_sums[i], (i == rows - 1) ? '\n' : ' ');
    }

    return 0;
}