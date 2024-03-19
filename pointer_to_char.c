#include <stdio.h>

int main(void) 
  {
int myAge = 56;  
int* ptr_myAge = &myAge;  

int myAge2[2] = {68,100};
 int* ptr_myAge2 =&myAge2[0];
ptr_myAge2 = ptr_myAge2+1;

*ptr_myAge = 88;
*ptr_myAge2 = 77;

  // Output the value of the variable myAge (43)
  printf("%i\n", myAge);

  // Output the memory address of myAge
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer
  printf("%p\n", ptr_myAge);

  printf("%i\n", *ptr_myAge);

  printf("%i\n", *(&myAge));

  printf("%i\n", *ptr_myAge2);

  *ptr_myAge2 = 77;

  return 0;
}