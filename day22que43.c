#include <stdio.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 0;
    }

    // Strong numbers are defined for positive integers
    if (n <= 0)
    {
        printf("Not strong number\n");
        return 0;
    }

    // Precomputed factorials for digits 0 through 9
    const int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    long long temp = n;
    long long sum = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += fact[digit];
        temp /= 10;
    }

    if (sum == n)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not strong number\n");
    }

    return 0;
}