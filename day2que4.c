#include <stdio.h>

int main()
{
    double r1;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r1);
    // further we will give output after calculating area and circumference
    printf("\nArea of the circle is: %lf ", 3.141592 * r1 * r1);
    printf("\nCircumference of the circle is: %lf ", 3.141592 * r1 * 2);
    return 0;
}
