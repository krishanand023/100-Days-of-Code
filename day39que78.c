#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }

    int sum = 0;
    int val;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &val);
            if (i == j) {
                sum += val;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}