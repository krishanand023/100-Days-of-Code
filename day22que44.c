#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    double sum = 1.0;

    for (int i = 2; i <= n; i++)
    {
        sum += (2.0 * i - 1.0) / (2.0 * i);
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}