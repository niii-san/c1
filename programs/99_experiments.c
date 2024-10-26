#include <stdio.h>

// either define the function above main here or provide here infromation like
// the function interface here;
void hello();

int main() {
  hello();

  printf("Tests\n");

  int a = 100;
  int b = a + 11;

  printf("The value of a is: %d\n", a);
  printf("The value of b is: %d\n", b);

  int varWithNoValue;
  printf("This got printed when printing int var without value: %d\n",
         varWithNoValue);

  char A = 'N';
  char B = 'N';
  printf("A==B: %d\n", A == B);

  return 0;
}
void hello() { printf("hello from hello function!\n"); }
