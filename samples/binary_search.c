// binária (ordenada): log n operações no pior caso
// sequencial: n operações no pior caso
// binária (não ordenada): n*log n + log n operações no pior caso
#include <stdio.h>

int binary_search(int array[], int size, int target) {
  int start = 0;
  int end = size - 1;

  while( start <= end ) {
    int middle = (start + end) / 2;
    // printf("S = %d | M = %d | E = %d\n", start, middle, end);

    if(target == array[middle]) return middle;
    else if (target > array[middle]) start = middle + 1;
    else if(target < array[middle]) end = middle - 1;
  }

  return -1;
}

int main() {

  int size = 10;
  int array[] = {1, 4, 7, 9, 13, 15, 18, 20, 22, 24};
  int target;

  scanf(" %d", &target);
  int result = binary_search(array, size, target);
  printf("Finding %d ... Position = %d\n", target, result);
}