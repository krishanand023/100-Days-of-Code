// Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = '\0';

    for (int i = 0; name[i] != '\0'; i++) {
        if ((i == 0 || name[i - 1] == ' ') && name[i] != ' ') {
            printf("%c.", toupper((unsigned char)name[i]));
        }
    }
    printf("\n");
    return 0;
}
