#include <stdio.h>

float compute_GPA(char[], int);

int main(void) {
  char a;

  char grades[] = {'A', 'B', 'C', 'D', 'F'};

  printf("Enter a grade: ");

  switch (a = getchar()) {
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'F':
    printf("GPA: %.1f\n", compute_GPA(grades, a));
    break;
  default:
    printf("Invalid grade\n");
  }
}

float compute_GPA(char grades[], int grade) {
  switch (grade) {
  case 'A':
    return 4.0;
    break;
  case 'B':
    return 3.0;
    break;
  case 'C':
    return 2.0;
    break;
  case 'D':
    return 1.0;
    break;
  case 'F':
    return 0.0;
    break;
  default:
    return -1.0;
    break;
  }
}
