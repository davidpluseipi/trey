#include<stdio.h>
#include<stdlib.h>

// variables
char str[100];
FILE * pFile;

// main module
int main() {
  printf("Enter file to open:\n");
  scanf("%s",str);

  // if file exists, exit with error msg
  if (fopen(str, "r") != NULL) {

    printf("File already exists. Exiting.\n");
    return 1;

  } else {
    pFile = fopen(str,"w");
    for (int i=0; i < 100; i++) {
      fprintf(pFile,"%d\n",i+1);
    }
    //close the FILE
    fclose(pFile);
  }
  return 0;
}
