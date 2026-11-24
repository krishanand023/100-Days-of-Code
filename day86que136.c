// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Choice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice, a, b;
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch ((enum Choice)choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
