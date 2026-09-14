/* Check if a matrix is symmetric. */
#include <stdio.h>

#define MAX_DIMENSION 20

int main(void) {
  int matrix[MAX_DIMENSION][MAX_DIMENSION];
  int size;
  int row;
  int column;
  int symmetric = 1;

  if (scanf("%d %d", &size, &column) != 2 || size < 1 || size > MAX_DIMENSION ||
      column != size) {
    return 1;
  }

  for (row = 0; row < size; ++row) {
    for (column = 0; column < size; ++column) {
      if (scanf("%d", &matrix[row][column]) != 1) {
        return 1;
      }
    }
  }

  for (row = 0; row < size && symmetric; ++row) {
    for (column = row + 1; column < size; ++column) {
      if (matrix[row][column] != matrix[column][row]) {
        symmetric = 0;
        break;
      }
    }
  }

  puts(symmetric ? "True" : "False");
  return 0;
}
