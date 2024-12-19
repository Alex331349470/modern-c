#include <stdio.h>

int main(void) {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num / 100 > 0)
    printf("The number has 3 digits\n");
  else if (num / 10 > 0)
    printf("The number has 2 digits\n");
  else
    printf("The number has 1 digit\n");

  return 0;
}
