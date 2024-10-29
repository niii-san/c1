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

  int myArr[] = {1, 2, 3, 4, 5};
  int *aP = myArr;
  printf("Memory address of myArr is:%p\n", aP);

  printf("Second value of myArr: %d\n", *(aP + 1));
  printf("Memory address of second value: %p\n", &myArr[1]);
  printf("adding 1 to memory address of first element returned: %p\n", aP + 1);

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
