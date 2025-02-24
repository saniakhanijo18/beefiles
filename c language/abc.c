#include <stdio.h>

// function to add one to the value pointed to by the pointer
void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main() {
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}

