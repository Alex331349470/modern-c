#include <stdio.h>

int main(void) {
  long int a = 077, b = 0x77, c = 0XABC;

  printf("a = %ld\n", a);
  printf("b = %ld\n", b);
  printf("c = %ld\n", c);

  return 0;
}
