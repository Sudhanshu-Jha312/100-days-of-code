/* Write a program to reverse a given number. */
#include <stdio.h>

int main(void)
{
    long number, reversed = 0;
    if (scanf("%ld", &number) != 1) return 1;
    while (number != 0) { reversed = reversed * 10 + number % 10; number /= 10; }
    printf("%ld\n", reversed);
    return 0;
}
