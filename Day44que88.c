#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        // Remove trailing newline if present
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }

        // Replace space with hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s\n", str);

    return 0;
}
