/* Write a program to find and display the sum of the first n natural numbers. */
#include <stdio.h>

int main(void)
{
    unsigned long n;

    if (scanf("%lu", &n) != 1) {
        return 1;
    }
    if (n > 607400099UL) {
        return 1;
    }
    printf("Sum=%lu\n", n * (n + 1UL) / 2UL);
    return 0;
}
