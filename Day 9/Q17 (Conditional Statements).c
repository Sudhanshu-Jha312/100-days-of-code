/* Write a program to find the roots of a quadratic equation and categorize them. */
#include <stdio.h>

static double root(double value)
{
    double guess = value > 1.0 ? value : 1.0;
    int iteration;
    for (iteration = 0; iteration < 30; ++iteration) guess = (guess + value / guess) / 2.0;
    return guess;
}

int main(void)
{
    double a, b, c, discriminant, first, second;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) return 1;
    discriminant = b * b - 4.0 * a * c;
    if (discriminant < 0.0) printf("Roots are complex\n");
    else if (discriminant == 0.0) printf("Roots are real and same: %.15g\n", -b / (2.0 * a));
    else { first = (-b + root(discriminant)) / (2.0 * a); second = (-b - root(discriminant)) / (2.0 * a); printf("Roots are real and different: %.15g, %.15g\n", first, second); }
    return 0;
}
