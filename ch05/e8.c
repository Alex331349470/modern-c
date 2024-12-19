#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int age;
  bool teenager;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 13 && age <= 19)
    printf("You are a teenager is %d.\n", teenager = true);
  else
    printf("You are not a teenager is %d.\n", teenager = false);

  return 0;
}
