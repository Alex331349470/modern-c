#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;
    printf("Enter parenteses and/or braces: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
            push(ch);
        else if (ch == ')' || ch == '}')
        {
            if (is_empty())
                stack_underflow();
            if (is_full())
                stack_overflow();
            else
            {
                char temp = pop();
                if ((ch == ')' && temp != '(') || (ch == '}' && temp != '{'))
                {
                    printf("Parenteses/braces are not nested properly\n");
                    exit(EXIT_FAILURE);
                }
            }
        }
    }

    if (is_empty())
        printf("Parenteses/braces are nested properly\n");
    else
        printf("Parenteses/braces are not nested properly\n");

    exit(EXIT_SUCCESS);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();

    return contents[--top];
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}