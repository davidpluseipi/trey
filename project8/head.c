#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	int lineNumber = 3;
	char str[80];
	float f;
	FILE * pFile;
	int count = 0;
	char line[256];
	int lastLine = 1;


	printf("Enter file to open:\n");
	scanf("%s",str);
	pFile = fopen(str, "r");
	if (pFile != NULL){

		printf("file opened fine\n");

		for (int i=0; i < lineNumber; i++) {
			while (1) {
		    ch = getchar();
		    if (ch == EOF) {
		      printf("Last line is line number %d", lastLine)
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

			fgets(line, sizeof(line), pFile);
			printf("%s",line);

		}

	} else {

		printf("That is not a real file.");
		return 1;

	}
	fclose(pFile);
	return 0;

}
