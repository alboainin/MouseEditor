#include <stdio.h>
#include <stdlib.h>
#include <memory>

#include "state.h"

int main(int argc, char *argv[])
{
	std::unique_ptr<app_state> state(new app_state());
	state->argc = argc;
	state->argv = argv;

	printf("Hello, World!\nArgument count: %i", state->argc);

	return 0;
}
