#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 0;
    }

    // Handle negative numbers if any
    int isNegative = (n < 0);
    if (isNegative)
    {
        n = -n;
    }

    // Single digit numbers remain unchanged
    if (n < 10)
    {
        if (isNegative)
            n = -n;
        printf("%lld\n", n);
        return 0;
    }

    int last_digit = n % 10;
    long long temp = n;
    long long divisor = 1;

    // Find the place value of the highest digit
    while (temp >= 10)
    {
        temp /= 10;
        divisor *= 10;
    }

    int first_digit = temp;

    // Remove first and last digits to extract the middle part
    long long middle_part = (n % divisor) / 10;

    // Construct the swapped number
    long long swapped_number = (last_digit * divisor) + (middle_part * 10) + first_digit;

    if (isNegative)
    {
        swapped_number = -swapped_number;
    }

    printf("%lld\n", swapped_number);

    return 0;
}