// Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000] = "";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\r\n")] = '\0';

    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;
    int len = strlen(str);

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
    }

    strncpy(longest, str + maxStart, maxLen);
    longest[maxLen] = '\0';
    printf("%s\n", longest);

    return 0;
}
