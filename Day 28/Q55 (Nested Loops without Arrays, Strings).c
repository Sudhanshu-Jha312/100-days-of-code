/* Write a program to print all the prime numbers from 1 to n. */
#include <stdio.h>

int main(void)
{
    int n, number, divisor, prime;
    if (scanf("%d", &n) != 1 || n < 2) return 1;
    for (number = 2; number <= n; ++number) { prime = 1; for (divisor = 2; divisor <= number / divisor; ++divisor) if (number % divisor == 0) prime = 0; if (prime) printf("%d%c", number, number == n ? '\n' : ' '); }
    return 0;
}
