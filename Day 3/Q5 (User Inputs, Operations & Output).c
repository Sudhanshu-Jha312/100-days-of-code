/* Write a program to convert temperature from Celsius to Fahrenheit. */
#include <stdio.h>

int main(void)
{
    double celsius;

    if (scanf("%lf", &celsius) != 1) {
        return 1;
    }
    printf("Fahrenheit=%.15g\n", celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
