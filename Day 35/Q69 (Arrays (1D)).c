/* Find the second largest element in an array. */
#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
  int values[MAX_SIZE];
  int size;
  int index;
  int largest;
  int second_largest;
  int has_second = 0;

  if (scanf("%d", &size) != 1 || size < 2 || size > MAX_SIZE) {
    return 1;
  }

  for (index = 0; index < size; ++index) {
    if (scanf("%d", &values[index]) != 1) {
      return 1;
    }
  }

  largest = values[0];
  for (index = 1; index < size; ++index) {
    if (values[index] > largest) {
      second_largest = largest;
      largest = values[index];
      has_second = 1;
    } else if (values[index] < largest &&
               (!has_second || values[index] > second_largest)) {
      second_largest = values[index];
      has_second = 1;
    }
  }

  if (!has_second) {
    puts("No second-largest distinct value");
    return 1;
  }

  printf("%d\n", second_largest);
  return 0;
}
