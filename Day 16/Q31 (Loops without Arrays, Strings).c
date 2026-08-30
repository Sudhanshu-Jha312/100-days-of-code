/* Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>

int main(void)
{
    unsigned long number, divisor = 1;
    if (scanf("%lu", &number) != 1) return 1;
    if (number == 0) { puts("0"); return 0; }
    while (divisor <= number / 2) divisor *= 2;
    while (divisor != 0) { putchar(number >= divisor ? '1' : '0'); if (number >= divisor) number -= divisor; divisor /= 2; }
    putchar('\n');
    return 0;
}
