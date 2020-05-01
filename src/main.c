#include <stdio.h>
#include <stdlib.h>

#include "state.h"
#include "file/file.h"
#include "log/log.h"

//include "vendor/log/log.h"


int main(int argc, char *argv[])
{
    //FILE pointer passed to log_init in the begining of the program and to log_close at the end
    //Betwenn log_init and log_close we can call the log system functions eg: log_debug();

    FILE* filePtr;

    log_init(filePtr);

    log_trace("MouseEditor Initialized");


    struct app_state *state = malloc(sizeof(struct app_state));
    state->argc = argc;
    state->argv = argv;

	 //printf("Hello, World!\nArgument count: %i", state->argc);

	 //write_file(state);
	 //read_file(state);


    log_close(filePtr);

	return 0;
}
