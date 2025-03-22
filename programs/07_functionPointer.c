#include <stdio.h>

void myFunction();

int main() {

  void (*functionPointer)() = &myFunction;
  printf("Memory address of myFunction: %p\n", functionPointer);

  (*functionPointer)();

  return 0;
}

void myFunction() { printf("this is my function!\n"); }
