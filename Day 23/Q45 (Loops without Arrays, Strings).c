/* Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */
#include <stdio.h>

int main(void)
{
    int n, term; double sum = 0.0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (term = 1; term <= n; ++term) sum += (2.0 * term) / (4.0 * term - 1.0);
    printf("Approximate sum: %.2f\n", sum); return 0;
}
