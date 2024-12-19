#include <stdio.h>

int main(void) {
  int i = 17;
  printf("When i equal 17, the result is %d\n", i >= 0 ? i : -i);

  i = -17;
  printf("When i equal -17, the result is %d\n", i >= 0 ? i : -i);

  return 0;
}
