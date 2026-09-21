#include <stdio.h>

int main()
{
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    // Find the length of the string, ignoring the trailing newline
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    str[len] = '\0'; // Ensure string terminates before newline

    // Two-pointer swap to reverse in-place
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", str);

    return 0;
}