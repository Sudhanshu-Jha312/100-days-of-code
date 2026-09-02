/* Write a program to find the LCM of two numbers. */
#include <stdio.h>

int main(void)
{
    long first, second, a, b, gcd;
    if (scanf("%ld %ld", &first, &second) != 2) return 1;
    if (first < 0) first = -first;
    if (second < 0) second = -second;
    a = first; b = second; while (b != 0) { long remainder = a % b; a = b; b = remainder; }
    gcd = a; printf("%ld\n", gcd == 0 ? 0 : (first / gcd) * second); return 0;
}
