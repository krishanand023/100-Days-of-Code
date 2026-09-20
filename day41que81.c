#include <stdio.h>

int main()
{
    char str[1000];

    // Read the line including spaces/whitespace
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    int count = 0;

    // Traverse until the null terminator
    while (str[count] != '\0')
    {
        // Exclude trailing newline character if captured by fgets
        if (str[count] == '\n')
        {
            break;
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}