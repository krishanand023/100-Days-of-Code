/*Program 1 of Day1
Write a program to input 2 numbers and display their sum*/

#include <stdio.h>

int main(){
int num1, num2;
printf("Enter your first number: ");
scanf("%d", &num1);
printf("Enter your second number: ");
scanf("%d", &num2);
printf("The sum of the two numbers is: %d ", num1 + num2);
return 0;
}
