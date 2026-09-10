/* Merge two arrays. */
#include <stdio.h>

#define MAX_SIZE 100
int main(void)
{
    int first[MAX_SIZE], second[MAX_SIZE], first_size, second_size, index;
    if (scanf("%d", &first_size) != 1 || first_size < 1 || first_size > MAX_SIZE) return 1;
    for (index = 0; index < first_size; ++index) if (scanf("%d", &first[index]) != 1) return 1;
    if (scanf("%d", &second_size) != 1 || second_size < 1 || first_size + second_size > MAX_SIZE) return 1;
    for (index = 0; index < second_size; ++index) if (scanf("%d", &second[index]) != 1) return 1;
    for (index = 0; index < first_size; ++index) {
        printf("%d ", first[index]);
    }
    for (index = 0; index < second_size; ++index) {
        printf("%d%c", second[index], index == second_size - 1 ? '\n' : ' ');
    }
    return 0;
}
