/* Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>

int main(void)
{
    double first, second;

    if (scanf("%lf %lf", &first, &second) != 2) {
        return 1;
    }
    printf("Sum=%.15g, Diff=%.15g, Product=%.15g, ", first + second, first - second, first * second);
    if (second == 0.0) {
        printf("Quotient=undefined\n");
    } else {
        printf("Quotient=%.15g\n", first / second);
    }
    return 0;
}
