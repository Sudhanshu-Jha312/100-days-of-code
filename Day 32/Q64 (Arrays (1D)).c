/* Find the digit that occurs the most times in an integer number. */
#include <stdio.h>

int main(void)
{
    unsigned long number; int counts[10] = {0}, digit, best = 0;
    if (scanf("%lu", &number) != 1) return 1;
    do { ++counts[number % 10]; number /= 10; } while (number != 0);
    for (digit = 1; digit < 10; ++digit) if (counts[digit] > counts[best]) best = digit;
    printf("%d\n", best); return 0;
}
