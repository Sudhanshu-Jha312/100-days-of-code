/* Add two matrices. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int first[MAX_DIMENSION][MAX_DIMENSION];
  int second[MAX_DIMENSION][MAX_DIMENSION];
  int rows;
  int columns;
  int second_rows;
  int second_columns;
  int row;
  int column;

  if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 ||
      rows > MAX_DIMENSION || columns < 1 || columns > MAX_DIMENSION) {
    return 1;
  }
  for (row = 0; row < rows; ++row) {
    for (column = 0; column < columns; ++column) {
      if (scanf("%d", &first[row][column]) != 1) {
        return 1;
      }
    }
  }

  if (scanf("%d %d", &second_rows, &second_columns) != 2 ||
      second_rows != rows || second_columns != columns) {
    return 1;
  }
  for (row = 0; row < rows; ++row) {
    for (column = 0; column < columns; ++column) {
      if (scanf("%d", &second[row][column]) != 1) {
        return 1;
      }
    }
  }

  for (row = 0; row < rows; ++row) {
    for (column = 0; column < columns; ++column) {
      printf("%d%c", first[row][column] + second[row][column],
             column == columns - 1 ? '\n' : ' ');
    }
  }
  return 0;
}
