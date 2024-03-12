#include <stdio.h>

int main(void)
{
    int i = 4; // In scope for main() and the for loop but not required
    int b = 5; // In scope for main() and the for loop
    for (i; i <10; i++)
    {
        b = 3;
        int c = 4;
        printf("%i ", i);
        printf("Hello World\n");
    }
    for (int i = 0; i <10; i++)
    {
        printf("%i ", i);
        printf("Hello World again\n");
    }
    printf("%i ", i);
    printf("%i ", b);
    //printf("%i ", c);
}