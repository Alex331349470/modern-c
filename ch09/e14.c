#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool has_zero(int a[], int n);

int main(void) {
  int a[10];

  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++)
    scanf("%d", &a[i]);

  if (has_zero(a, 10))
    printf("The array has a zero.\n");
  else
    printf("The array has no zeros.\n");

  exit(EXIT_SUCCESS);
}

bool has_zero(int a[], int n) {
  for (int i = 0; i < n; i++)
    if (a[i] == 0)
      return true;

  return false;
}
