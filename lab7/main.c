#include<stdio.h>

// A normal function with int parameter and void return type
void fun(int a) {
  printf("Value of a is %d\n", a);
}

int main(){
  // funptr is a pointer to the function void
  void (*funptr)(int) = &fun;

  // the above line is equivalent to
  // void (*funptr)(int);
  // funptr = &fun;

  // Invoking fun() using funptr
  (*funptr)(10);

  return 0;

}
