/* Search in a sorted array using binary search. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, target, left = 0, right, middle, found = -1;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (right = 0; right < size; ++right) if (scanf("%d", &values[right]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    right = size - 1;
    while (left <= right) { middle = left + (right - left) / 2; if (values[middle] == target) { found = middle; break; } if (values[middle] < target) left = middle + 1; else right = middle - 1; }
    if (found >= 0) printf("Found at index %d\n", found); else puts("-1"); return 0;
}
