#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

// global variables
unsigned int n = 0;
char ch, term;
int i = 0;

// main module
int main() {
  // prompt
  printf("Hello. How many chars should I take?");

  // get and validate user input
  if ( scanf("%u%c", &n, &term) != 2 || term != '\n') {
    printf("invalid entry\n");
    return 1; //end the program
  } // end if statment

  else { // if user input is valid

    do { // do_while loops evaluate the condition after 1st running the loop
      if (i == 0){
        printf("Please give me a char: ");
      } else {
        printf("Thanks. Please give me another char: ");
      }
      // dump a potential new line character with \n before the %c
      scanf("\n%c", &ch);
      printf("You entered %c\n",ch);

      // this handles if the user enters numbers or symbols
      if ( isalpha(ch) != 0 ) {// if the char entered is in the alphabet
        i++;
      } else {
        printf("invaid entry\n");
      }
      // to handle the user entering full words...
      while (getchar() != '\n'); // dump other characters in the buffer

    } while (i < n); // evaluate the condition. If true, run the loop again.
    // end of the do_while loop
    printf("Thanks. I am happy with %d chars.\n", n);
  } // end the if-else

  return 0;
} // end of main module
