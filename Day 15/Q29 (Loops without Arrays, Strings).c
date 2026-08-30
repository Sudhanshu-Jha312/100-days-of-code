/* Write a program to calculate the factorial of a number. */
#include <stdio.h>

int main(void)
{
    unsigned int n, number;
    unsigned long factorial = 1;
    if (scanf("%u", &n) != 1 || n > 12) return 1;
    for (number = 2; number <= n; ++number) factorial *= number;
    printf("%lu\n", factorial);
    return 0;
}
