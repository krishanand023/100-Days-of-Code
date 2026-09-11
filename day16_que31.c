#include <stdio.h>

int main(void)
{
    unsigned int n;

    if (scanf("%u", &n) != 1)
    {
        return 1;
    }

    // Special case for 0
    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    int binary[32];
    int index = 0;

    // Extract binary digits from least significant to most significant
    while (n > 0)
    {
        binary[index++] = n % 2;
        n /= 2;
    }

    // Print the stored bits in reverse order
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}