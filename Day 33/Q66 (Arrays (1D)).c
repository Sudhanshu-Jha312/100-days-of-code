/* Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, value, index;
    if (scanf("%d", &size) != 1 || size < 1 || size >= MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d", &value) != 1) return 1;
    index = size; while (index > 0 && values[index - 1] > value) { values[index] = values[index - 1]; --index; } values[index] = value;
    for (index = 0; index <= size; ++index) {
        printf("%d%c", values[index], index == size ? '\n' : ' ');
    }
    return 0;
}
