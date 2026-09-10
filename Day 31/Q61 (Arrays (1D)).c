/* Search for an element in an array using linear search. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, target, index, found = -1;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (index = 0; index < size; ++index) if (values[index] == target) { found = index; break; }
    if (found >= 0) printf("Found at index %d\n", found); else puts("-1"); return 0;
}
