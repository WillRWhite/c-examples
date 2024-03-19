#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char CHR = sizeof(char);
    const int INT = sizeof(int);

    printf("The size of char is %i\n", CHR);
    printf("The size of int is %i\n\n", INT);

    // Allocate 6 CHRs of memory using an array and initilise
    char mychar1[6] = {0,1,2,3,4,6};
    // Create a pointer p0 to first CHR
    char *p0 = &mychar1[0];

    // Create a dangling pointer fo use with malloc
   char *mychar2;
   // Allocate 6 CHRs of memory using malloc and the above pointer
   mychar2 = (char *) malloc(6);
  
    printf("Print array mychar[6] using pointers. Note that p0 points to mychar[0]\n\n");
    printf("p0+0 = %p points to %i\n", p0, *p0);
    printf("p0+1 = %p points to %i\n", p0+1, *(p0+1*CHR));
    printf("p0+2 = %p points to %i\n", p0+2, *(p0+2*CHR));
    printf("p0+3 = %p points to %i\n", p0+3, *(p0+3*CHR));
    printf("p0+4 = %p points to %i\n", p0+4, *(p0+4*CHR));
    printf("p0+5 = %p points to %i\n", p0+5, *(p0+5*CHR));
    printf("\n");
    printf("Note that p0+5 is not correct. Lets fix that by dereferencing it's pointer an allocating 5 to it\n");
    printf("*(p0+5*CHR) = 5\n");

    *(p0+5*CHR) = 5;

    printf("Print again to confirm the fix:\n\n");
    printf("p0+0 = %p points to %i\n", p0, *p0);
    printf("p0+1 = %p points to %i\n", p0+1, *(p0+1*CHR));
    printf("p0+2 = %p points to %i\n", p0+2, *(p0+2*CHR));
    printf("p0+3 = %p points to %i\n", p0+3, *(p0+3*CHR));
    printf("p0+4 = %p points to %i\n", p0+4, *(p0+4*CHR));
    printf("p0+5 = %p points to %i\n", p0+5, *(p0+5*CHR));
    printf("\n");

    printf("Now change the contents using arrary operations and print using pointer arrithematic:\n\n");

  for (int i=0, j=6; i<=5; i++, j++)
    {
        mychar1[i] = j;
    }

    printf("p0+0 = %p points to %i\n", p0, *p0);
    printf("p0+1 = %p points to %i\n", p0+1, *(p0+1*CHR));
    printf("p0+2 = %p points to %i\n", p0+2, *(p0+2*CHR));
    printf("p0+3 = %p points to %i\n", p0+3, *(p0+3*CHR));
    printf("p0+4 = %p points to %i\n", p0+4, *(p0+4*CHR));
    printf("p0+5 = %p points to %i\n", p0+5, *(p0+5*CHR));
    printf("\n");

     printf("Now lets look at the malloc allocation, first uninitilised:\n\n");

    printf("mychar2+0 = %p points to %i\n", mychar2, *mychar2);
    printf("mychar2+1 = %p points to %i\n", mychar2+1, *(mychar2+1*CHR));
    printf("mychar2+2 = %p points to %i\n", mychar2+2, *(mychar2+2*CHR));
    printf("mychar2+3 = %p points to %i\n", mychar2+3, *(mychar2+3*CHR));
    printf("mychar2+4 = %p points to %i\n", mychar2+4, *(mychar2+4*CHR));
    printf("mychar2+5 = %p points to %i\n", mychar2+5, *(mychar2+5*CHR));
    printf("\n");

    printf("initilise using pointer arithematic:\n\n");

    for (int i=0; i<=5; i++)
    {
        *(mychar2+i) = i;
    }

    printf("mychar2+0 = %p points to %i\n", mychar2, *mychar2);
    printf("mychar2+1 = %p points to %i\n", mychar2+1, *(mychar2+1*CHR));
    printf("mychar2+2 = %p points to %i\n", mychar2+2, *(mychar2+2*CHR));
    printf("mychar2+3 = %p points to %i\n", mychar2+3, *(mychar2+3*CHR));
    printf("mychar2+4 = %p points to %i\n", mychar2+4, *(mychar2+4*CHR));
    printf("mychar2+5 = %p points to %i\n", mychar2+5, *(mychar2+5*CHR));
    printf("\n");

    printf("initilise using array notation. Lets use ASCII from 'A'");

 for (int i=0, j=65; i<=5; i++, j++)
    {
        mychar2[i] = j;
    }

    printf(" and print again using pointers to confirm:\n\n");

    printf("mychar2+0 = %p points to %c\n", mychar2, *mychar2);
    printf("mychar2+1 = %p points to %c\n", mychar2+1, *(mychar2+1*CHR));
    printf("mychar2+2 = %p points to %c\n", mychar2+2, *(mychar2+2*CHR));
    printf("mychar2+3 = %p points to %c\n", mychar2+3, *(mychar2+3*CHR));
    printf("mychar2+4 = %p points to %c\n", mychar2+4, *(mychar2+4*CHR));
    printf("mychar2+5 = %p points to %c\n", mychar2+5, *(mychar2+5*CHR));
    printf("\n");

    printf("Lets replace 'E' with 'NUL' and print as a string:\n");

   // Both work:
    *(mychar2+4) = '\0';
    //*(mychar2+4) = 0;

    printf("%s\n\n", mychar2);

}