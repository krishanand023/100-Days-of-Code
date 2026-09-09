#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);

    return 0;
}