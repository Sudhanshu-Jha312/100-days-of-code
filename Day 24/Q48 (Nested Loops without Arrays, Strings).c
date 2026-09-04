/* Write a program to print the following pattern: 1\n12\n123\n1234\n12345 */
#include <stdio.h>

int main(void)
{
    int row, number;
    for (row = 1; row <= 5; ++row) { for (number = 1; number <= row; ++number) printf("%d", number); putchar('\n'); }
    return 0;
}
