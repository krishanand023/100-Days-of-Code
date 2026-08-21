// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main(void)
{
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in total seconds: ");
    scanf("%d", &total_seconds);

    // 1 hour = 3600 seconds
    hours = total_seconds / 3600;

    // Remaining seconds after extracting hours, divided by 60 for minutes
    minutes = (total_seconds % 3600) / 60;

    // Remaining seconds after extracting minutes
    seconds = total_seconds % 60;

    // %02d ensures leading zeros for single-digit numbers (e.g., 05 instead of 5)
    printf("Converted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}