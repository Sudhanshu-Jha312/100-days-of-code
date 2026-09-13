/* Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int rows;
  int columns;
  int row;
  int column;
  int value;
  long long row_sum;

  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 ||
      rows > MAX_DIMENSION || columns < 1 || columns > MAX_DIMENSION) {
    return 1;
  }

  for (row = 0; row < rows; ++row) {
    row_sum = 0;
    for (column = 0; column < columns; ++column) {
      if (scanf("%d", &value) != 1) {
        return 1;
      }
      row_sum += value;
    }
    printf("%lld%c", row_sum, row == rows - 1 ? '\n' : ' ');
  }
  return 0;
}
