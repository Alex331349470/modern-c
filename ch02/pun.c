/*
 * Name: pun.c
 * Purpose: Prints a bad pun.
 * Author: Alex Chan
 */

#include <stdio.h>

double add(double x, double y) { return x + y; }

int main(void) {
  printf("Hello, world! I'm a bad pun.\n");

  double z = add(1.0, 2.0);
  printf("1.0 + 2.0 = %.1f\n", z);
  return 0;
}
