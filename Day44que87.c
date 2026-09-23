#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int spaces = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // Stop at the newline character produced by fgets
        if (str[i] == '\n') {
            break;
        }

        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Alphabetic character; do not count towards special characters
            continue;
        } else {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
