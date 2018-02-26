#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

/* This function takes two strings as input, the first string is the string to be written
to a file and the second string is the filename of the file where the string is stored. The 
function also prints
*/
int main(int num_strings, char* input_strings[]){
	char* string = input_strings[1];
	char* filename;
	scanf("%s",filename);
	printf("%s",string);
	printf("%s",filename);
	if(num_strings != 2){
		printf("Error: Wrong Number of Inputs\n");
		return -1;
	}
	else{
		printf("%s\n",string);
		FILE *out_file = fopen(filename, "w");
		fprintf(out_file, "%s",string);
		fclose(out_file);
		return 0;
	}
	// Reflect: The thing that slowed me down the most was that I did not realize you had to use 
	// a pipe for tee to work. Next time, I would do better research on the implementation to make
	// sure that I completely understand what I should be doing.

	// The professional code is better encapsulated with error checking and warnings. If my code
	// were to break, the user wouldn't necessarily know what was wrong or how to fix it. 
	// That isn't as much of a concern with the professional code.
	
}