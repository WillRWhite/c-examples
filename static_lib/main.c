#include <stdio.h>
// If lib.h is moved to usr/include then you can use <> rather than ""
#include "lib.h"

int main(void)
{
    float a = 5.4;
    float b = 6.7;

    float x = add(a,b);
    float y = mult(a,b);

    printf("\n%.2f %.2f %.2f %.2f\n\n",a,b,x,y);
}