/* Write a program to input three numbers and find the largest among them using if–else. */
#include <stdio.h>

int main(void)
{
    long first, second, third, largest;

    if (scanf("%ld %ld %ld", &first, &second, &third) != 3) return 1;
    largest = first;
    if (second > largest) largest = second;
    if (third > largest) largest = third;
    printf("Largest is %ld\n", largest);
    return 0;
}
