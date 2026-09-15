/* Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int matrix[MAX_DIMENSION][MAX_DIMENSION];
  int rows;
  int columns;
  int row;
  int column;
  int previous;
  int distinct = 1;

  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 ||
      rows > MAX_DIMENSION || columns != rows) {
    return 1;
  }

  for (row = 0; row < rows; ++row) {
    for (column = 0; column < columns; ++column) {
      if (scanf("%d", &matrix[row][column]) != 1) {
        return 1;
      }
    }
  }

  for (row = 0; row < rows && distinct; ++row) {
    for (previous = 0; previous < row; ++previous) {
      if (matrix[row][row] == matrix[previous][previous]) {
        distinct = 0;
        break;
      }
    }
  }

  puts(distinct ? "True" : "False");
  return 0;
}
