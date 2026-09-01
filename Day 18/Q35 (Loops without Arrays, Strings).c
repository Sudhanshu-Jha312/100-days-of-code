/* Write a program to print all factors of a given number. */
#include <stdio.h>

int main(void)
{
    long number, factor;
    if (scanf("%ld", &number) != 1 || number <= 0) return 1;
    for (factor = 1; factor <= number; ++factor) if (number % factor == 0) printf("%ld%c", factor, factor == number ? '\n' : ' ');
    return 0;
}
