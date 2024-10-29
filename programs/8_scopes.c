#include <stdio.h>

// file scoped variable available within the file
char a[] = "nishan";

void giveMeNumber(int a);

int main() {

  if (1) {
    int x = 20; // Block scope only available within if block
    printf("value of x is: %d\n", x);
  } else {

    int z = 1000; // This also Block scope available within else block only
    printf("Value of z is: %d\n", z);
  }

  return 0;
}

void giveNumber(int a) {
  printf("The given number is:%d\n", a);

  int luckyNum = 7; // function scope, this variable is only accesibble within
                    // this function
}
