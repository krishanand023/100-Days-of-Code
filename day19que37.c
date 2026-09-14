#include <stdio.h>

int main(void)
{
    long long a, b;

    if (scanf("%lld %lld", &a, &b) != 2)
    {
        return 1;
    }

    // Work with absolute values
    long long x = (a < 0) ? -a : a;
    long long y = (b < 0) ? -b : b;

    // LCM of 0 with any number is 0
    if (x == 0 || y == 0)
    {
        printf("0\n");
        return 0;
    }

    // Compute GCD using Euclidean algorithm
    long long temp_x = x;
    long long temp_y = y;
    while (temp_y != 0)
    {
        long long rem = temp_x % temp_y;
        temp_x = temp_y;
        temp_y = rem;
    }
    long long gcd = temp_x;

    // LCM(a, b) = (|a| * |b|) / GCD(a, b)
    // Divide before multiplying to avoid potential integer overflow
    long long lcm = (x / gcd) * y;

    printf("%lld\n", lcm);

    return 0;
}