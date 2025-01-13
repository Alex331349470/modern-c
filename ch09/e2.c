#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool check(int, int, int);

int main(void) {
  int x, y, n;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &x, &y, &n);

  if (check(x, y, n))
    printf("The numbers are in order.\n");
  else
    printf("The numbers are not in order.\n");

  exit(EXIT_SUCCESS);
}

bool check(int x, int y, int n) {
  if (x > 0 && y > 0 && x < n && y < n)
    return true;
  else
    return false;
}
