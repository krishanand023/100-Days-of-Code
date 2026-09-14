#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);

        if (val > 0)
        {
            pos_count++;
        }
        else if (val < 0)
        {
            neg_count++;
        }
        else
        {
            zero_count++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos_count, neg_count, zero_count);

    return 0;
}