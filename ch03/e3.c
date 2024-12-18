#include <stdio.h>

int main(void) {
  int i, j;
  float x;

  printf("Enter three nums: ");
  scanf("%d%f%d", &i, &x, &j);
  printf("i = %d, x = %f, j = %d\n", i, x, j);

  return 0;
}
