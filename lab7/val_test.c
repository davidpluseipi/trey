#include<stdlib.h>

void f(void) {
  int* x = malloc(10*sizeof(int));
  x[10] = 0; // problem 1: heap block overrun
} //end f    // problem 2: memory leak; x is not freed

int main(void) {
  f();
  return 0;
} // end main
