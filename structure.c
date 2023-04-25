#include <stdio.h>

// define a struct to represent a person
struct Person {
  char name[50];
  int age;
  float height;
};

int main() {
  // declare and initialize a person struct variable
  struct Person p1 = {"John Smith", 30, 1.75};

  // access and print the fields of the person struct variable
  printf("Name: %s\n", p1.name);
  printf("Age: %d\n", p1.age);
  printf("Height: %.2f\n", p1.height);

  // modify the fields of the person struct variable
  p1.age = 31;
  p1.height = 1.80;

  // access and print the modified fields of the person struct variable
  printf("Modified Age: %d\n", p1.age);
  printf("Modified Height: %.2f\n", p1.height);

  return 0;
}

