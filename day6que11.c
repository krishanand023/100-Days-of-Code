// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the remainder when divided by 2 is 0, it is even
    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}