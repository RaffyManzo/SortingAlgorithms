#include "utils.h"

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int min_pos(int *data_set, int size) {
  int i, pos = 0;

  for (i = 1; i < size; i++) {
    if (data_set[i] < data_set[pos])
      pos = i;
  }

  return pos;
}

int minimo(int *data_set, int size) {
  int i, min;

  for (i = 1, min = data_set[0]; i < size; i++) {
    if (data_set[i] < min)
      min = data_set[i];
  }

  return min;
}

void insert(int *data_set, int size, int value) {
  int i = size;
  while (i > 0 && data_set[i - 1] > value) {
    data_set[i] = data_set[i - 1];
    i--;
  }

  data_set[i] = value;
}