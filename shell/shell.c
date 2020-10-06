#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// variables
int n, count, method, x, y = 0;
int arr[9];

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
  for (int i = 0; i < n*n; i++){
    arr[i] = i + 1;
  }

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

  //if (method == 1) {
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
  //} else if (method == 2){
    printf("method 2 : spiral\n");

    if (n % 2 == 0) {
      x = (int) (floor(n/2.0)) - 1;
      y = (int) (floor(n/2.0)) - 1;
    } else {
      x = (int) (floor(n/2.0));
      y = (int) (floor(n/2.0));
    }
    printf("x = %d",x);
    printf("y = %d",y);

    int s = 1;
    int c = 0;
    int d = 0;

    // print matrix on every loop

    for (int a=0; a<3; a++) {
      for (int b=0; b<3; b++) {
        printf("%*d ", 5, A[a][b]);
        if (b == 2) {
          printf("\n");
        }
        count++;
      }
    }

    for (int k = 1; k < n; k++) {
      for (int j = 0; j < k; j++) {
        for (int i = 0; i < s; i++) {
          printf("\n");
          printf("i= %d\nj= %d\nk= %d\nd= %d\ns= %d\n",i,j,k,d,s);
          // print matrix on every loop

          for (int a=0; a<3; a++) {
            for (int b=0; b<3; b++) {
              printf("%*d ", 5, A[a][b]);
              if (b == 2) {
                printf("\n");
              }
              count++;
            }
          }

          A[x][y] = arr[c];
          c++;
          switch (d) {
            case 0 :
              y = y + 1;
              break;
            case 1 :
              x = x + 1;
              break;
            case 2 :
              y = y - 1;
              break;
            case 3 :
              x = x - 1;
              break;
          }


        } // end of the for i loop
        d = (d+1) % 4;
      } // end of the for j loop
      s = s + 1;
    }


    printf("A =\n");
    for (int i=0; i<3; i++) {
      for (int j=0; j<3; j++) {
        printf("%*d ", 5, A[i][j]);
        if (j == 2) {
          printf("\n");
        }
        count++;
      }
    }
  //} //end of the else if method 2

  return 0;
}
