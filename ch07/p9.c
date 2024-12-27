#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hour, minute;
  char c;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hour, &minute, &c);

  if (toupper(c) == 'P') {
    if (hour == 12)
      hour = 0;

    hour += 12;
  }
  printf("Equivalent 24-hour time: %d:%d\n", hour, minute);

  return 0;
}
