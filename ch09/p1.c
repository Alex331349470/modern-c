#include <stdio.h>
#define LEN 10

void selection_sort(int[], int);

int main(void) {
  int num_arr[LEN];

  printf("Enter %d numbers: ", LEN);
  for (int i = 0; i < LEN; i++)
    scanf("%d", &num_arr[i]);

  selection_sort(num_arr, LEN);

  printf("Sorted numbers: ");
  for (int i = 0; i < LEN; i++)
    printf("%d ", num_arr[i]);

  printf("\n");

  return 0;
}

void selection_sort(int arr[], int n) {
  int largest = 0, temp = 0;

  if (n == 0)
    return;

  for (int i = 1; i < n; i++)
    if (arr[i] > arr[largest])
      largest = i;

  temp = arr[largest];
  arr[largest] = arr[n - 1];
  arr[n - 1] = temp;

  selection_sort(arr, n - 1);
}
