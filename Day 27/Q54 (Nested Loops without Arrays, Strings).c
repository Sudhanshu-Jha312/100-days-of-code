/* Write a program to print the following pattern:    *\n  ***\n *****\n*******\n *****\n  ***\n   * */
#include <stdio.h>

int main(void)
{
    int row, width, spaces;
    for (row = 1; row <= 7; ++row) { width = row <= 4 ? 2 * row - 1 : 2 * (8 - row) - 1; spaces = (7 - width) / 2; while (spaces-- > 0) putchar(' '); while (width-- > 0) putchar('*'); putchar('\n'); }
    return 0;
}
