#include <stdio.h>
int main() {

  /*
   * Arithmetic Operators ( + , - , / , %)
   */
  int addition = 10 + 10;
  printf("Addition: %d\n", addition);

  /*
   * Assignment operators> assigning values increments decrements blah blah
   */
  int a = 20;
  a += 100;
  printf("After += the value of a: %d\n", a);

  /*
   * Comparision operators ( < , > , == )
   */
  printf("Result %d\n", 10 == 10);

  /*
   * Logical Operators ( AND , OR , NOT )
   */
  printf("%d\n", 1 == 1 && 2 == 1);

  /*
   * Bitwise operations
   */
  printf("left shift of 5 by 2 is: %d\n", 5 << 2);
  printf("left shift of 11 by 2 is: %d\n", 11 << 2);
  printf("right shift 12 by 2 is %d\n", 12 >> 2);

  return 0;
}
