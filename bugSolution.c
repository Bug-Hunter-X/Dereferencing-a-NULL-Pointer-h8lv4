#include <stdio.h>

int main() {
  int* ptr = NULL;
  if (ptr != NULL) { 
    *ptr = 10;  // Dereference only if ptr is not NULL
  } else {
    printf("Error: Pointer is NULL\n");
  }
  return 0;
}