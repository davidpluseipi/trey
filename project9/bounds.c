#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// variables
int n;
float * A;

// main module
int main() {

  // ask for array sizeof
  printf("Enter dimension, n, of the n x n matrix:\n");
	scanf("%d",&n);
  system("clear");
  printf("You entered %d\n", n);

  // validate input
  if (n < 1 | n > 250) {
    printf("Invalid input. Exiting.\n");
    return 1;
  }

  // malloc array to hold n floats
  A = (float *) malloc(n * sizeof(float));
  
  // set values in array to formula

  //

  return 0;
}
