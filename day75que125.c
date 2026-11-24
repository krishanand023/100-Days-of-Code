// Q125: Open an existing file in append mode and append a new line of text.
#include <stdio.h>
#include <string.h>

int main() {
    char filename[256], text[1000];
    printf("Enter filename: ");
    scanf("%255s", filename);
    getchar(); // consume trailing newline

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
