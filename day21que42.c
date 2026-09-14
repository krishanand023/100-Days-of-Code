#include <stdio.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 0;
    }

    // Perfect numbers must be strictly positive and greater than 1
    if (n <= 1)
    {
        printf("Not perfect number\n");
        return 0;
    }

    long long sum = 1; // 1 is a proper divisor for all n > 1

    // Check divisors up to sqrt(n)
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            // Add the complementary divisor if it is not the square root
            if (i * i != n)
            {
                sum += (n / i);
            }
        }
    }

    if (sum == n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }

    return 0;
}