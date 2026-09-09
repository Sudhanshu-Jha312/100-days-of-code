/* Count positive, negative, and zero elements in an array. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int size, index, value, positive = 0, negative = 0, zero = 0;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) { if (scanf("%d", &value) != 1) return 1; if (value > 0) ++positive; else if (value < 0) ++negative; else ++zero; }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero); return 0;
}
