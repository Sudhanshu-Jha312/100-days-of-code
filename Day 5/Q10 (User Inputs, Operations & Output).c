/* Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>

int main(void)
{
    long total_seconds;

    if (scanf("%ld", &total_seconds) != 1 || total_seconds < 0) {
        return 1;
    }
    printf("%ld:%ld:%ld\n", total_seconds / 3600, (total_seconds / 60) % 60, total_seconds % 60);
    return 0;
}
