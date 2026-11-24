// Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], temp[2000];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\r\n")] = '\0';
    s2[strcspn(s2, "\r\n")] = '\0';

    if (strlen(s1) != strlen(s2)) {
        printf("Not Rotation\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not Rotation\n");
    }

    return 0;
}
