#include <stdio.h>

//this function directly manipulates the original age instead of copying copying copying
void updateAge(int *ageAddress,int newAge){

    *ageAddress=newAge;

}

int main() {
  printf("Hello From Pointer\n");

    // * is called dereferencing operator, also used to create pointer variable
    //  & is called referencing operator

  int x = 10;
  int *pX = &x; // int *pX is a pointer variable, &x returns memory address of
                // x;

  printf("Memory address of x is: %p\n", pX);
  printf("Value thats in the address is: %d\n", *pX);


    int age =10;
    printf("Age before %d\n",age);

    updateAge(&age,20);

    printf("Age after: %d\n",age);


  return 0;
}
