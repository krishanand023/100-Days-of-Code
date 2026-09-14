#include <stdio.h>

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;

    if (n < 0)
        n = -n;

    int freq[10] = {0};

    if (n == 0)
    {
        freq[0] = 1;
    }
    else
    {
        while (n > 0)
        {
            freq[n % 10]++;
            n /= 10;
        }
    }

    int max_freq = 0;
    int ans = 0;

    for (int d = 0; d <= 9; d++)
    {
        if (freq[d] > max_freq)
        {
            max_freq = freq[d];
            ans = d;
        }
    }

    printf("%d\n", ans);

    return 0;
}