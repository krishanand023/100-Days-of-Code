// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Level {
    LEVEL_ONE = 100,
    LEVEL_TWO = 200,
    LEVEL_THREE = 300
};

int main() {
    enum Level lvl = LEVEL_TWO;
    int numericVal = lvl;

    printf("LEVEL_ONE = %d\n", LEVEL_ONE);
    printf("LEVEL_TWO = %d\n", lvl);
    printf("LEVEL_THREE = %d\n", LEVEL_THREE);
    printf("Stored as integer: %d (sizeof = %zu bytes)\n", numericVal, sizeof(lvl));

    return 0;
}
