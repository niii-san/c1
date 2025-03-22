#include <stdio.h>

int main() {

  /*
   * by default c doesnot have boolean data type
   * instead 0 means false and any number than 0 means true*/

  // if else
  if (100) {
    printf("Its in if block\n");
  } else {
    printf("Its in else block\n");
  }

  // short hand if else >> ternary operator
  // (expression) ? //if true  : //if false

  int ternary = 1;

  (100 != 2) ? printf("The statement is true\n")
             : printf("The statement is false\n");

  // switch statment
  int today = 1;

  switch (today) {
  case 1:
    printf("Today is Sunday!\n");
    break;
  case 2:
    printf("Today is Monday!\n");
    break;
  case 3:
    printf("Today is Tuesday!\n");
    break;
  case 4:
    printf("Today is Wednesday\n");
    break;
  case 5:
    printf("Today is Thursday\n");
    break;
  case 6:
    printf("Today is Friday\n");
    break;
  case 7:
    printf("Today is Saturday\n");
    break;
  default:
    printf("Number doesnot matches any days!\n");
  };

  /*
   * LOOPS
   */
  // Repeating  for n amount of time
  for (int i = 1; i < 5; i++) {
    printf("current iteration is: %d\n", i);
  }

  int W = 0;
  while (W < 5) {
    printf("This only runs till the statement is true, iterating %d \n", W);
    W++;
  }

  int d = 1;
  // This runs the do block at least once even if the statement if false
  do {
    printf("This is do while loop %d \n", d);
    d++;
  } while (d <= 5);

  /*
   * goto is a jump statment it jumps into the given statement
   */

  goto yes;

  printf("This won't be printed> will be skipped\n");

yes:
  printf("printing from yes statement\n");

  return 0;
}
