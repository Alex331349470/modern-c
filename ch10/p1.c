#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);

bool is_full(void);

bool is_empty(void);

void push(char);

char pop(void);

void stack_overflow(void);

void stack_underflow(void);

int main(void) {
  char c;

  printf("Enter parenteses and/or braces: ");
}
