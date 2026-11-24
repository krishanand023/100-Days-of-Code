// Q120: Change a string input to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[10000];
    if (!fgets(str, sizeof(str), stdin)) return 0;

    int newSentence = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (isalpha(ch)) {
            if (newSentence) {
                str[i] = (char)toupper(ch);
                newSentence = 0;
            } else {
                str[i] = (char)tolower(ch);
            }
        } else if (ch == '.' || ch == '!' || ch == '?') {
            newSentence = 1;
        }
    }

    printf("%s", str);
    return 0;
}
