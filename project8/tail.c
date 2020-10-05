#include<stdio.h>
#include<stdlib.h>

int lineNumber = 1;
char str[80];
float f;
FILE * pFile;
int  = 0;
char lineContent[256];

int main(){
  printf("Enter file to open:\n");
  scanf("%s",str);
  pFile = fopen(str, "r");
  if (pFile != NULL){
    printf("file opened fine\n");

    //count the lines in the file by attempting to access them with fgets
    while (fgets(lineContent, sizeof(lineContent), pFile) != NULL) {
      printf("Line number %d: %s", lineNumber, lineContent);
      lineNumber++;
    }

    //loop through lastline-2 to lastline and print them




  } else {
    printf("That is not a real file.");
    return 1;
  }
  fclose(pFile);
  return 0;
}
