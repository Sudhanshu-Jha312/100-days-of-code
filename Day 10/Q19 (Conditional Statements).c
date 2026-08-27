/* Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. */
#include <stdio.h>

int main(void)
{
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0.0 || b <= 0.0 || c <= 0.0 || a + b <= c || a + c <= b || b + c <= a) return 1;
    if (a == b && b == c) puts("Equilateral");
    else if (a == b || b == c || a == c) puts("Isosceles");
    else puts("Scalene");
    return 0;
}
