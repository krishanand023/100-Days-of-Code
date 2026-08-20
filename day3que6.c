// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before Swapping\n");
    printf("First number = %d, Second number = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("First number = %d, Second number = %d\n", a, b);

    return 0;
}
