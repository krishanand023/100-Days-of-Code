// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(void)
{
    float cp, sp, percentage;

    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        // Calculate profit percentage
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
    else if (cp > sp)
    {
        // Calculate loss percentage
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", percentage);
    }
    else
    {
        // Cost price equals selling price
        printf("No Profit No Loss\n");
    }

    return 0;
}