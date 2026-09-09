/* Find the maximum and minimum element in an array. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int values[MAX_SIZE], size, index, maximum, minimum;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE || scanf("%d", &values[0]) != 1) return 1;
    maximum = minimum = values[0];
    for (index = 1; index < size; ++index) { if (scanf("%d", &values[index]) != 1) return 1; if (values[index] > maximum) maximum = values[index]; if (values[index] < minimum) minimum = values[index]; }
    printf("Max=%d, Min=%d\n", maximum, minimum); return 0;
}
