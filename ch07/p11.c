#include <stdio.h>

int main(void) {
  char c;
  char first_char;

  printf("Enter a first and last name: ");

  scanf(" %c", &first_char);

  while ((c = getchar()) != ' ')
    ;

  while ((c = getchar()) != '\n' && c != ' ')
    putchar(c);

  printf(", %c.\n", first_char);

  return 0;
}
