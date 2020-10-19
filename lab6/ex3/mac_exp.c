#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// global variables
double change = 1.0;
double den = 1.0;
double err = 0.05;
double num = 0.0;
double sum = 0.0;
double term = 0.0;
double x = 0.0;

int iter = 0;
int n = 0;

double factorial(int n) {
  double d = 1;
  if (n == 0) {
    d = 1;
  } else {
    d = n * factorial(n-1);
  }
  return d;
}

// main modules
int main() {
  printf("To estimate the MacLaurin Series for e^x, enter the following\n");
  printf("x: \n");
  scanf("%lf", &x);
  printf("error: \n");
  scanf("%lf", &err);

  // check for valid input
  if ((x < 0) | (err >= 1)) {
    printf("Invalid input");
    return 1;
  }

/*
  // Test with first 4 terms
  for (n = 0; n < 4; n++) {
    // Calculate the numerator and denominator
    num = pow(x,n);
    den = factorial(n);

    term = num/den;
    sum += term;

    printf("Numerator is %lf\n", num);
    printf("Denominator is %lf\n", den);
    printf("Term is %lf\n", term);
    printf("Sum is %lf\n", sum);
  }

  // The Real Deal
  n = 0;
  sum = 0.0;
  term = 0.0;
*/
  while(change > err)  {
    term = pow(x,n)/factorial(n);
    if (sum > 0){
      change = term / sum;
    }
    sum = sum + term;
    n++;
  }

  // Print output
  iter = n + 1;
  printf("After %d terms, exp(%lf) is approx. %lf with an error of %lf.\n", iter,x,sum,err);
  return 0;
}
