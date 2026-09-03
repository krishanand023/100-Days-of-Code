// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // All three sides are equal
    if (a == b && b == c)
    {
        printf("Equilateral\n");
    }
    // Any two sides are equal
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles\n");
    }
    // All sides are different
    else
    {
        printf("Scalene\n");
    }

    return 0;
}