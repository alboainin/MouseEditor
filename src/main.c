#include <stdio.h>
#include <stdlib.h>
#include "state.h"
#include "file/file.h"

int main(int argc, char *argv[])
{
	struct app_state *state = malloc(sizeof(struct app_state));
	state->argc = argc;
	state->argv = argv;
    

	//printf("Hello, World!\nArgument count: %i", state->argc);
    WriteFile(state);
    ReadFile(state);

}
