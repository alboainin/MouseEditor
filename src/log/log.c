#include "log.h"


void log_init(FILE* Iptr)
{
	if (access("LOG.txt", F_OK) != -1) {
		Iptr = fopen("LOG.txt", "a");
	} else {
		Iptr = fopen("LOG.txt", "w");
	}

    log_set_fp(Iptr);
    
}

void log_close(FILE* Cptr)
{
    fclose(Cptr);
}
