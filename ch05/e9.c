#include <stdio.h>

int main(void) {
  int score;

  printf("Enter your score: ");
  scanf("%d", &score);

  if (score >= 90)
    printf("Your grade is A\n");
  else if (score >= 80)
    printf("Your grade is B\n");
  else if (score >= 70)
    printf("Your grade is C\n");
  else if (score >= 60)
    printf("Your grade is D\n");
  else
    printf("Your grade is F\n");

  if (score < 60)
    printf("F");
  else if (score < 70)
    printf("D");
  else if (score < 80)
    printf("C");
  else if (score < 90)
    printf("B");
  else
    printf("A");

  return 0;
}
