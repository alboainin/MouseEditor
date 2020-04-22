#include <stdio.h>
#include <stdlib.h>

#include "state.h"
#include "file/file.h"
#include "log/log.h"

int main(int argc, char *argv[])
{
	struct app_state *state = malloc(sizeof(struct app_state));
	state->argc = argc;
	state->argv = argv;

	/*printf("Hello, World!\nArgument count: %i", state->argc);*/
	//write_file(state);
	//read_file(state);

	/* Log_init function is taking the seconds to log but in the future it will be modified to take the time from the start of the
       till the terminating             
    */

	log_init(60);
	return 0;
}
