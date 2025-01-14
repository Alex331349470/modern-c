#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int evaluate_position(char board[SIZE][SIZE]) {
  int white = 0, black = 0;

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      switch (board[i][j]) {
      case 'Q':
        white += 9;
        break;
      case 'q':
        black += 9;
        break;
      case 'R':
        white += 5;
        break;
      case 'r':
        black += 5;
        break;
      case 'B':
        white += 3;
        break;
      case 'b':
        black += 3;
        break;

      case 'N':
        white += 3;
        break;
      case 'n':
        black += 3;
        break;
      case 'P':
        white += 1;
        break;
      case 'p':
        black += 1;
        break;
      default:
        break;
      }
    }
  }

  return white - black;
}

int main(void) {
  char b[SIZE][SIZE];
  int num;

  // random a english charcter array
  for (int i = 0; i < SIZE; i++)
    for (int j = 0; j < SIZE; j++)
      b[i][j] = rand() % 26 + 'a';

  num = evaluate_position(b);

  if (num > 0)
    printf("White is winning by %d\n", num);
  else if (num < 0)
    printf("Black is winning by %d\n", -num);
  else
    printf("The game is even\n");

  exit(EXIT_SUCCESS);
}
