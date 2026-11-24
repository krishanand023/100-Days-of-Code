// Q114: Length of the longest substring without repeating characters.
#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    s[strcspn(s, "\r\n")] = '\0';

    int lastSeen[256];
    for (int i = 0; i < 256; i++) lastSeen[i] = -1;

    int maxLen = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }
        lastSeen[ch] = i;
        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
