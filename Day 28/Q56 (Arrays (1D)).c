/* Read and print elements of a one-dimensional array. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, index;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    for (index = 0; index < size; ++index) printf("%d%c", values[index], index == size - 1 ? '\n' : ' ');
    return 0;
}
