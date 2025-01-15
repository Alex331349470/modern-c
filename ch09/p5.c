#include <stdio.h>
#include <stdlib.h>

void create_magic_square(int n, long int magic_square[n][n]);
void print_magic_square(int n, long int magic_square[n][n]);

int main(void) {
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");

  scanf("%d", &n);

  long int square[n][n];

  create_magic_square(n, square);

  print_magic_square(n, square);

  exit(EXIT_SUCCESS);
}

void create_magic_square(int n, long int magic_square[n][n]) {

  int row = 0, col = 0, next_row, next_col;

  if (n % 2 == 0 || n < 1 || n > 99) {
    printf("Invalid size.\n");
    exit(EXIT_SUCCESS);
  }

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      magic_square[i][j] = 0;

  col = n / 2;

  for (int i = 1; i <= n * n; i++) {
    magic_square[row][col] = i;
    next_row = (row - 1) < 0 ? n - 1 : row - 1;
    next_col = (col + 1) % n;

    if (magic_square[next_row][next_col] == 0) {
      row = next_row;
      col = next_col;
    } else
      row = (row + 1) % n;
  }
}

void print_magic_square(int n, long int magic_square[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      printf("%5ld", magic_square[i][j]);
    printf("\n");
  }
}
