#include <ctype.h>
#include <stdio.h>

int main(void) {
  int total = 0;
  char c;

  printf("Enter a sentence: ");

  while ((c = getchar()) != '\n') {
    switch (tolower(c)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      total++;
      break;
    default:
      break;
    }
  }

  printf("Your sentence contains %d vowels.\n", total);

  return 0;
}
