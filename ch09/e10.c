#include <stdio.h>

#define SIZE 10

int max_of_array(int[], int);
int average_of_array(int[], int);
int count_positive(int[], int);

int main(void) {
  int arr[SIZE];
  printf("Enter 10 integers: ");
  for (int i = 0; i < SIZE; i++)
    scanf("%d", &arr[i]);

  printf("Max: %d\n", max_of_array(arr, SIZE));
  printf("Average: %d\n", average_of_array(arr, SIZE));
  printf("Positive: %d\n", count_positive(arr, SIZE));

  return 0;
}

int max_of_array(int arr[], int n) {
  int max = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}

int average_of_array(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum / n;
}

int count_positive(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++)
    if (arr[i] > 0)
      count++;
  return count;
}
