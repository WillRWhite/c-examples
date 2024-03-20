#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   // const char CHR = sizeof(char);
   // const int INT = sizeof(int);

   // printf("The size of char is %i\n", CHR);
   // printf("The size of int is %i\n\n", INT);

    // Allocate 6 CHRs of memory using an array and initilise
    char mychar1[6] = {0,1,2,3,4,6};
    // Create a pointer p0 to first CHR
    char *p0 = &mychar1[0];

    printf("Print array mychar1[6] using pointers. Note that p0 points to mychar1[0]\n\n");

    for (int i=0; i<6; i++)
    {
        printf("p0+%i = %p points to %i\n", i, p0+i, *(p0+i));
    }
    printf("\n");
    printf("Note that p0+5 is not correct. Lets fix that by dereferencing it's pointer an allocating 5 to it\n");
    printf("*(p0+5) = 5\n");

    *(p0+5) = 5;

    printf("Print again to confirm the fix:\n\n");
    for (int i=0; i<6; i++)
    {
        printf("p0+%i = %p points to %i\n", i, p0+i, *(p0+i));
    }
    printf("\n");
    printf("Now change the contents using arrary operations and print using pointer arrithematic:\n\n");

  for (int i=0, j=6; i<6; i++, j++)
    {
        mychar1[i] = j;
    }

   for (int i=0; i<6; i++)
    {
        printf("p0+%i = %p points to %i\n", i, p0+i, *(p0+i));
    }
    printf("\n");

     printf("Now lets look at the malloc allocation, first uninitilised:\n\n");

    // Create a dangling pointer fo use with malloc
    //char *mychar2;
    // Allocate 6 CHRs of memory using malloc and the above pointer with a verbost type cast
    // (which is not really necessary)
    //mychar2 = (char *) malloc(6);

    // Better to do all on one line like this
    char *mychar2 = malloc(6);
    // Alternatively like this
    //char *mychar2;
    //mychar2 = malloc(6);

    for (int i=0; i<6; i++)
    {
        printf("mychar2+%i = %p points to %i\n", i, mychar2+i, *(mychar2+1));

    }
    printf("\n");


    printf("initilise using pointer arithematic:\n\n");

    for (int i=0; i<=5; i++)
    {
        *(mychar2+i) = i;
    }

    for (int i=0; i<6; i++)
    {
        printf("mychar2+%i = %p points to %i\n", i, mychar2+i, *(mychar2+i));

    }
    printf("\n");

    printf("initilise using array notation. Lets use ASCII from 'A'");

 for (int i=0, j=65; i<=5; i++, j++)
    {
        mychar2[i] = j;
    }

    printf(" and print again using pointers to confirm:\n\n");

  for (int i=0, j=6; i<6; i++, j++)
    {
        printf("mychar2+%i = %p points to %c\n", i, mychar2+i, *(mychar2+i));

    }
    printf("\n");

    printf("Lets replace 'E' with 'NUL' and print as a string:\n");

   // Both work:
    *(mychar2+4) = '\0';
    //*(mychar2+4) = 0;

    printf("%s\n\n", mychar2);

    printf("Now before we free() lets just try printing the interger value of *mychar2. It is:- %i\n", *mychar2);

    free(mychar2);

    printf("After free(), it is:- %i\n\n", *mychar2);
    printf("And let's just try a few more memory locations:\n\n");

    for (int i=1; i<30; i++)
    {
       printf("After free(), mychar2+%i:- %i\n", i, *(mychar2+i)); 
    }
    printf("\n");

    return 0;

}