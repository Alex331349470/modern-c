#include <stdio.h>

int main(void) {
  int len = 0;
  char ch;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n')
    len++;

  printf("Your message was %d character(s) long.\n", len);

  return 0;
}
