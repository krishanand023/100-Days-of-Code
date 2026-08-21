// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal, rate, time;
    double simple_interest, compound_interest, total_amount;

    // Taking user inputs
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time period (in years): ");
    scanf("%lf", &time);

    // Simple Interest formula: (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100.0;

    // Compound Interest formula: Total Amount = P * (1 + R/100)^T
    // Compound Interest = Total Amount - P
    total_amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = total_amount - principal;

    // Displaying the results
    printf("\n--- Results ---\n");
    printf("Simple Interest   = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    printf("Total Amount (CI) = %.2f\n", total_amount);

    return 0;
}