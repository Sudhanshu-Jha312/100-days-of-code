/* Write a program to calculate electricity bill based on units consumed with these rates: First 100 units at ₹5/unit Next 100 units at ₹7/unit Next 100 units at ₹10/unit Above at ₹12/unit */
#include <stdio.h>

int main(void)
{
    int units;
    double bill = 0.0;
    if (scanf("%d", &units) != 1 || units < 0) return 1;
    bill += (units > 100 ? 100 : units) * 5.0; if (units > 100) bill += (units > 200 ? 100 : units - 100) * 7.0; if (units > 200) bill += (units > 300 ? 100 : units - 200) * 10.0; if (units > 300) bill += (units - 300) * 12.0;
    printf("Bill: Rs%.2f\n", bill);
    return 0;
}
