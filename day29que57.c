#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        sum += val;
    }

    printf("%lld\n", sum);

    return 0;
}