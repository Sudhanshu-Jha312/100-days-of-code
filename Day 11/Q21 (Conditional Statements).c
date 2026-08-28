/* Write a program to display the month name and number of days using switch-case for a given month number. */
#include <stdio.h>

int main(void)
{
    int month;
    const char *names[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (scanf("%d", &month) != 1 || month < 1 || month > 12) return 1;
    printf("%s, %d days\n", names[month], days[month]);
    return 0;
}
