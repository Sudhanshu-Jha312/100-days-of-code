/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>

int main(void)
{
    long number, first, last, power = 1, middle;
    if (scanf("%ld", &number) != 1 || number < 0) return 1;
    if (number < 10) { printf("%ld\n", number); return 0; }
    last = number % 10; while (number / power >= 10) power *= 10; first = number / power; middle = (number % power) / 10;
    printf("%ld\n", last * power + middle * 10 + first); return 0;
}
