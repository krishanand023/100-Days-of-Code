#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    // Numbers less than or equal to 1 are not prime
    if (n <= 1)
    {
        printf("Not prime\n");
        return 0;
    }

    // 2 and 3 are prime numbers
    if (n <= 3)
    {
        printf("Prime\n");
        return 0;
    }

    // Exclude multiples of 2 and 3
    if (n % 2 == 0 || n % 3 == 0)
    {
        printf("Not prime\n");
        return 0;
    }

    int is_prime = 1;

    // Check divisors up to sqrt(n) using 6k ± 1 pattern
    for (int i = 5; (long long)i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if (is_prime)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    return 0;
}