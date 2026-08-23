/* Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. */
#include <stdio.h>

int main(void)
{
    long number;

    if (scanf("%ld", &number) != 1) {
        return 1;
    }
    if (number > 0) printf("Positive\n");
    else if (number < 0) printf("Negative\n");
    else printf("Zero\n");
    return 0;
}
