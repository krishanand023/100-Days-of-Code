// Q115: Determine if two lowercase strings s and t are valid anagrams.
#include <stdio.h>
#include <string.h>

int main() {
    char s[10000], t[10000];
    int freq[26] = {0};

    if (scanf("%9999s %9999s", s, t) != 2) return 0;

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
