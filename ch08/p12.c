#include <ctype.h>
#include <stdio.h>

int main(void) {
  int total = 0;
  char c;
  int s[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
               1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");

  while ((c = getchar()) != '\n') {
    c = toupper(c);
    total += s[c - 'A'];
  }

  printf("Scrabble value: %d\n", total);

  return 0;
}
