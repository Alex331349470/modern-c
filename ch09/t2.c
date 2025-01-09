#include <stdio.h>
#define LEN 100

int sum_array(int[], int n);

int main(void) {
  int b[LEN], total;

  for (int i = 0; i < LEN; i++)
    b[i] = i;

  total = sum_array(b, LEN);

  printf("Total of array b: %d\n", total);

  return 0;
}

int sum_array(int a[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++)
    sum += a[i];

  return sum;
}
