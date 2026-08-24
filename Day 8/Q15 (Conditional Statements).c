/* Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char character;

    if (scanf(" %c", &character) != 1) return 1;
    if (isupper((unsigned char)character)) printf("Uppercase alphabet\n");
    else if (islower((unsigned char)character)) printf("Lowercase alphabet\n");
    else if (isdigit((unsigned char)character)) printf("Digit\n");
    else printf("Special character\n");
    return 0;
}
