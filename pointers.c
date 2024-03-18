#include <stdio.h>

int main(void)
{
    char a = 65;
    char *p1 = &a;
    char *pp = p1;
    //char *p2 = p1+1;
    //char *p3 = p2+1;

    //*p2 = 66;
    //*p3 = 0;

    char *s = "ABC";



    printf("Using a:\n");
    printf("Int value of a is %i\n", a);
    printf("Chr value of a is %c\n", a);
    //printf("The next Char is %c\n", *p2);
    printf("Address of a is %p\n", &a);
    printf("Address of a is %p\n", p1);
    printf("Address of a is %p\n", pp);


    // All of this works fine for "s"
    printf("Using the string :- char *s = \"ABC\":\n");
    printf("The string is %s\n", s);
    printf("%i ", *s);
    printf("%c ", *(s+1));
    printf("%c ", *(s+2));
    printf("%i\n", *(s+3));
    
}