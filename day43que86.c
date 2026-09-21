#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Find the length of the string, ignoring the trailing newline
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    int left = 0;
    int right = len - 1;
    int is_palindrome = 1;

    // Check characters from both ends moving inward
    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}