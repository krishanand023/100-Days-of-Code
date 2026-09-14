#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    double sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}