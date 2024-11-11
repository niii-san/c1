#include <stdio.h>
#include <stdlib.h>
int main() {

  /*
   * Two types of memory allocation
   * 1. Static Memory Allocation (SMA)
   * 2. Dynamic Memory Allocation (DMA)
   * */

  /*
   * Static memory allocation
   * in this the memory is fixed it cannot be changed at runtime, the memory is
   * already fixed when compile time so we also call it compile time memory
   * allocation it is automatically freed when it exists function or program
   * ends they are stored in stack/global e.g: int[2], char[2] the size is
   * fixed.*/

  /*
   * Dynamic memory alloation
   * this means we can allocate memory as we need at run time as much as we need
   * its not fixed. we need to manually free memory
   * */

  /*
   * There are four functions to handle dynamic memory
   * 1. malloc()
   * 2. calloc()
   * 3. realloc()
   * 4. free()*/

  // malloc()
  // usually used to allocated memories for structures
  // use like this >> malloc(size n)
  // malloc() returns a pointer of void type as we donot know what to point we
  // have to type cast it | not necessary in c as compiler will handle type
  // conversion of void to give type of pointer automatacally

  int *ptr = (int *)malloc(sizeof(int) * 2); // returns memory address of void type if allocated, if not then returns NULL
  // checking if the memory is allocated or not
  if (ptr == NULL) {
    printf("The pointer is null | memory is full or some reason memory could not be allocated\n");
  }


  printf("memory address %p\n", ptr);
  *ptr = 2;

  *(ptr + 1) = 3;

  printf("value at base index is: %d\n", *ptr);
  printf("value at base index + 1 is: %d\n", *ptr + 1);

  return 0;
}
