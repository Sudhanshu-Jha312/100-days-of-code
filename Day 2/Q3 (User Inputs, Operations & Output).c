/* Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */
#include <stdio.h>

int main(void)
{
    double length, breadth;

    if (scanf("%lf %lf", &length, &breadth) != 2 || length < 0.0 || breadth < 0.0) {
        return 1;
    }
    printf("Area=%.15g, Perimeter=%.15g\n", length * breadth, 2.0 * (length + breadth));
    return 0;
}
