// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    COLOR_COUNT
};

int main() {
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (int i = RED; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
