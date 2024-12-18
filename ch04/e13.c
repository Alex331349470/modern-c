#include <stdio.h>

int main(void) {
  int i = 1, j, k, l;

  j = ++i, k = i++, l = (i += 1);

  printf("%d %d %d %d\n", i, j, k, l);

  return 0;
}
