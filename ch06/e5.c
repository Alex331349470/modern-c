#include <stdio.h>

int main(void) {
  int i = 0;

  while (i < 10) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  i = 0;
  for (; i < 10;) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  i = 0;
  do {
    printf("%d ", i);
    i++;
  } while (i < 10);
  printf("\n");

  return 0;
}
