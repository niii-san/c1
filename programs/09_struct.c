#include <stdio.h>
#include <string.h>

// User defined data type
struct student {
  // structure members
  int studentId;
  char studentLetter;
};

struct man {
  char name[20];
};

int main() {

  // Structures is a way to group several related variables;
  // user defined data type
  struct student s1 = {1, 'N'};

  printf("Student Id is %d\n", s1.studentId);
  printf("Student letter is: %c\n", s1.studentLetter);

  // pointer of structure

  struct student s2;
  struct student *ptrS2 = &s2;

  // arrow operators is used to directly dereference a stucture member
  ptrS2->studentLetter = 'X';
  ptrS2->studentId = 1000;

  printf("Student 2 id: %d\n", ptrS2->studentId);
  printf("Student 2 Letter: %c\n", ptrS2->studentLetter);

  struct man man1;

  struct man *manPtr = &man1;

  // cannot directly assign initialized

  strcpy(manPtr->name, "nishan");

  return 0;
}
