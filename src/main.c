#include <stdio.h>
#include <stdlib.h>
#include "state.h"

int main(int argc, char *argv[])
{
	struct app_state *state = malloc(sizeof(struct global_state));
	state->argc = argc;
	state->argv = argv;

	printf("Hello, World!\nArgument count: %i", state->argc);
	return 0;
}
