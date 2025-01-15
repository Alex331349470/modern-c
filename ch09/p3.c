#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 10
#define MAX_COL 10
#define INIT_MOVE 'A'
#define MAX_MOVE 'Z'

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
  char move_map[MAX_ROW][MAX_COL];
  generate_random_walk(move_map);
  print_array(move_map);

  return 0;
}

void generate_random_walk(char walk[10][10]) {
  char move;
  int col = 0, row = 0, direction;
  bool up = 0, down = 0, left = 0, right = 0;

  srand((unsigned)time(NULL));

  for (int i = 0; i < MAX_ROW; i++)
    for (int j = 0; j < MAX_COL; j++)
      walk[i][j] = '.';

  move = INIT_MOVE;
  walk[row][col] = move++;

  while (walk[row][col] <= MAX_MOVE) {
    up = 0, down = 0, left = 0, right = 0;

    direction = rand() % 4;

    if (row + 1 < 10 && walk[row + 1][col] == '.')
      up = 1;

    if (row - 1 >= 0 && walk[row - 1][col] == '.')
      down = 1;

    if (col + 1 < 10 && walk[row][col + 1] == '.')
      right = 1;

    if (col - 1 >= 0 && walk[row][col - 1] == '.')
      left = 1;

    if (!up && !down && !left && !right)
      break;

    switch (direction) {
    case 0:
      if (up)
        walk[++row][col] = move++;
      break;
    case 1:
      if (down)
        walk[--row][col] = move++;
      break;
    case 2:
      if (right)
        walk[row][++col] = move++;
      break;
    case 3:
      if (left)
        walk[row][--col] = move++;
      break;

    default:
      break;
    }
  }
}

void print_array(char walk[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("%c ", walk[i][j]);

    printf("\n");
  }
}
