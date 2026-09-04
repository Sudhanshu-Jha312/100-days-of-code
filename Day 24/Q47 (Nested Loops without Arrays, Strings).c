/* Write a program to print the following pattern: *\n**\n***\n****\n***** */
#include <stdio.h>

int main(void)
{
    int row, column;
    for (row = 1; row <= 5; ++row) { for (column = 0; column < row; ++column) putchar('*'); putchar('\n'); }
    return 0;
}
