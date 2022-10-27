#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter the area code of George state: ");
    scanf("%d", &i);

    switch (i) {
    case 229:
        printf("Albany\n"); break;
    case 404: case 407: case 678: case 770:
        printf("Atlanta\n"); break;
    case 478:
        printf("Macon\n"); break;
    case 706: case 762:
        printf("Columbus\n"); break;
    case 912:
        printf("Savannah\n"); break;
    default:
        printf("Area code not reongnized\n"); break;
    }
 
    return 0;
}
