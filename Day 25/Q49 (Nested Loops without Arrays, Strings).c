/* Write a program to print the following pattern: 5\n45\n345\n2345\n12345 */
#include <stdio.h>

int main(void)
{
    int row, number;
    for (row = 5; row >= 1; --row) { for (number = row; number <= 5; ++number) printf("%d", number); putchar('\n'); }
    return 0;
}
