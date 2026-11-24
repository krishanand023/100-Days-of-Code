// Q123: Read a text file and count total characters, words, and lines.
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[256];
    printf("Enter filename: ");
    scanf("%255s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int ch;
    long chars = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    if (chars > 0 && ch != '\n') {
        lines++;
    }

    fclose(fp);
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines);
    return 0;
}
