// An array name is not a variable and it is not a pointer
// rather it is a "constant" in that it cannot be changed:
//https://www.youtube.com/watch?v=H18yIPSsgLg
//https://www.youtube.com/watch?v=bFAO99USrYI

#include <stdio.h>

int main(int argc, char **argv)
{
    char str1[] = "Hello";
    char *str2 = "Goodby";

    printf("%p, %p, %s\n",&str1, str1, str1);
    printf("%p, %p, %s\n",&str2, str2, str2);

    // Neither of the following two lines work
    //str1[] = "Good day";
    //str1 = "Good day";

    // ...but this does
    str2 = "Good day";

    printf("%p, %p, %s\n",&str1, str1, str1);
    printf("%p, %p, %s\n",&str2, str2, str2);




    return 0;
}