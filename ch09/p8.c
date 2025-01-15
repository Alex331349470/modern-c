#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> /* rand, srand */
#include <time.h>   /* time */

int roll_dice(void);
bool play_game(void);

int main(void) {

  int wins = 0, losses = 0;
  char c;

  srand((unsigned)time(NULL));

  while (1) {

    if (play_game())
      wins++;
    else
      losses++;

    printf("Play again? ");
    scanf(" %c", &c);
    if (c != 'y' && c != 'Y')
      break;
    printf("\n");
  }

  printf("\nWins: %2d  Losses: %2d\n", wins, losses);

  exit(EXIT_SUCCESS);
}

bool play_game(void) {

  int dice, point;

  while (1) {
    if ((dice = roll_dice()) == 7 || dice == 11) {
      printf("You rolled: %d\n", dice);
      printf("You win!\n");
      return true;
    } else if (dice == 2 || dice == 3 || dice == 12) {
      printf("You rolled: %d\n", dice);
      printf("You lose!\n");
      return false;
    } else {
      point = dice;
      printf("You rolled: %d\n", dice);
      printf("Your point is %d\n", point);
    }
  }
}

int roll_dice(void) { return rand() % 6 + rand() % 6 + 2; }
