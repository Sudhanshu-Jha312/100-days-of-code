/* Write a program to input two numbers and display their sum. */
#include <stdio.h>

int main(void)
{
    double first, second;

    if (scanf("%lf %lf", &first, &second) != 2) {
        return 1;
    }
    printf("Sum = %.15g\n", first + second);
    return 0;
}
