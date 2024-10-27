#include <stdio.h>

int main() {

  // declaring and initializing array with 5 integers
  int numsArr[] = {99, 69, 25, 6, 70};
  for (int i = 0; i <= 4; i++) {
    printf("Item %d is at index %d\n", numsArr[i], i);
  }

  printf("size of array with 5 int is: %ld\n", sizeof(numsArr));

  int x = numsArr[0];
  x += 1;
  printf("the value of x is: %d and value of arrayitem at index 0 is: %d\n", x,
         numsArr[0]);

  // another way of declaring array
  int anotherArr[6]; // declaration only, all the values are 0 by
                     //  default

  // 2d array
  int twoDarray[][3] = {{1, 2, 3}, {4, 5, 6}};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Item at column %d and row %d is %d\n", i, j, twoDarray[i][j]);
    }
  }

  // 3d array
  int threeDarray[2][2][2] = {{{10, 20}, {100, 200}}, {{30, 40}, {300, 400}}};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {

        printf("X: %d, Y: %d, Z: %d  Value: %d\n", j, i, k,
               threeDarray[i][j][k]);
      }
    }
  }

    char myName[] ="nishan";
    printf("my name is %s\n",myName);
    printf("memory address of myName is %p\n",&myName);
    

  return 0;
}
