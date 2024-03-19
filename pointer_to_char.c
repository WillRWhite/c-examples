#include <stdio.h>

int main(void) 
  {
int myAge = 43;  
int* ptr_myAge = &myAge;  

 int* ptr_myAge2;

ptr_myAge2 = ptr_myAge;

*ptr_myAge2 = 77;

*ptr_myAge = 88;

  

  // Output the value of the variable myAge (43)
  printf("%i\n", myAge);

  // Output the memory address of myAge
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer
  printf("%p\n", ptr_myAge);

  printf("%i\n", *ptr_myAge);

  printf("%i\n", *(&myAge));

  printf("%i\n", *ptr_myAge2);

  //printf("%p\n", ptr_myAge2);

  //printf("%i\n", *ptr_myAge2);

  return 0;
}