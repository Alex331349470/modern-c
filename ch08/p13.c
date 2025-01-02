#include <stdio.h>

int main(void) {
  char c;
  char s[20];
  int i = 0;

  printf("Enter a first and last name: ");

  while ((c = getchar()) != ' ') {
    s[i] = c;
    i++;
  }

  printf("You entered the name: ");
  while ((c = getchar()) != '\n' && c != ' ')
    putchar(c);

  printf(", %c.\n", s[0]);

  return 0;
}
