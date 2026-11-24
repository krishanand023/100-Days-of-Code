// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[30];
    int dd, mm, yyyy;
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) == 3 && mm >= 1 && mm <= 12) {
        printf("%02d-%s-%04d\n", dd, months[mm - 1], yyyy);
    } else {
        printf("Invalid date format\n");
    }

    return 0;
}
