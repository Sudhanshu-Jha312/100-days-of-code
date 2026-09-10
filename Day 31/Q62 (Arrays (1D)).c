/* Reverse an array without taking extra space. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, left, right, temporary;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (left = 0; left < size; ++left) if (scanf("%d", &values[left]) != 1) return 1;
    for (left = 0, right = size - 1; left < right; ++left, --right) { temporary = values[left]; values[left] = values[right]; values[right] = temporary; }
    for (left = 0; left < size; ++left) {
        printf("%d%c", values[left], left == size - 1 ? '\n' : ' ');
    }
    return 0;
}
