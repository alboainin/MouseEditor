#include "file.h"

void write_file(struct app_state *state)
{
	char *input;
	int limit = 0;
	int ptrCursor = 0;
	FILE *WA_filePtr;
	//input method
	if (state->argc < 2) {
		//return Error
	}

	else {
		input = (char *)calloc(1, sizeof(char));

		while (*(input + limit) != ':') {
			scanf("%c", (input + ptrCursor));
			limit = ptrCursor;
			ptrCursor++;
			input = realloc(input,
					((ptrCursor + 1) * sizeof(char)));
		}

		/*|writing|appending| input to the given file*/

		if (access(state->argv[1], F_OK) != -1) {
			WA_filePtr = fopen(state->argv[1], "a");
		}

		else {
			WA_filePtr = fopen(state->argv[1], "w");
		}

		for (ptrCursor = 0; ptrCursor <= limit; ptrCursor++) {
			fprintf(WA_filePtr, "%c", *(input + ptrCursor));
		}

		fclose(WA_filePtr);
		free(input);
	}
}
