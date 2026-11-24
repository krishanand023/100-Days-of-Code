// Q126: Check if a file exists by opening in read mode; display content if it exists.
#include <stdio.h>

int main() {
    char filename[256];
    printf("Enter filename: ");
    scanf("%255s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
