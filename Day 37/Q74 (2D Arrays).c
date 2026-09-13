/* Find the transpose of a matrix. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int matrix[MAX_DIMENSION][MAX_DIMENSION];
  int rows;
  int columns;
  int row;
  int column;

  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 ||
      rows > MAX_DIMENSION || columns < 1 || columns > MAX_DIMENSION) {
    return 1;
  }

  for (row = 0; row < rows; ++row) {
    for (column = 0; column < columns; ++column) {
      if (scanf("%d", &matrix[row][column]) != 1) {
        return 1;
      }
    }
  }

  for (column = 0; column < columns; ++column) {
    for (row = 0; row < rows; ++row) {
      printf("%d%c", matrix[row][column], row == rows - 1 ? '\n' : ' ');
    }
  }
  return 0;
}
