#include <stdio.h>

int main(void)
{
    double length = 0.0, word = 1.0;
    char c;
    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        if(c == ' ')
           word++;

        if (c != ' ')
          length++; 
    }

    printf("Average word length: %.2lf\n", length / word);

    return 0;
}
