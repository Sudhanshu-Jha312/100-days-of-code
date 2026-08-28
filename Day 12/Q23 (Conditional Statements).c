/* Write a program to calculate library fine based on late days as follows: First 5 days late: ₹2/day Next 5 days late: ₹4/day Next 20 days days late: ₹6/day More than 30 days: Membership Cancelled. */
#include <stdio.h>

int main(void)
{
    int late, fine = 0;
    if (scanf("%d", &late) != 1 || late < 0) return 1;
    if (late > 30) puts("Membership Cancelled");
    else { fine += (late > 5 ? 5 : late) * 2; if (late > 5) fine += (late > 10 ? 5 : late - 5) * 4; if (late > 10) fine += (late - 10) * 6; printf("Fine Rs%d\n", fine); }
    return 0;
}
