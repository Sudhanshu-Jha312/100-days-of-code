/* Write a program to print the sum of the first n odd numbers. */
#include <stdio.h>

int main(void)
{
    long n;
    if (scanf("%ld", &n) != 1 || n < 0) return 1;
    printf("%ld\n", n * n);
    return 0;
}
