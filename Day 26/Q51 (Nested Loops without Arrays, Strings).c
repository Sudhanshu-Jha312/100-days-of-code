/* Write a program to print the following pattern:     5\n   45\n  345\n 2345\n12345 */
#include <stdio.h>

int main(void)
{
    int row, column;
    for (row = 5; row >= 1; --row) { for (column = 1; column < row; ++column) putchar(' '); for (column = row; column <= 5; ++column) printf("%d", column); putchar('\n'); }
    return 0;
}
