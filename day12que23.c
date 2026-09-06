/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>

int main()
{
    int days;
    int fine = 0;

    if (scanf("%d", &days) != 1)
    {
        return 1;
    }

    if (days <= 0)
    {
        printf("Fine ₹0\n");
    }
    else if (days > 30)
    {
        printf("Membership Cancelled\n");
    }
    else if (days <= 5)
    {
        fine = days * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine ₹%d\n", fine);
    }
    else
    { // 11 to 30 days
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    }

    return 0;
}