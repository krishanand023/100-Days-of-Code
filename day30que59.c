#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Even=%d, Odd=%d\n", even_count, odd_count);

    return 0;
}