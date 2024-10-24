#include <stdio.h>

int main() {

  // interger / numbers
  int nums = 101; // store whole number

  float FLOAT = 5.1234;   // takes 4byte
  double DOUBLE = 5.1234; // takes 8bytes

  printf("size of FLOAT: %zu\n", sizeof(FLOAT));
  printf("size of DOUBLE: %zu\n", sizeof(DOUBLE));

  printf("float: %.20f\n", FLOAT);
  printf("double: %.15lf\n", DOUBLE);

  char letter = 'n'; // stores a single character within single quotes
  printf("character: %c\n", letter);

  //
  // Type conversion
  // implicit/ automatic

  float implicit = 1; // output 1.000000
  printf("implicit conversion: %f\n", implicit);

  // explicit manually

  float result = 5 / 2; // results 2.00000... why? cause we dividing intergers which will also result in integer
                        // to fix it we need to explicitly define types

  printf("result before: %f\n", result);

  float resultAfter = (float)5 / 2; // now it will be 2.5 as we have  manullay defined the its type as float

  printf("result after: %f\n", resultAfter);

  return 0;
}
