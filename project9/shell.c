#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// variables
int n, count, method, x, y = 0;


// main module
int main() {

  // ask for the dimension of the square matrix, n
  printf("Enter dimension, n, of the n x n matrix:\n");
  scanf("%d",&n);
  system("clear");
  printf("You entered %d\n", n);

  // reject improper input
  if (n < 1 | n > 100) {
    printf("Invalid input. Exiting.\n");
    return 1;
  }
  //int A[3][3];

  // initialize matrix and dynamically
  int **A; // double pointer
  int m = n;
  A = malloc(sizeof(int *) * m);

  for (int i = 0; i < m; i++) {
    A[i] = malloc(sizeof(int) * n);
  }
  printf("Memory allocated.\n");

  //populate the matrix, M
  // select method
  printf("What method?\n");
  scanf("%d", &method);

  if (method == 1) {
    printf("method 1 : normal\n");
    printf("A =\n");
    for (int i=0; i<3; i++) {
      for (int j=0; j<3; j++) {
        A[i][j] = count;
        printf("%d ", A[i][j]);
        if (j == 2){
          printf("\n");
        }
        count++;
      }
    }
  } else if (method == 2){
    printf("method 2 : using floor\n");
    if (n % 2 == 0) {
      printf("x = %d",x);
      printf("y = %d",y);
    }
  }


  return 0;
}
