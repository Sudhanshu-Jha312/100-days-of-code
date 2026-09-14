/* Insert an element in an array at a given position. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, position, value, index;
    if (scanf("%d", &size) != 1 || size < 1 || size >= MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d %d", &position, &value) != 2 || position < 0 || position > size) return 1;
    for (index = size; index > position; --index) {
        values[index] = values[index - 1];
    }
    values[position] = value;
    for (index = 0; index <= size; ++index) {
        printf("%d%c", values[index], index == size ? '\n' : ' ');
    }
    return 0;
}
