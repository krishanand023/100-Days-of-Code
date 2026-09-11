#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 1;
    }

    if (n < 0)
    {
        printf("Not Armstrong\n");
        return 0;
    }

    long long temp = n;
    int digits = 0;

    // Count the number of digits
    long long count_temp = n;
    if (count_temp == 0)
    {
        digits = 1;
    }
    else
    {
        while (count_temp > 0)
        {
            digits++;
            count_temp /= 10;
        }
    }

    // Calculate sum of each digit raised to the power of total digits
    long long sum = 0;
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;

        // Compute digit^digits using integer multiplication to avoid floating point inaccuracies
        long long power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == n)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    return 0;
}