#include "log.h"

FILE* logPtr;

void log_init()
{
	if (access("log.txt", F_OK) != -1) {
		logPtr = fopen("log.txt", "a");
	} else {
		logPtr = fopen("log.txt", "w");
	}

    log_set_fp(logPtr);
    
}

void log_terminate()
{
    fclose(logPtr);
}
