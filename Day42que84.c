#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        // Exclude trailing newline character from fgets
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }

        // Convert lowercase character to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // or str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);

    return 0;
}
