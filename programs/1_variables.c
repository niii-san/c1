#include <stdio.h>

int main() {
  // Variables are like storage with unique identifier, it stores the given data

  // format for declaring variable: <DATA_TYPE> <IDENTIFIER_NAME> = <VALUE>;

  // storing number, in this declaration method we can update the values later
  // too
  int a; // declaration, 4 bytes reserverd for "a" variable
  a = 9; // initialization

  int b = 100; // variable declaration and initialization

  /*
   * To print variables we have to use format specifiers
   */

  printf("Value of a is: %d\n", a);
  // %d means interger place specified where to put and passing a at
  // the end defines which integer to pass

  /*
   * constant
   * keyword: const
   * the value cannot be changed once declared,
   */
  int const applePrice = 100;
  printf("const apple price is: %d \n", applePrice);

  /*
   * #define
   *  it is a preprocessor directive, where ever the identifier name is used it
   * gets replaced with the given value
   * its also like constant slightly different
   * there is no direct method to change its value
   */

#define val 20;

  int varUsingDefine = val;
  printf("val %d\n", varUsingDefine);

  return 0;
}
