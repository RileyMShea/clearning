#include <stdio.h>
#include <string.h>

struct Pet {
  char name[50];
};

struct Person {
  char name[50];
  struct Pet pet;
};

int person_type(struct Person person) { return 0; }

int main() {
  char a[50] = "Riley";
  int size = sizeof a / sizeof *a;
  for (int i = 0; i < size; i++) {
  }
  struct Person riley;
  strcpy(riley.name, a);
  printf("%s %s", a, a);

  return 0;
}
