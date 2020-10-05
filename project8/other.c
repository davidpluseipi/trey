#include<stdio.h>
#include<stdlib.h>

int ch;
int count, max = 0;

int main() {

  while (1) {
    ch = getchar();
    if (ch == EOF) {
      //print lastline-2 to lastline
    }
    if (ch == '\n') {
      printf("%d",count);
      count = 0;
      lineNumber++;
      }
    } else {
      count++;
    }

  }


  return 0;
}
