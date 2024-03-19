#include <stdio.h>

int main(void) 
  {
unsigned int myAge = 65;  
unsigned int* ptr_myAge = &myAge;  

unsigned int myAge2[2] = {0xFFFFFFFF,0x55555555};
 unsigned int* ptr_myAge2 =&myAge2[0];
ptr_myAge2 = ptr_myAge2+1;

*ptr_myAge = 0xAAAAAAAA;
*ptr_myAge2 = 0xBBBBBBBB;

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