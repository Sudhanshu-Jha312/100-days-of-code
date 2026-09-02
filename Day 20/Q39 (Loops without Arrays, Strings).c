/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>

int main(void)
{
    long number, product = 1, digit;
    if (scanf("%ld", &number) != 1) return 1;
    if (number < 0) number = -number;
    do { digit = number % 10; if (digit % 2 != 0) product *= digit; number /= 10; } while (number != 0);
    printf("%ld\n", product); return 0;
}
