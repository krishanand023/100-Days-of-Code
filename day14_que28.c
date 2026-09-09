#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    if (n < 2)
    {
        printf("0\n");
        return 0;
    }

    long long product = 1;

    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
    }

    printf("%lld\n", product);

    return 0;
}