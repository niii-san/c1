#include <stdio.h>

// this function directly manipulates the original age instead of copying
// copying 
void updateAge(int *ageAddress, int newAge) { *ageAddress = newAge; }

int main() {
  printf("Hello From Pointer\n");

  // * is called dereferencing operator, also used to create pointer variable
  //  & is called referencing operator

  int x = 10;
  int *pX = &x; // int *pX is a pointer variable, &x returns memory address of
                // x;

  printf("Memory address of x is: %p\n", pX);
  printf("Value thats in the address is: %d\n", *pX);

  int age = 10;
  printf("Age before %d\n", age);
  updateAge(&age, 20);
  printf("Age after: %d\n", age);

  // Double pointer
  printf("Pointer pointing to a pointer that is pointing to a variable!\n");

  int luckyNumber = 7;
  int *pointerOfLuckyNumber = &luckyNumber;
  int *(*pointerOfPointerOfLuckyNumber) = &pointerOfLuckyNumber;

  printf("Lucky number address %p\n", pointerOfLuckyNumber);
  printf("Addrress of pointer that is pointing to luckyNumber: %p\n",
         pointerOfPointerOfLuckyNumber);
  printf("Actual luckyNumber: %d", *(*pointerOfPointerOfLuckyNumber));


  return 0;
}
