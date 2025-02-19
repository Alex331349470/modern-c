#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hour, minute, total_mins;
  char c;
  printf("Enter a time with expression: ");
  scanf("%d:%d%c", &hour, &minute, &c);

  if (toupper(c) == 'P')
    hour = hour + 12;

  total_mins = hour * 60 + minute;

  if (total_mins < 8 * 60)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
  else if (total_mins < 9 * 60 + 43)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  else if (total_mins < 11 * 60 + 19)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  else if (total_mins < 12 * 60 + 47)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
  else if (total_mins < 14 * 60)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  else if (total_mins < 15 * 60 + 45)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
  else if (total_mins < 19 * 60)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
  else if (total_mins < 21 * 60 + 45)
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
  else
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");

  return 0;
}
