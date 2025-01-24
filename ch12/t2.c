#include <stdio.h>

int main(void) {
  int a[5], *p;

  printf("Enter 5 numbers: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);

  p = &a[0];

  p += 4;
  p -= 5;

  printf("Testing the point to the array: %d\n", *p);

  return 0;
}
