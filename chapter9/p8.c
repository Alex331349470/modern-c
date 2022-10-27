#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main (void)
{
    char c;

    do {
        if (play_game()) printf("You wins\n");
        else printf("You lose\n");
        printf("Play again?\n");
        while ((c = getchar()) != '\n');
    } while (toupper(c) == 'Y');

    return 0;
}

int roll_dice(void)
{
    srand((unsigned) time(NULL));
    return (rand() % 6 + rand() % 6 + 2);
}

bool play_game(void)
{
    int dice = roll_dice();
    int point;

    printf("You rolled:%d\n", dice);

    if (dice == 7 || dice == 11) {
        printf("You win!\n\n");
        return true;
    }

    printf("Your point is %d\n", dice);

    while (1) {
        point = roll_dice();
        printf("you rolled: %d\n", point);
        if (point == dice) return true;
        if (point == 7) return false;
    }
}

