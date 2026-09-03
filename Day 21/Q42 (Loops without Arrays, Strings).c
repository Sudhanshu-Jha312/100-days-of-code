/* Write a program to check if a number is a perfect number. */
#include <stdio.h>

int main(void)
{
    long number, divisor, sum = 1;
    if (scanf("%ld", &number) != 1 || number <= 0) return 1;
    if (number == 1) sum = 0; else for (divisor = 2; divisor <= number / divisor; ++divisor) if (number % divisor == 0) { sum += divisor; if (divisor != number / divisor) sum += number / divisor; }
    puts(sum == number ? "Perfect number" : "Not perfect number"); return 0;
}
