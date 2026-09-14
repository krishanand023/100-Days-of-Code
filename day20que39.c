#include <stdio.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 1;
    }

    // Work with absolute value for negative inputs
    if (n < 0)
    {
        n = -n;
    }

    long long product = 1;

    // Extract digits one by one
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
        {
            product *= digit;
        }
        n /= 10;
    }

    printf("%lld\n", product);

    return 0;
}