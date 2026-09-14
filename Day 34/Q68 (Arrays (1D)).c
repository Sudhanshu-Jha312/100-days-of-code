/* Delete an element from an array. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, position, index;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d", &position) != 1 || position < 0 || position >= size) return 1;
    for (index = position; index < size - 1; ++index) values[index] = values[index + 1];
    for (index = 0; index < size - 1; ++index) {
        printf("%d%c", values[index], index == size - 2 ? '\n' : ' ');
    }
    return 0;
}
