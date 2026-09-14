#include <stdio.h>

int main(void)
{
    int a, b;

    if (scanf("%d %d", &a, &b) != 2)
    {
        return 1;
    }

    // Convert negative numbers to positive
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // Euclidean algorithm
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);

    return 0;
}