// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main(void)
{
    char ch;

    scanf(" %c", &ch);

    // Check for both lowercase and uppercase vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}