#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main (void)
{
    return 0;
}

float compute_GPA(char grades[], int n)
{
    float total = 0.0f;
    
    for (int i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
        case 'A':
            total += 4.0f;
            break;
        case 'B':
            total += 3.0f;
            break;
        case 'C':
            total += 2.0f;
            break;
        case 'D':
            total += 1.0f;
            break;
        case 'F':
        default:
            break;
        }
    }

    return total / n;
}

