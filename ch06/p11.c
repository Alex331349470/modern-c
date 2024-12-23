#include <stdio.h>

int main(void) {
  int i, n;
  float e, nemon, user_input;

  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter a user compare number: ");
  scanf("%f", &user_input);

  for (i = 1, nemon = 1.0f, e = 1.0f; i <= n; i++) {
    e += 1.0f / (nemon *= i);
    if (1.0f / nemon < user_input)
      break;
  }

  printf("The e is: %f\n", e);

  return 0;
}
