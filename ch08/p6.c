#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void)
{
    char ch, message[MAX_SIZE];
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && i <= MAX_SIZE)
    {
        message[i] = toupper(ch);
        i++;
    }
    
    printf("In B1FF-speak: ");

    for (int j = 0; j < i; j++)
    {
        switch (message[j])
        {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", message[j]);
                break;
        }
    }
    
    printf("!!!!!!!!!\n");

    return 0;
}