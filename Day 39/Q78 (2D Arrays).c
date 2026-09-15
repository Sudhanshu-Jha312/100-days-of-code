/* Find the sum of main diagonal elements for a square matrix. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int size;
  int row;
  int column;
  int value;
  long long diagonal_sum = 0;

  if (scanf("%d %d", &size, &column) != 2 || size < 1 || size > MAX_DIMENSION ||
      column != size) {
    return 1;
  }

  for (row = 0; row < size; ++row) {
    for (column = 0; column < size; ++column) {
      if (scanf("%d", &value) != 1) {
        return 1;
      }
      if (row == column) {
        diagonal_sum += value;
      }
    }
  }

  printf("%lld\n", diagonal_sum);
  return 0;
}
