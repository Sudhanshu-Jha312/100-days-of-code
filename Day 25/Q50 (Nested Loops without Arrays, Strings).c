/* Write a program to print the following pattern: *****\n ****\n  ***\n   **\n    * */
#include <stdio.h>

int main(void)
{
    int row, column;
    for (row = 0; row < 5; ++row) { for (column = 0; column < row; ++column) putchar(' '); for (column = row; column < 5; ++column) putchar('*'); putchar('\n'); }
    return 0;
}
