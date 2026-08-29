/* Write a program to print numbers from 1 to n. */
#include <stdio.h>

int main(void)
{
    int n, number;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (number = 1; number <= n; ++number) printf("%d%c", number, number == n ? '\n' : ' ');
    return 0;
}
