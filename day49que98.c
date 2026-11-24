// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = '\0';

    int len = strlen(name);
    while (len > 0 && name[len - 1] == ' ') {
        name[--len] = '\0';
    }

    int lastSpace = -1;
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    for (int i = 0; i < lastSpace; i++) {
        if ((i == 0 || name[i - 1] == ' ') && name[i] != ' ') {
            printf("%c.", toupper((unsigned char)name[i]));
        }
    }

    if (lastSpace != -1) {
        printf(" %s\n", name + lastSpace + 1);
    } else {
        printf("%s\n", name);
    }

    return 0;
}
