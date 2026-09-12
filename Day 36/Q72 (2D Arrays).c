/* Find the sum of all elements in a matrix. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int rows;
  int columns;
  int row;
  int column;
  int value;
  long long sum = 0;

  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 ||
      rows > MAX_DIMENSION || columns < 1 || columns > MAX_DIMENSION) {
    return 1;
  }

  for (row = 0; row < rows; ++row) {
    for (column = 0; column < columns; ++column) {
      if (scanf("%d", &value) != 1) {
        return 1;
      }
      sum += value;
    }
  }

  printf("%lld\n", sum);
  return 0;
}
