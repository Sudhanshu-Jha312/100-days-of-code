/* Write a program to check if a number is a strong number. */
#include <stdio.h>

static long factorial(int digit) { long result = 1; while (digit > 1) result *= digit--; return result; }
int main(void)
{
    long number, original, sum = 0; int digit;
    if (scanf("%ld", &number) != 1 || number < 0) return 1;
    original = number; do { digit = (int)(number % 10); sum += factorial(digit); number /= 10; } while (number != 0);
    puts(sum == original ? "Strong number" : "Not strong number"); return 0;
}
