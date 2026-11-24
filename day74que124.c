// Q124: Copy content from a source file to a destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char srcName[256], destName[256];
    printf("Enter source filename: ");
    scanf("%255s", srcName);
    printf("Enter destination filename: ");
    scanf("%255s", destName);

    FILE *src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}
