/* Write a program to check if a number is prime. */
#include <stdio.h>

int main(void)
{
    long number, divisor;
    int prime = 1;
    if (scanf("%ld", &number) != 1 || number < 2) prime = 0;
    for (divisor = 2; prime && divisor <= number / divisor; ++divisor) if (number % divisor == 0) prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
