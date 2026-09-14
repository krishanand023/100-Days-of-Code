#include <stdio.h>

int main(void)
{
    int groups[] = {1, 3, 5, 3, 1};
    int total_groups = 5;

    for (int i = 0; i < total_groups; i++)
    {
        for (int j = 0; j < groups[i]; j++)
        {
            printf("*\n");
        }
        if (i < total_groups - 1)
        {
            printf("\n");
        }
    }

    return 0;
}