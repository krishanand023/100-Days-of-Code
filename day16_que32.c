#include <stdio.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 1;
    }

    // Negative numbers are generally not palindromes due to the '-' sign
    if (n < 0)
    {
        printf("Not palindrome\n");
        return 0;
    }

    long long original = n;
    long long reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}