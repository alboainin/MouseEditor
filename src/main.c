<<<<<<< HEAD
/*
Note: This file is just test file to check if function is working properly.
*/

#include "file/file.h"

int main(int argc, char *argv[])
{

    
    ReadFile(argc, argv);
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include "state.h"

int main(int argc, char *argv[])
{
	struct app_state *state = malloc(sizeof(struct app_state));
	state->argc = argc;
	state->argv = argv;

	printf("Hello, World!\nArgument count: %i", state->argc);
	return 0;
>>>>>>> master
}
