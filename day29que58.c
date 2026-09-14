#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    int val;
    scanf("%d", &val);

    int max = val;
    int min = val;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
        if (val < min)
        {
            min = val;
        }
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}