#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    if (n < 0)
    {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("%llu\n", fact);

    return 0;
}