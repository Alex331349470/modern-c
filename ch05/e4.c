#include <stdio.h>

int main(void) {
  int i, j, k;
  printf("Enter two numbers: ");
  scanf("%d %d", &i, &j);

  k = (i > j) - (i < j);

  printf("k = %d\n", k);

  return 0;
}
