#include <stdio.h>

int main(void)
{
    // Variable declaration
    int a, b, sum;

    // Taking user input
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Processing
    sum = a + b;

    // Displaying output
    printf("Sum: %d\n", sum);

    return 0;
}