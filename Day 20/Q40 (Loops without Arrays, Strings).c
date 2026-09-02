/* Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>

int main(void)
{
    char binary[256]; size_t index;
    if (scanf("%255s", binary) != 1) return 1;
    for (index = 0; binary[index] != '\0'; ++index) { if (binary[index] != '0' && binary[index] != '1') return 1; putchar(binary[index] == '0' ? '1' : '0'); }
    putchar('\n'); return 0;
}
