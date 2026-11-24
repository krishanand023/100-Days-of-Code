// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseRange(char *str, int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\r\n")] = '\0';

    int len = strlen(str);
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseRange(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("%s\n", str);
    return 0;
}
