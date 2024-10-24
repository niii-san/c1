#include <stdio.h>

int main() {
  // Variables are like storage with unique identifier, it stores the given data

  // format for declaring variable: <DATA_TYPE> <IDENTIFIER_NAME> = <VALUE>;

  // storing number, in this declaration method we can update the values later
  // too
  int a; // declaration, memories reserverd for "a" variable
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
   * its also like constant , its value cannot be changed
   * we do not end line with semicolon in #define statement
   */

#define val 20
  printf("val %d\n", val);

  return 0;
}
