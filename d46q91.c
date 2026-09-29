#include <stdio.h>

int main()
{
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    int write_idx = 0;

    for (int read_idx = 0; str[read_idx] != '\0'; read_idx++)
    {
        char ch = str[read_idx];

        // Strip trailing newline character
        if (ch == '\n')
        {
            break;
        }

        // Check if character is a vowel (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            continue;
        }

        // Keep non-vowel characters
        str[write_idx++] = ch;
    }

    str[write_idx] = '\0';

    printf("%s\n", str);

    return 0;
}