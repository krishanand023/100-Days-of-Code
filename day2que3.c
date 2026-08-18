// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    // we will first get the input form the user
    int l1, b1;
    printf("Enter the length of your rectangle: ");
    scanf("%d", &l1);
    printf("Enter the breadth of your rectange: ");
    scanf("%d", &b1);
    // further we will give output after calculating area and preimeter
    printf("\nArea of the rectangle is: %d ", l1 * b1);
    printf("\nPerimeter of the rectangle is: %d ", l1 * b1 * 2);
    return 0;
}
