/* Program 2 Day 1
Write a program to input two numbers and display their sum, difference, product, and quotient.
Also handle division by zero properly*/

#include <stdio.h>

int main(){
float number1, number2;
printf("Enter first number: ");
scanf("%f", &number1);
printf("Enter second number: ");
scanf("%f", &number2);
printf("Sum: %.5f\n", number1 + number2);
printf("Difference: %.5f\n", number1 - number2);
printf("Product: %.5f\n", number1 * number2);
if(number2 == 0){
printf("Quotient: Not Definer (Cannot divide by zero)\n");
} 
else{
printf("Quotient: %.5f\n", number1 / number2);
}
return 0;
}

