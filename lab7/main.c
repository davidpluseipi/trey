#include<stdio.h>
#include<stdlib.h>

// External function declarations
double fun1(void (*f)(double), double x);
double fun2(double (*f)(double), double a, double b, int n);

// Internal Functions
void printNumber(double a) {
  printf("print number: %lf\n", a);
}

double myFunction(double input){
  return (input*2);
}

int main(){

  double ans;

  ans = fun1(printNumber,2);
  printf("output from function 1: %lf\n", ans);

  ans = fun2(myFunction,2,3,2);
  printf("output from function 2: %lf\n", ans);

  return 0;
}
