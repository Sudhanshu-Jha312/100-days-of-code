/* Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>

int main(void)
{
    unsigned long n, number, product = 1;
    if (scanf("%lu", &n) != 1) return 1;
    for (number = 2; number <= n; number += 2) product *= number;
    printf("%lu\n", product);
    return 0;
}
