#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void) {
  int a[N], *p;

  printf("Enter %d numbers: ", N);
  for (p = a; p < a + N; p++)
    scanf("%d", p);

  printf("In reverse order:");
  for (p = a + N - 1; p >= a; p--)
    printf(" %d", *p);

  printf("\n");

  exit(EXIT_SUCCESS);
}
