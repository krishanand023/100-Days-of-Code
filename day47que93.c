// Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[1000], s2[1000];
    int freq[256] = {0};

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\r\n")] = '\0';
    s2[strcspn(s2, "\r\n")] = '\0';

    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
