#include "file.h"

void access_file(FILE *filePtr, char ch)
{
	while ((ch = fgetc(filePtr)) != EOF) {
		printf("%c", ch);
	}
}

void read_file(struct app_state *state)
{
	char charecters;

	if (state->argc < 2) {
		/* Error Msg */
	} else {
		FILE *readFilePtr;
		readFilePtr = fopen(state->argv[1], "r");

		if (readFilePtr == NULL) {
			FILE *writeFilePtr;
			writeFilePtr = fopen(state->argv[1], "w");
			access_file(writeFilePtr, charecters);
			fclose(writeFilePtr);
		}

		access_file(readFilePtr, charecters);
		fclose(readFilePtr);
	}
}
