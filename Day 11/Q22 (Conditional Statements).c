/* Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

int main(void)
{
    double cost, selling, percentage;
    if (scanf("%lf %lf", &cost, &selling) != 2 || cost <= 0.0 || selling < 0.0) return 1;
    if (selling > cost) { percentage = (selling - cost) * 100.0 / cost; printf("Profit %.15g%%\n", percentage); }
    else if (selling < cost) { percentage = (cost - selling) * 100.0 / cost; printf("Loss %.15g%%\n", percentage); }
    else puts("No Profit No Loss");
    return 0;
}
