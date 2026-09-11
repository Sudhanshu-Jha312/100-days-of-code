/* Rotate an array to the right by k positions. */
#include <stdio.h>

#define MAX_SIZE 100

static void reverse(int values[], int first, int last) {
  while (first < last) {
    int temporary = values[first];
    values[first] = values[last];
    values[last] = temporary;
    ++first;
    --last;
  }
}

int main(void) {
  int values[MAX_SIZE];
  int size;
  int index;
  unsigned long rotations;

  if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
    return 1;
  }
  for (index = 0; index < size; ++index) {
    if (scanf("%d", &values[index]) != 1) {
      return 1;
    }
  }
  if (scanf("%lu", &rotations) != 1) {
    return 1;
  }

  rotations %= (unsigned long)size;
  reverse(values, 0, size - 1);
  reverse(values, 0, (int)rotations - 1);
  reverse(values, (int)rotations, size - 1);

  for (index = 0; index < size; ++index) {
    printf("%d%c", values[index], index == size - 1 ? '\n' : ' ');
  }
  return 0;
}
