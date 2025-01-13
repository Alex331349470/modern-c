#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

double inner_product(double a[], double b[], int n) {
  double sum = 0.0;
  for (int i = 0; i < n; i++)
    sum += a[i] * b[i];
  return sum;
}

int main(void) {
  int arr_a[SIZE], arr_b[SIZE];

  printf("Enter %d integers for array A: ", SIZE);
  for (int i = 0; i < SIZE; i++)
    scanf("%d", &arr_a[i]);

  printf("Enter %d integers for array B: ", SIZE);
  for (int i = 0; i < SIZE; i++)
    scanf("%d", &arr_b[i]);

  printf("Inner product: %.2f\n", inner_product(arr_a, arr_b, SIZE));

  exit(EXIT_SUCCESS);
}
