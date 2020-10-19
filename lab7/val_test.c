#include<stdlib.h>

void f(void) {
  int* x = malloc(10*sizeof(int));
  x[10] = 0; // heap block overrun
} // memory leak; x is not freed

int main(void) {
  f();
  return 0;
}
