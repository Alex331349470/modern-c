#include <stdio.h>

#define N 10

int main(void) {
  int a[N], sum, *p;
  printf("Enter %d numbers: ", N);
  for (int i = 0; i < N; i++)
    scanf("%d", &a[i]);

  p = &a[0];

  while (p < &a[N])
    sum += *p++;

  printf("Sum: %d\n", sum);

  return 0;
}
