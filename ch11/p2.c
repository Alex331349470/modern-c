#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) {
  int desired_time, departure_time, arrival_time, hours, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);
  desired_time = hours * 60 + minutes;

  find_closest_flight(desired_time, &departure_time, &arrival_time);

  printf("Closest departure time is %d:%02d, arriving at %d:%02d\n",
         departure_time / 60, departure_time % 60,
         arrival_time / 60, arrival_time % 60);

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
  int departure_times[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrive_times[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

  *departure_time = departure_times[0];
  *arrival_time = arrive_times[0];

  for (int i = 1; i < 8; i++) {
    if (desired_time < departure_times[i]) {
      *departure_time = departure_times[i - 1];
      *arrival_time = arrive_times[i - 1];
      break;
    }
  }

  if (desired_time > departure_times[7]) {
    *departure_time = departure_times[7];
    *arrival_time = arrive_times[7];
  }

  if (desired_time > 1305) {
    *departure_time = departure_times[0];
    *arrival_time = arrive_times[0];
  }

  if (desired_time > 1438) {
    *departure_time = departure_times[7];
    *arrival_time = arrive_times[7];
  }

  return;

}