// Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    const char *monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        printf("%s: %d days\n", monthNames[m], daysInMonth[m]);
    }

    return 0;
}
