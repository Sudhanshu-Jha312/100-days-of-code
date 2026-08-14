/* Write a program to calculate the area and circumference of a circle given its radius. */
#include <stdio.h>

int main(void)
{
    double radius;
    const double pi = 3.14159265358979323846;

    if (scanf("%lf", &radius) != 1 || radius < 0.0) {
        return 1;
    }
    printf("Area=%.2f, Circumference=%.2f\n", pi * radius * radius, 2.0 * pi * radius);
    return 0;
}
