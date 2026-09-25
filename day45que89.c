#include <stdio.h>

int main() {
    char str[1000];
    char target;

    // Read the string (which may contain spaces)
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Read the target character (the leading space skips any leftover newline)
    if (scanf(" %c", &target) != 1) {
        return 0;
    }

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break;
        }
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
