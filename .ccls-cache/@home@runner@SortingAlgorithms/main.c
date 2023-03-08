#include "sorting.h"
#include <stdio.h>

int main(void) {
  int i, a[] = {9, 3, 1, 7, 38, 17, 3, 9, 0, 2};
  int size = sizeof(a) / sizeof(int);

  bubble_sort(a, size);

  for (i = 0; i < size; i++) {
    printf("%d\t", a[i]);
  }

  return 0;
}