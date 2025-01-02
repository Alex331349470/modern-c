#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 10
#define MAX_COL 10
#define INIT_MOVE 'A'
#define MAX_MOVE 'Z'

int main(void) {
  char move_map[MAX_ROW][MAX_COL], move;
  int col = 0, row = 0, direction;
  bool up = 0, down = 0, left = 0, right = 0;

  srand((unsigned)time(NULL));

  for (int i = 0; i < MAX_ROW; i++)
    for (int j = 0; j < MAX_COL; j++)
      move_map[i][j] = '.';

  move = INIT_MOVE;
  move_map[row][col] = move++;

  while (move_map[row][col] <= MAX_MOVE) {
    up = 0, down = 0, left = 0, right = 0;

    direction = rand() % 4;

    if (row + 1 < 10 && move_map[row + 1][col] == '.')
      up = 1;

    if (row - 1 >= 0 && move_map[row - 1][col] == '.')
      down = 1;

    if (col + 1 < 10 && move_map[row][col + 1] == '.')
      right = 1;

    if (col - 1 >= 0 && move_map[row][col - 1] == '.')
      left = 1;

    if (!up && !down && !left && !right)
      break;

    switch (direction) {
    case 0:
      if (up)
        move_map[++row][col] = move++;
      break;
    case 1:
      if (down)
        move_map[--row][col] = move++;
      break;
    case 2:
      if (right)
        move_map[row][++col] = move++;
      break;
    case 3:
      if (left)
        move_map[row][--col] = move++;
      break;

    default:
      break;
    }
  }

  for (int i = 0; i < MAX_ROW; i++) {
    for (int j = 0; j < MAX_COL; j++)
      printf("%c ", move_map[i][j]);

    printf("\n");
  }

  return 0;
}
