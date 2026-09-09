/* Find the sum of array elements. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, index; long sum = 0;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) { if (scanf("%d", &values[index]) != 1) return 1; sum += values[index]; }
    printf("%ld\n", sum); return 0;
}
