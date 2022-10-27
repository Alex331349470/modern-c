#include <ctype.h>
#include <stdio.h>

#define N 100

int main(void)
{
    char ch, message[N];
    int i = 0;

    printf("Enter message: ");

    while ((ch = getchar()) != '\n' && i < N)
        message[i++] = ch;
    
    printf("In B1FF-speak: ");

    for (int j = 0; j < i; j++){
        switch (ch = toupper(message[j])) {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(ch);
        }
    }

    printf("!!!!!!!!!!\n");

    return 0;

}
