#include <stdio.h>

int main(void) {
  int hour, minute, total_mins;
  int startup_mins[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrival_mins[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  total_mins = hour * 60 + minute;

  for (int i = 0; i < 8; i++) {
    if (total_mins < startup_mins[i]) {
      printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s.\n",
             startup_mins[i] / 60, startup_mins[i] % 60,
             startup_mins[i] < 12 * 60 ? "a.m." : "p.m.",
             arrival_mins[i] / 60, arrival_mins[i] % 60,
             arrival_mins[i] < 12 * 60 ? "a.m." : "p.m.");
      return 0;
    }
  }

  printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

  return 0;
}
