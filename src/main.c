#include <stdio.h>
#include <stdlib.h>

#include "state.h"
#include "file/file.h"
//#include "log/log.h"

int main(int argc, char *argv[])
{
	// Between log_init and log_close we can call the log system fu

	//log_init();

	//log_trace("MouseEditor Initialized");

	struct app_state *state = malloc(sizeof(struct app_state));
	state->argc = argc;
	state->argv = argv;

	printf("Hello, World!\nArgument count: %i", state->argc);

	write_file(state);
	read_file(state);

	//log_terminate();

	return 0;
}
