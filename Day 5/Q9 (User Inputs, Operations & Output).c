/* Write a program to calculate simple and compound interest for given principal, rate, and time. */
#include <stdio.h>

int main(void)
{
    double principal, rate, simple_interest, compound_interest = 0.0;
    int years, year;

    if (scanf("%lf %lf %d", &principal, &rate, &years) != 3 || principal < 0.0 || rate < 0.0 || years < 0) {
        return 1;
    }
    compound_interest = principal;
    for (year = 0; year < years; ++year) {
        compound_interest *= 1.0 + rate / 100.0;
    }
    simple_interest = principal * rate * years / 100.0;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest - principal);
    return 0;
}
