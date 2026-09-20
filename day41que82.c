#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        // Stop if a newline character is encountered
        if (str[i] == '\n') {
            break;
        }
        printf("%c\n", str[i]);
    }

    return 0;
}