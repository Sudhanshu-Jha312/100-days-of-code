/* Write a program to check if a number is an Armstrong number. */
#include <stdio.h>

static int digits(long number) { int count = 0; do { ++count; number /= 10; } while (number != 0); return count; }
static long power(long base, int exponent) { long result = 1; while (exponent-- > 0) result *= base; return result; }
int main(void)
{
    long number, original, sum = 0, digit; int count;
    if (scanf("%ld", &number) != 1 || number < 0) return 1;
    original = number; count = digits(number); do { digit = number % 10; sum += power(digit, count); number /= 10; } while (number != 0);
    puts(sum == original ? "Armstrong" : "Not Armstrong"); return 0;
}
