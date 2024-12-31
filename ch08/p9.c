#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 10
#define MAX_COL 10

int main(void)
{
  char move_map[MAX_ROW][MAX_COL];
  int row = 0, col = 0, direction;
  

  srand((unsigned)time(NULL));

  for (int i = 0; i < MAX_ROW; i++)
    for (int j = 0; j < MAX_COL; j++)
      move_map[i][j] = '.';

  for (int move = 'A'; move < 'Z'; move++)
  {
      move_map[row][col] = move;
      direction = rand() % 4;

      switch (direction)
      {
        case 0: // up
          if (row - 1 >= 0 && move_map[row - 1][col] == '.')
            row--;
          break;
        case 1: // right
          if (col + 1 < MAX_COL && move_map[row][col + 1] == '.')
            col++;
          break;
        case 2: // down
          if (row + 1 < MAX_ROW && move_map[row + 1][col] == '.')
            row++;
          break;
        case 3: // left
          if (col - 1 >= 0 && move_map[row][col - 1] == '.')
            col--;
          break;
      }
  }

  for (int i = 0; i < MAX_ROW; i++)
  {
    for (int j = 0; j < MAX_COL; j++)
      printf("%c ", move_map[i][j]);

    printf("\n");
  }

  return 0;
}
