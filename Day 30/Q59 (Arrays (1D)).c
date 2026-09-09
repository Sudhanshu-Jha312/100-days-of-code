/* Count even and odd numbers in an array. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int size, index, value, even = 0, odd = 0;
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) return 1;
    for (index = 0; index < size; ++index) { if (scanf("%d", &value) != 1) return 1; if (value % 2 == 0) ++even; else ++odd; }
    printf("Even=%d, Odd=%d\n", even, odd); return 0;
}
