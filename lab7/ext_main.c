#include<stdio.h>
double y;

double fun1(void (*f)(double), double x) {
  y = x*x;
  (*f)(y);
  return y;
}

double fun2(double (*f)(double), double a, double b, int n) {
  double m, ans, sum, term = 0;
  int row, col = 10;
  printf("Entered fun2\n");
  // initialize w and m matrix and allocate memory
  /*
  double **W; // double pointer
  double **X;
  W = malloc(sizeof(double *) * row);
  X = malloc(sizeof(double *) * row);
  for (int i = 0; i < row; i++) {
    W[i] = malloc(sizeof(double) * col);
    X[i] = malloc(sizeof(double) * col);
  }
  */
  double W[row][col];
  double X[row][col];
  printf("line A\n");
  // Enter the required data
  double w2[] = {1,1};
  double x2[] = {-0.577,0.577};
  int j = 2;
  printf("line B\n");
  for (int i = 0; i < 2; i++){ //2 is the length of the data array (varies)
    W[i][j] = w2[i];
    X[i][j] = x2[i];
  }
  printf("Created W and X\n");

  // verify W
  for (int i=0; i<row; i++) {
    for (int j=0; j<col; j++) {
      printf("%*lf ", 5, W[i][j]);
      if (j == col){
        printf("\n");
      }
    }
  }
  // verify X
  for (int i=0; i<row; i++) {
    for (int j=0; j<col; j++) {
      printf("%*lf ", 5, X[i][j]);
      if (j == col){
        printf("\n");
      }
    }
  }
  m = (b-a)/2;
  // Sum the terms
  for (int i=0; i < n; i++) {
    term = W[i][n] * (*f)(X[i][n]);
    sum = sum + term;
  }
  ans = m*sum;
  return ans;
}
