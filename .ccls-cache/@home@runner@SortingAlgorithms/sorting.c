#include "sorting.h"
#include "utils.h"
#include <stdio.h>

/*
  Selection sort is an sorting algorithm that scan all data_set and
  in each iterations it pick the minimun elements in the unsorted part
  of data set
*/
void selection_sort(int *data_set, int size) {
  int i, min;

  for (i = 0; i < size - 1; i++) {
    // data_set + i will be searched for the minimum of the remaining part
    // of the carrier, i.e. the one not ordered, departing from the address
    // IB + the current index
    min = minimo(data_set + i, size - i) + i;
    swap(&data_set[i], &data_set[min]);
  }
}

/*
  Bubble sort is an sorting algorithm that iterates all data set and in each
  internal iteration put the bigger element in last unsorted part of data sets.
  In the internal iterations it check the i and i + 1 element
*/

void bubble_sort(int *data_set, int size) {
  int i, j; // i iterates all element in the list, j check and swap

  for (i = 0; i < size; i++) {
    for (j = 0; j < size - 1; j++)
      if (data_set[j] > data_set[j + 1])
        swap(&data_set[j], &data_set[j + 1]);
  }
}

/*
  The insertion sort is a sorting algorithm that scan all array
  starting from position 1. It work on subarrays, and in each
  iteration it put a[i] element in the right position in the
  subarray.
*/

void insertion_sort(int *data_set, int size) {
  int i, current_element, subarray_size;

  for (i = 1; i < size; i++) {
    subarray_size = i;
    current_element = data_set[i];
    insert(data_set, subarray_size, current_element);
  }
}