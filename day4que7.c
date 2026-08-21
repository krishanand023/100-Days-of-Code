// Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(void)
{
    int a = 10, b = 25;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Arithmetic swap
    a = a + b; // a becomes 35
    b = a - b; // b becomes 10 (original a)
    a = a - b; // a becomes 25 (original b)

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}