#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

// global variables
int n,total = 0;
char ch, term;
int answer = 0;

int gaussAdder(int n) {
   // Add integers from 1 to n
   printf("Adding has begun.\n");
   answer = n*(n+1)/2;
   return answer;
}

// main module
int main() {
  // prompt
  printf("Enter an integer:");

  // get and validate user input
  if ( scanf("%u%c", &n, &term) != 2 || term != '\n') {
    printf("invalid entry\n");
    return 1; //end the program
  } // end if statment

  else { // if user input is valid
    answer = gaussAdder(n);
    printf("Sum is %d",answer);
  }
  return 0;
} // end of main module
