#include <stdio.h>
#include <stdlib.h>

int foo(void) {
  printf("Hello, World!\n");
  return EXIT_SUCCESS;
}

int main(void) {
  foo();
  return EXIT_SUCCESS;
}
