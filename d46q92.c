#include <stdio.h>

int main()
{
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    int seen[26] = {0};
    char first_repeating = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            break;
        }

        // Process only lowercase alphabets
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            if (seen[index] == 1)
            {
                first_repeating = str[i];
                break;
            }
            seen[index] = 1;
        }
    }

    if (first_repeating != '\0')
    {
        printf("%c\n", first_repeating);
    }

    return 0;
}