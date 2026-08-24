/* Write a program to input a character and check whether it is a vowel or consonant using if–else. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char character;

    if (scanf(" %c", &character) != 1 || !isalpha((unsigned char)character)) {
        return 1;
    }
    printf("%s\n", strchr("aeiouAEIOU", character) != NULL ? "Vowel" : "Consonant");
    return 0;
}
