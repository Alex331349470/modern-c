#include <stdio.h>
#include <stdlib.h>

double median(double, double, double);

int main(void) {
  int x, y, z;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &x, &y, &z);

  printf("The median is: %.2f\n", median(x, y, z));

  exit(EXIT_SUCCESS);
}

double median(double x, double y, double z) {
  if (x > y)
    if (y > z)
      return y;
    else if (x > z)
      return z;
    else
      return x;
  else if (x > z)
    return x;
  else if (y > z)
    return z;
  else
    return y;
}
