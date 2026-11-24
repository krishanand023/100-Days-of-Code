// Q128: Read a text file and count vowels and consonants.
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
    long vowels = 0, consonants = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            char lower = (char)tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);
    printf("Vowels: %ld\nConsonants: %ld\n", vowels, consonants);
    return 0;
}
